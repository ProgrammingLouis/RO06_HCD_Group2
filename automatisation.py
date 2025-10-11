import xml.etree.ElementTree as ET
import os
import subprocess
import csv
from typing import Dict, List, Any

class VivadoHLSOptimizer:
    """
    Classe pour automatiser l'optimisation des paramètres Vivado HLS
    et analyser les rapports de synthèse
    """
    
    def __init__(self, project_name="HCD_ENSTA_Test", top_function="HLS_accel"):
        self.project_name = project_name
        self.top_function = top_function
        self.base_files = {
            "sources": "sources/HCD_accel.cpp",
            "header": "sources/HCD.h",
            "testbench": "sources/HCD_test.cpp"
        }
        self.part = "xc7z020-clg484-1"
        self.clock_period = 2 # Fréquence max zedboard 667MHz=1.5ns
        
        # Configuration des paramètres à optimiser
        self.optimization_params = {
            'pipeline_II': [1, 2],
            'unroll_factor': [1, 2, 4, 8, 16, 32],
            # 'array_partition_type': ['none', 'cyclic'],# , 'complete', 'block'], # To use more BRAMs but complete impossible on large arrays, we will test only none and cyclic because block not better than cyclic
            # 'array_partition_factor': [2, 4, 8],  # Pour cyclic/block partition
            # 'array_partition_dim': [0, 1], # Permet de choisir sur quel indice on partitionne (dans notre cas notre tableau est carré donc il suffit de tester sur 1 et 0)
            # 'enable_flatten': [False, True], # Useless
            # 'ressource': ['DSP48E', 'FF', 'LUT'], # Pas bon, faut corriger
            # 'enable_dataflow': [False, True], # Making the test crash
            'enable_expression_balance': [False, True],
            'interface_mode': ['s_axilite', 'axis'],
            'enable_dependence': [False, True],
        }
        
        # For none 96x1 Possibilities
        # For cyclic 96x3x2 = 576 possibilities
        # Without array partition, we are 2x4x2x2x2 = 128 possibilities

        self.loop_labels = [
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label4",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5",
            # "HCD_filter_hw/HCD_filter_hw_label0",  # Too much resources if using pipeline on this loop because there is a array declared inside
            # "HCD_filter_hw/HCD_filter_hw_label1", # Too much resources if using pipeline on this loop because there is a array declared inside
            "HCD_filter_hw/HCD_filter_hw_label2",
            "HCD_filter_hw/HCD_filter_hw_label3",
        ]
        
        self.inner_loop_labels = [#unroll_labels = [
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5",
            "HCD_filter_hw/HCD_filter_hw_label1", # Too much resources if using unroll on this loop because there is a array declared inside
            "HCD_filter_hw/HCD_filter_hw_label3",
        ]

        self.outside_loop_labels = [#flatten_labels = [
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0", 
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2",
            "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label4",
            "HCD_filter_hw/HCD_filter_hw_label0",
            "HCD_filter_hw/HCD_filter_hw_label2",
        ]

        # Variables pour partition des arrays
        self.array_vars = [
            ("HCD_filter_hw", "S_x2"),
            ("HCD_filter_hw", "S_y2"),
            ("HCD_filter_hw", "S_xy"),
            ("HCD_filter_hw", "Ix2_window"),
            ("HCD_filter_hw", "Iy2_window"),
            ("HCD_filter_hw", "Ixy_window"),
            ("wrapped_HCD_filter_hw", "I_x"),
            ("wrapped_HCD_filter_hw", "I_y"),
            ("wrapped_HCD_filter_hw", "output_img")
        ]

        self.functions_name = [
            "apply_kernel_single_block",
            "HCD_filter_hw",
            "pop_stream",
            "push_stream",
            "wrapped_HCD_filter_hw"
        ]
        
    def generate_tcl_script(self, solution_name: str, params: Dict[str, Any]) -> str:
        """
        Génère un script TCL avec les paramètres d'optimisation donnés
        """
        tcl_content = f'''############################################################
## Script généré automatiquement pour l'optimisation HLS
############################################################

open_project -reset {self.project_name}
set_top {self.top_function}

add_files {self.base_files["sources"]}
add_files -tb {self.base_files["header"]} -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb {self.base_files["testbench"]} -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"

open_solution -reset "{solution_name}"
set_part {{{self.part}}}
create_clock -period {self.clock_period} -name default

# HLS Directives
'''
        
        # Inline directives (toujours activés pour aider le pipelining)
        tcl_content += '''
## inline all functions
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream" 
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"
'''
        
        # Pipeline directives
        pipeline_ii = params.get('pipeline_II', 1)
        tcl_content += f'\n## pipeline loops with II={pipeline_ii}\n'
        for label in self.loop_labels:
            tcl_content += f'set_directive_pipeline -II {pipeline_ii} "{label}"\n'
        
        # Flatten directives
        tcl_content += '\n## Flatten loops\n'
        for label in self.outside_loop_labels:
            tcl_content += f'set_directive_loop_flatten "{label}"\n'
        
        # Unroll directives
        unroll_factor = params.get('unroll_factor', 1)
        if unroll_factor > 1:
            tcl_content += f'\n## unroll loops at factor {unroll_factor}\n'
            for label in self.inner_loop_labels:
                tcl_content += f'set_directive_unroll -factor {unroll_factor} "{label}"\n'
        
        # Array partition directives
        # partition_type = params.get('array_partition_type', 'none')
        # partition_dim = params.get('array_partition_dim', 'none')
        # partition_factor = params.get('array_partition_factor', 'none')
        
        # if partition_type != 'none':
        #     if partition_type in ['cyclic', 'block']:
        #         tcl_content += f'\n## array partition dim {partition_dim} {partition_type} factor {partition_factor}\n'
        #         for func, var in self.array_vars:
        #             tcl_content += f'set_directive_array_partition -type {partition_type} -dim {partition_dim} -factor {partition_factor} "{func}" {var}\n'
        #     else: # complete
        #         tcl_content += f'\n## array partition dim {partition_dim} {partition_type}\n'
        #         for func, var in self.array_vars:
        #             tcl_content += f'set_directive_array_partition -type {partition_type} -dim {partition_dim} "{func}" {var}\n'

        # Ressource directives
        # ressource = params.get('ressource', 'none')
        # if ressource != 'none':
        #     tcl_content += f'\n## set ressource to {ressource}\n'
        #     for func in self.functions_name:
        #         tcl_content += f'set_directive_resource -core {ressource} "{func}" return\n'
        #     for func, var in self.array_vars:
        #         tcl_content += f'set_directive_resource -core {ressource} "{func}" {var}\n'

        # Dataflow directive
        # if params.get('enable_dataflow', False):
        #     tcl_content += '\n## Enable dataflow\n'
        #     for function in self.functions_name:
        #         tcl_content += f'set_directive_dataflow "{function}"\n'
        #     for loop_label in self.loop_labels:
        #         tcl_content += f'set_directive_dataflow "{loop_label}"\n'

        # Expression balance directive
        if params.get('enable_expression_balance', False):
            tcl_content += '\n## Enable expression balance\n'
            for label in self.loop_labels:
                tcl_content += f'set_directive_expression_balance "{label}"\n'
            for func in self.functions_name:
                tcl_content += f'set_directive_expression_balance "{func}"\n'

        # Interface mode directive
        interface_mode = params.get('interface_mode', 'axis')
        tcl_content += '\n## Set interface mode axis\n'
        for func in self.functions_name:
            tcl_content += f'set_directive_interface -mode {interface_mode} "{func}"\n'

        # Dependence directive
        if params.get('enable_dependence', False):
            tcl_content += '\n## Enable dependence false\n'
            for label in self.loop_labels:
                tcl_content += f'set_directive_dependence -type inter -dependent false "{label}"\n'
            for func in self.functions_name:
                tcl_content += f'set_directive_dependence -type inter -dependent false "{func}"\n'

        # Commandes de simulation et synthèse
        tcl_content += '''
## csim_design
csynth_design
close_solution

exit
'''
        
        return tcl_content
    
    def parse_synthesis_report(self, xml_file_path: str) -> Dict[str, Any]: 
        """
        Parse le rapport de synthèse XML et extrait les métriques importantes
        """
        if not os.path.exists(xml_file_path):
            return {"error": f"Fichier {xml_file_path} introuvable"}
        
        try:
            tree = ET.parse(xml_file_path)
            root = tree.getroot()
            
            results = {}
            
            # Parsing des ressources utilisées
            for perf in root.findall('.//PerformanceEstimates'):
                # Latence
                timing_summary = perf.find('.//SummaryOfTimingAnalysis')
                if timing_summary is not None:
                    estimated_clk = timing_summary.find('EstimatedClockPeriod')
                    if estimated_clk is not None:
                        results['estimated_clock_period'] = float(estimated_clk.text)
                
                # Latence en cycles
                summary = perf.find('.//SummaryOfOverallLatency')
                if summary is not None:
                    results['min_latency'] = int(summary.find('Best-caseLatency').text or 0)
                    results['max_latency'] = int(summary.find('Worst-caseLatency').text or 0)
                # Intervalle d'initiation (II)
                ii_elem = perf.find('.//IntervalItereration') or perf.find('.//Interval')
                if ii_elem is not None:
                    results['initiation_interval'] = int(ii_elem.get('min', 1))
            
            # Parsing des ressources FPGA
            for area in root.findall('.//AreaEstimates'):
                resources = area.find('.//Resources')
                if resources is not None:
                    results['BRAM_18K_used'] = int(resources.find('BRAM_18K').text or 0)
                    results['DSP48E_used'] = int(resources.find('DSP48E').text or 0) 
                    results['FF_used'] = int(resources.find('FF').text or 0)
                    results['LUT_used'] = int(resources.find('LUT').text or 0)
                resources = area.find('.//AvailableResources')
                if resources is not None:
                    results['BRAM_18K_available'] = int(resources.find('BRAM_18K').text or 0)
                    results['DSP48E_available'] = int(resources.find('DSP48E').text or 0) 
                    results['FF_available'] = int(resources.find('FF').text or 0)
                    results['LUT_available'] = int(resources.find('LUT').text or 0)

            results['BRAM_18K'] = (results['BRAM_18K_used']/results['BRAM_18K_available'])*100 
            results['DSP48E'] = (results['DSP48E_used']/results['DSP48E_available'])*100
            results['FF'] = (results['FF_used']/results['FF_available'])*100
            results['LUT'] = (results['LUT_used']/results['LUT_available'])*100
            # Calcul de l'utilisation totale des ressources (score composite)
            total_resources = (results['BRAM_18K'] + results['DSP48E'] + results['FF'] + results['LUT'])/4
            results['total_resources'] = total_resources
            
            return results
            
        except ET.ParseError as e:
            return {"error": f"Erreur parsing XML: {e}"}
        except Exception as e:
            return {"error": f"Erreur inattendue: {e}"}
    
    def run_optimization_batch(self, max_solutions=10, output_csv="optimization_results.csv"):
        """
        Lance un batch d'optimisations avec différentes combinaisons de paramètres
        """
        print("Génération des combinaisons de paramètres...")
        
        # Génération de combinaisons intelligentes (pas exhaustives pour éviter explosion combinatoire)
        param_combinations = []
        #array_partition_dim = 'none'
        #array_partition_factor = 'none'
        # Stratégie: tester quelques combinaisons prometteuses
        
        for interface_mode in self.optimization_params['interface_mode']:
            for enable_dependence in self.optimization_params['enable_dependence']:
                # for partition_type in self.optimization_params['array_partition_type']:  
                    # for enable_flatten in self.optimization_params['enable_flatten']:
                        # for ressource in self.optimization_params['ressource']:
                            for pipeline_ii in self.optimization_params['pipeline_II']:
                                for unroll_factor in self.optimization_params['unroll_factor']:
                                    # for enable_dataflow in self.optimization_params['enable_dataflow']: 
                                        for enable_expression_balance in self.optimization_params['enable_expression_balance']:
                                            # if partition_type != 'none':
                                            #     for array_partition_dim in self.optimization_params['array_partition_dim']:
                                            #         if partition_type != 'complete':
                                            #             for array_partition_factor in self.optimization_params['array_partition_factor']:
                                                            # Limiter le nombre total de solutions
                                                            if len(param_combinations) >= max_solutions:
                                                                break
                                                            
                                                            params = {
                                                                'pipeline_II': pipeline_ii,
                                                                'unroll_factor': unroll_factor, 
                                                                # 'array_partition_type': partition_type,
                                                                # 'array_partition_dim': array_partition_dim,
                                                                # 'enable_flatten': enable_flatten,
                                                                # 'ressource': ressource,
                                                                # 'enable_dataflow': enable_dataflow,
                                                                'enable_expression_balance': enable_expression_balance,
                                                                'interface_mode': interface_mode,
                                                                'enable_dependence': enable_dependence,
                                                                # 'array_partition_factor': array_partition_factor
                                                            }
                                                            param_combinations.append(params)
        
        print(f"Génération de {len(param_combinations)} solutions à tester...")
        
        # Stockage des résultats
        results = []
        print("Répertoire courant:", os.getcwd())
        
        for i, params in enumerate(param_combinations):
            solution_name = f"sol_auto_{i:03d}" # A voir
            print(f"\n=== Solution {i+1}/{len(param_combinations)}: {solution_name} ===")
            print(f"Paramètres: {params}")
            
            # Vérifier si le script TCL existe déjà pour éviter de refaire la solution
            if os.path.exists(f"{solution_name}.tcl"):
                print(f"Le script {solution_name}.tcl existe déjà, passage à la solution suivante.")
                script_filename = f"{solution_name}.tcl"
                # Path supposé du rapport XML
                xml_path = f"{self.project_name}/{solution_name}/syn/report/{self.top_function}_csynth.xml"
                
                synthetic_results = self.parse_synthesis_report(xml_path)

                # Combinaison des paramètres et résultats
                result_entry = {
                    'solution_name': solution_name,
                    'script_file': script_filename,
                    'xml_report_path': xml_path,
                    **params,
                    **synthetic_results
                }
                
                results.append(result_entry)
                print(f"Résultats: {synthetic_results}")
                continue
            else:
                # Génération du script TCL
                tcl_script = self.generate_tcl_script(solution_name, params)
                script_filename = f"{solution_name}.tcl"
                
                with open(script_filename, 'w') as f:
                    f.write(tcl_script)
                
                print(f"Script TCL généré: {script_filename}")
                
                # Simulation de l'exécution (remplacer par vraie exécution Vivado HLS)
                print("Simulation de l'exécution Vivado HLS...")
                
                # Lancement de la commande Vivado HLS avec le script TCL généré
                try:
                    subprocess.run(['C:/Xilinx/Vivado/2019.2/bin/vivado_hls.bat', '-f', script_filename], check=True)
                    print(f"Commande Vivado HLS exécutée: vivado_hls -f {script_filename}")
                except Exception as e:
                    print(f"Erreur lors de l'exécution de vivado_hls -f {script_filename} : {e}")
                
                # Path supposé du rapport XML
                xml_path = f"{self.project_name}/{solution_name}/syn/report/{self.top_function}_csynth.xml"
                
                synthetic_results = self.parse_synthesis_report(xml_path)

                # Combinaison des paramètres et résultats
                result_entry = {
                    'solution_name': solution_name,
                    'script_file': script_filename,
                    'xml_report_path': xml_path,
                    **params,
                    **synthetic_results
                }
                
                results.append(result_entry)
                print(f"Résultats: {synthetic_results}")
        
                # Sauvegarde du dernier résultat en CSV
                self._save_results_csv(result_entry, output_csv)
                print(f"\nRésultat sauvegardé dans {output_csv}")
        
        # Analyse et recommandations
        self._analyze_results(results)
        
        return results
    
    def _save_results_csv(self, result: Dict[str, Any], filename: str):
        """
        Sauvegarde du dernier résultat en CSV
        """
        if not result:
            return
            
        # Supprimer les éléments contenant la clé "error"
        if "error" in result:
            return
        fieldnames = list(result.keys())
        file_exists = os.path.isfile(filename)
        write_header = not file_exists or os.stat(filename).st_size == 0

        with open(filename, 'a', newline='', encoding='utf-8') as csvfile:
            writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
            if write_header:
                writer.writeheader()
            print("result:", result)
            writer.writerow(result)
    
    def _analyze_results(self, results: List[Dict[str, Any]]):
        """
        Analyse les résultats et fournit des recommandations
        """
        print("\n" + "="*60)
        print("ANALYSE DES RÉSULTATS")
        print("="*60)
        
        # Tri par différents critères
        by_latency = sorted(results, key=lambda x: x.get('min_latency', float('inf')))
        by_resources = sorted(results, key=lambda x: x.get('total_resources', float('inf')))
        
        print("\n🏆 TOP 3 - LATENCE MINIMALE:")
        for i, result in enumerate(by_latency[:3]):
            print(f"{i+1}. {result['solution_name']}")
            print(f"   Latence: {result.get('min_latency', 'N/A')} cycles")
            print(f"   Ressources totales: {result.get('total_resources', 'N/A')}")
            print(f"   Pipeline II: {result['pipeline_II']}, Unroll: {result['unroll_factor']}")
        
        print("\n🔧 TOP 3 - RESSOURCES MINIMALES:")
        for i, result in enumerate(by_resources[:3]):
            print(f"{i+1}. {result['solution_name']}")
            print(f"   Ressources totales: {result.get('total_resources', 'N/A')}")
            print(f"   Latence: {result.get('min_latency', 'N/A')} cycles")
            print(f"   Pipeline II: {result['pipeline_II']}, Unroll: {result['unroll_factor']}")
        
        # Calcul du score Pareto (compromis latence/ressources)
        pareto_results = []
        for result in results:
            latency = result.get('min_latency', float('inf'))
            resources = result.get('total_resources', float('inf'))
            # Score normalisé (plus bas = mieux)
            pareto_score = (latency / max(r.get('min_latency', 1) for r in results)) + \
                          (resources / max(r.get('total_resources', 1) for r in results))
            pareto_results.append((pareto_score, result))
        
        pareto_results.sort(key=lambda x: x[0])
        
        print("\n⚖️ TOP 3 - MEILLEUR COMPROMIS (Pareto):")
        for i, (score, result) in enumerate(pareto_results[:3]):
            print(f"{i+1}. {result['solution_name']} (score: {score:.3f})")
            print(f"   Latence: {result.get('min_latency', 'N/A')} cycles")
            print(f"   Ressources: {result.get('total_resources', 'N/A')}")
            print(f"   Pipeline II: {result['pipeline_II']}, Unroll: {result['unroll_factor']}")
        
        print(f"\n📊 Nombre total de solutions testées: {len(results)}")

# Démonstration d'utilisation
if __name__ == "__main__":
    optimizer = VivadoHLSOptimizer()
    
    print("=== OPTIMISEUR VIVADO HLS ===")
    print("Génération automatique de scripts TCL et analyse des rapports\n")
    
    # Lancement de l'optimisation
    results = optimizer.run_optimization_batch(max_solutions=96) # 2x6x2x2x2=96 solutions 
    
    print(f"\n✅ Optimisation terminée!")
    print(f"📁 {len(results)} scripts TCL générés")
    print(f"📊 Résultats disponibles dans optimization_results.csv")