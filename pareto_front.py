import csv
import matplotlib.pyplot as plt

# Lecture des données depuis le CSV
pareto_points = []
with open('optimization_results.csv', 'r', encoding='utf-8') as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        try:
            latency = int(row['min_latency'])
            resources = float(row['total_resources'])
            pareto_points.append((resources, latency))
        except Exception as e:
            # Ignorer les lignes malformées
            continue

# Tri des points en fonction des ressources (X axis)
pareto_points = sorted(pareto_points)

# Extraction des axes X et Y
resources = [p[0] for p in pareto_points]
latencies = [p[1] for p in pareto_points]

# Tracé du graphe
plt.figure(figsize=(8,6))
plt.scatter(resources, latencies, color='blue', label='Solutions')
plt.xlabel('Resource Usage (%)')
plt.ylabel('Latency (cycles)')
plt.title('Pareto Front: Resource Usage vs Latency')
plt.grid(True)
plt.legend()
plt.gca().invert_xaxis()  # Inversion axe X
plt.tight_layout()
plt.show()
