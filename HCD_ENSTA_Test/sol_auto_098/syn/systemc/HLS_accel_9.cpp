#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_mul_ln78_214_fu_58917_p1() {
    mul_ln78_214_fu_58917_p1 =  (sc_lv<5>) (mul_ln78_214_fu_58917_p10.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58917_p10() {
    mul_ln78_214_fu_58917_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58917_p2() {
    mul_ln78_214_fu_58917_p2 = (!mul_ln78_214_fu_58917_p0.read().is_01() || !mul_ln78_214_fu_58917_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_214_fu_58917_p0.read()) * sc_biguint<5>(mul_ln78_214_fu_58917_p1.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59008_p0() {
    mul_ln78_215_fu_59008_p0 =  (sc_lv<5>) (mul_ln78_215_fu_59008_p00.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59008_p00() {
    mul_ln78_215_fu_59008_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59008_p1() {
    mul_ln78_215_fu_59008_p1 =  (sc_lv<5>) (mul_ln78_215_fu_59008_p10.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59008_p10() {
    mul_ln78_215_fu_59008_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59008_p2() {
    mul_ln78_215_fu_59008_p2 = (!mul_ln78_215_fu_59008_p0.read().is_01() || !mul_ln78_215_fu_59008_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_215_fu_59008_p0.read()) * sc_biguint<5>(mul_ln78_215_fu_59008_p1.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59189_p0() {
    mul_ln78_216_fu_59189_p0 =  (sc_lv<5>) (mul_ln78_216_fu_59189_p00.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59189_p00() {
    mul_ln78_216_fu_59189_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59189_p1() {
    mul_ln78_216_fu_59189_p1 =  (sc_lv<5>) (mul_ln78_216_fu_59189_p10.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59189_p10() {
    mul_ln78_216_fu_59189_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59189_p2() {
    mul_ln78_216_fu_59189_p2 = (!mul_ln78_216_fu_59189_p0.read().is_01() || !mul_ln78_216_fu_59189_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_216_fu_59189_p0.read()) * sc_biguint<5>(mul_ln78_216_fu_59189_p1.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59280_p0() {
    mul_ln78_217_fu_59280_p0 =  (sc_lv<5>) (mul_ln78_217_fu_59280_p00.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59280_p00() {
    mul_ln78_217_fu_59280_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59280_p1() {
    mul_ln78_217_fu_59280_p1 =  (sc_lv<5>) (mul_ln78_217_fu_59280_p10.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59280_p10() {
    mul_ln78_217_fu_59280_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59280_p2() {
    mul_ln78_217_fu_59280_p2 = (!mul_ln78_217_fu_59280_p0.read().is_01() || !mul_ln78_217_fu_59280_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_217_fu_59280_p0.read()) * sc_biguint<5>(mul_ln78_217_fu_59280_p1.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59461_p0() {
    mul_ln78_218_fu_59461_p0 =  (sc_lv<5>) (mul_ln78_218_fu_59461_p00.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59461_p00() {
    mul_ln78_218_fu_59461_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59461_p1() {
    mul_ln78_218_fu_59461_p1 =  (sc_lv<5>) (mul_ln78_218_fu_59461_p10.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59461_p10() {
    mul_ln78_218_fu_59461_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59461_p2() {
    mul_ln78_218_fu_59461_p2 = (!mul_ln78_218_fu_59461_p0.read().is_01() || !mul_ln78_218_fu_59461_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_218_fu_59461_p0.read()) * sc_biguint<5>(mul_ln78_218_fu_59461_p1.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59552_p0() {
    mul_ln78_219_fu_59552_p0 =  (sc_lv<5>) (mul_ln78_219_fu_59552_p00.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59552_p00() {
    mul_ln78_219_fu_59552_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59552_p1() {
    mul_ln78_219_fu_59552_p1 =  (sc_lv<5>) (mul_ln78_219_fu_59552_p10.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59552_p10() {
    mul_ln78_219_fu_59552_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59552_p2() {
    mul_ln78_219_fu_59552_p2 = (!mul_ln78_219_fu_59552_p0.read().is_01() || !mul_ln78_219_fu_59552_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_219_fu_59552_p0.read()) * sc_biguint<5>(mul_ln78_219_fu_59552_p1.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32624_p0() {
    mul_ln78_21_fu_32624_p0 =  (sc_lv<5>) (mul_ln78_21_fu_32624_p00.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32624_p00() {
    mul_ln78_21_fu_32624_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32624_p1() {
    mul_ln78_21_fu_32624_p1 =  (sc_lv<5>) (mul_ln78_21_fu_32624_p10.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32624_p10() {
    mul_ln78_21_fu_32624_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32624_p2() {
    mul_ln78_21_fu_32624_p2 = (!mul_ln78_21_fu_32624_p0.read().is_01() || !mul_ln78_21_fu_32624_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_21_fu_32624_p0.read()) * sc_biguint<5>(mul_ln78_21_fu_32624_p1.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59733_p0() {
    mul_ln78_220_fu_59733_p0 =  (sc_lv<5>) (mul_ln78_220_fu_59733_p00.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59733_p00() {
    mul_ln78_220_fu_59733_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59733_p1() {
    mul_ln78_220_fu_59733_p1 =  (sc_lv<5>) (mul_ln78_220_fu_59733_p10.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59733_p10() {
    mul_ln78_220_fu_59733_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59733_p2() {
    mul_ln78_220_fu_59733_p2 = (!mul_ln78_220_fu_59733_p0.read().is_01() || !mul_ln78_220_fu_59733_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_220_fu_59733_p0.read()) * sc_biguint<5>(mul_ln78_220_fu_59733_p1.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59824_p0() {
    mul_ln78_221_fu_59824_p0 =  (sc_lv<5>) (mul_ln78_221_fu_59824_p00.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59824_p00() {
    mul_ln78_221_fu_59824_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59824_p1() {
    mul_ln78_221_fu_59824_p1 =  (sc_lv<5>) (mul_ln78_221_fu_59824_p10.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59824_p10() {
    mul_ln78_221_fu_59824_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59824_p2() {
    mul_ln78_221_fu_59824_p2 = (!mul_ln78_221_fu_59824_p0.read().is_01() || !mul_ln78_221_fu_59824_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_221_fu_59824_p0.read()) * sc_biguint<5>(mul_ln78_221_fu_59824_p1.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60005_p0() {
    mul_ln78_222_fu_60005_p0 =  (sc_lv<5>) (mul_ln78_222_fu_60005_p00.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60005_p00() {
    mul_ln78_222_fu_60005_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60005_p1() {
    mul_ln78_222_fu_60005_p1 =  (sc_lv<5>) (mul_ln78_222_fu_60005_p10.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60005_p10() {
    mul_ln78_222_fu_60005_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60005_p2() {
    mul_ln78_222_fu_60005_p2 = (!mul_ln78_222_fu_60005_p0.read().is_01() || !mul_ln78_222_fu_60005_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_222_fu_60005_p0.read()) * sc_biguint<5>(mul_ln78_222_fu_60005_p1.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60096_p0() {
    mul_ln78_223_fu_60096_p0 =  (sc_lv<5>) (mul_ln78_223_fu_60096_p00.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60096_p00() {
    mul_ln78_223_fu_60096_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60096_p1() {
    mul_ln78_223_fu_60096_p1 =  (sc_lv<5>) (mul_ln78_223_fu_60096_p10.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60096_p10() {
    mul_ln78_223_fu_60096_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60096_p2() {
    mul_ln78_223_fu_60096_p2 = (!mul_ln78_223_fu_60096_p0.read().is_01() || !mul_ln78_223_fu_60096_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_223_fu_60096_p0.read()) * sc_biguint<5>(mul_ln78_223_fu_60096_p1.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60277_p0() {
    mul_ln78_224_fu_60277_p0 =  (sc_lv<5>) (mul_ln78_224_fu_60277_p00.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60277_p00() {
    mul_ln78_224_fu_60277_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60277_p1() {
    mul_ln78_224_fu_60277_p1 =  (sc_lv<5>) (mul_ln78_224_fu_60277_p10.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60277_p10() {
    mul_ln78_224_fu_60277_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60277_p2() {
    mul_ln78_224_fu_60277_p2 = (!mul_ln78_224_fu_60277_p0.read().is_01() || !mul_ln78_224_fu_60277_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_224_fu_60277_p0.read()) * sc_biguint<5>(mul_ln78_224_fu_60277_p1.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60368_p0() {
    mul_ln78_225_fu_60368_p0 =  (sc_lv<5>) (mul_ln78_225_fu_60368_p00.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60368_p00() {
    mul_ln78_225_fu_60368_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60368_p1() {
    mul_ln78_225_fu_60368_p1 =  (sc_lv<5>) (mul_ln78_225_fu_60368_p10.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60368_p10() {
    mul_ln78_225_fu_60368_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60368_p2() {
    mul_ln78_225_fu_60368_p2 = (!mul_ln78_225_fu_60368_p0.read().is_01() || !mul_ln78_225_fu_60368_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_225_fu_60368_p0.read()) * sc_biguint<5>(mul_ln78_225_fu_60368_p1.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60549_p0() {
    mul_ln78_226_fu_60549_p0 =  (sc_lv<5>) (mul_ln78_226_fu_60549_p00.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60549_p00() {
    mul_ln78_226_fu_60549_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60549_p1() {
    mul_ln78_226_fu_60549_p1 =  (sc_lv<5>) (mul_ln78_226_fu_60549_p10.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60549_p10() {
    mul_ln78_226_fu_60549_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60549_p2() {
    mul_ln78_226_fu_60549_p2 = (!mul_ln78_226_fu_60549_p0.read().is_01() || !mul_ln78_226_fu_60549_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_226_fu_60549_p0.read()) * sc_biguint<5>(mul_ln78_226_fu_60549_p1.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60640_p0() {
    mul_ln78_227_fu_60640_p0 =  (sc_lv<5>) (mul_ln78_227_fu_60640_p00.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60640_p00() {
    mul_ln78_227_fu_60640_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60640_p1() {
    mul_ln78_227_fu_60640_p1 =  (sc_lv<5>) (mul_ln78_227_fu_60640_p10.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60640_p10() {
    mul_ln78_227_fu_60640_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60640_p2() {
    mul_ln78_227_fu_60640_p2 = (!mul_ln78_227_fu_60640_p0.read().is_01() || !mul_ln78_227_fu_60640_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_227_fu_60640_p0.read()) * sc_biguint<5>(mul_ln78_227_fu_60640_p1.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60821_p0() {
    mul_ln78_228_fu_60821_p0 =  (sc_lv<5>) (mul_ln78_228_fu_60821_p00.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60821_p00() {
    mul_ln78_228_fu_60821_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60821_p1() {
    mul_ln78_228_fu_60821_p1 =  (sc_lv<5>) (mul_ln78_228_fu_60821_p10.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60821_p10() {
    mul_ln78_228_fu_60821_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60821_p2() {
    mul_ln78_228_fu_60821_p2 = (!mul_ln78_228_fu_60821_p0.read().is_01() || !mul_ln78_228_fu_60821_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_228_fu_60821_p0.read()) * sc_biguint<5>(mul_ln78_228_fu_60821_p1.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60912_p0() {
    mul_ln78_229_fu_60912_p0 =  (sc_lv<5>) (mul_ln78_229_fu_60912_p00.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60912_p00() {
    mul_ln78_229_fu_60912_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60912_p1() {
    mul_ln78_229_fu_60912_p1 =  (sc_lv<5>) (mul_ln78_229_fu_60912_p10.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60912_p10() {
    mul_ln78_229_fu_60912_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60912_p2() {
    mul_ln78_229_fu_60912_p2 = (!mul_ln78_229_fu_60912_p0.read().is_01() || !mul_ln78_229_fu_60912_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_229_fu_60912_p0.read()) * sc_biguint<5>(mul_ln78_229_fu_60912_p1.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32805_p0() {
    mul_ln78_22_fu_32805_p0 =  (sc_lv<5>) (mul_ln78_22_fu_32805_p00.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32805_p00() {
    mul_ln78_22_fu_32805_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32805_p1() {
    mul_ln78_22_fu_32805_p1 =  (sc_lv<5>) (mul_ln78_22_fu_32805_p10.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32805_p10() {
    mul_ln78_22_fu_32805_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32805_p2() {
    mul_ln78_22_fu_32805_p2 = (!mul_ln78_22_fu_32805_p0.read().is_01() || !mul_ln78_22_fu_32805_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_22_fu_32805_p0.read()) * sc_biguint<5>(mul_ln78_22_fu_32805_p1.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61093_p0() {
    mul_ln78_230_fu_61093_p0 =  (sc_lv<5>) (mul_ln78_230_fu_61093_p00.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61093_p00() {
    mul_ln78_230_fu_61093_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61093_p1() {
    mul_ln78_230_fu_61093_p1 =  (sc_lv<5>) (mul_ln78_230_fu_61093_p10.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61093_p10() {
    mul_ln78_230_fu_61093_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61093_p2() {
    mul_ln78_230_fu_61093_p2 = (!mul_ln78_230_fu_61093_p0.read().is_01() || !mul_ln78_230_fu_61093_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_230_fu_61093_p0.read()) * sc_biguint<5>(mul_ln78_230_fu_61093_p1.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61184_p0() {
    mul_ln78_231_fu_61184_p0 =  (sc_lv<5>) (mul_ln78_231_fu_61184_p00.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61184_p00() {
    mul_ln78_231_fu_61184_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61184_p1() {
    mul_ln78_231_fu_61184_p1 =  (sc_lv<5>) (mul_ln78_231_fu_61184_p10.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61184_p10() {
    mul_ln78_231_fu_61184_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61184_p2() {
    mul_ln78_231_fu_61184_p2 = (!mul_ln78_231_fu_61184_p0.read().is_01() || !mul_ln78_231_fu_61184_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_231_fu_61184_p0.read()) * sc_biguint<5>(mul_ln78_231_fu_61184_p1.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61365_p0() {
    mul_ln78_232_fu_61365_p0 =  (sc_lv<5>) (mul_ln78_232_fu_61365_p00.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61365_p00() {
    mul_ln78_232_fu_61365_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61365_p1() {
    mul_ln78_232_fu_61365_p1 =  (sc_lv<5>) (mul_ln78_232_fu_61365_p10.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61365_p10() {
    mul_ln78_232_fu_61365_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61365_p2() {
    mul_ln78_232_fu_61365_p2 = (!mul_ln78_232_fu_61365_p0.read().is_01() || !mul_ln78_232_fu_61365_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_232_fu_61365_p0.read()) * sc_biguint<5>(mul_ln78_232_fu_61365_p1.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61456_p0() {
    mul_ln78_233_fu_61456_p0 =  (sc_lv<5>) (mul_ln78_233_fu_61456_p00.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61456_p00() {
    mul_ln78_233_fu_61456_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61456_p1() {
    mul_ln78_233_fu_61456_p1 =  (sc_lv<5>) (mul_ln78_233_fu_61456_p10.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61456_p10() {
    mul_ln78_233_fu_61456_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61456_p2() {
    mul_ln78_233_fu_61456_p2 = (!mul_ln78_233_fu_61456_p0.read().is_01() || !mul_ln78_233_fu_61456_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_233_fu_61456_p0.read()) * sc_biguint<5>(mul_ln78_233_fu_61456_p1.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61637_p0() {
    mul_ln78_234_fu_61637_p0 =  (sc_lv<5>) (mul_ln78_234_fu_61637_p00.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61637_p00() {
    mul_ln78_234_fu_61637_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61637_p1() {
    mul_ln78_234_fu_61637_p1 =  (sc_lv<5>) (mul_ln78_234_fu_61637_p10.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61637_p10() {
    mul_ln78_234_fu_61637_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61637_p2() {
    mul_ln78_234_fu_61637_p2 = (!mul_ln78_234_fu_61637_p0.read().is_01() || !mul_ln78_234_fu_61637_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_234_fu_61637_p0.read()) * sc_biguint<5>(mul_ln78_234_fu_61637_p1.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61728_p0() {
    mul_ln78_235_fu_61728_p0 =  (sc_lv<5>) (mul_ln78_235_fu_61728_p00.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61728_p00() {
    mul_ln78_235_fu_61728_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61728_p1() {
    mul_ln78_235_fu_61728_p1 =  (sc_lv<5>) (mul_ln78_235_fu_61728_p10.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61728_p10() {
    mul_ln78_235_fu_61728_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61728_p2() {
    mul_ln78_235_fu_61728_p2 = (!mul_ln78_235_fu_61728_p0.read().is_01() || !mul_ln78_235_fu_61728_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_235_fu_61728_p0.read()) * sc_biguint<5>(mul_ln78_235_fu_61728_p1.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61909_p0() {
    mul_ln78_236_fu_61909_p0 =  (sc_lv<5>) (mul_ln78_236_fu_61909_p00.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61909_p00() {
    mul_ln78_236_fu_61909_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61909_p1() {
    mul_ln78_236_fu_61909_p1 =  (sc_lv<5>) (mul_ln78_236_fu_61909_p10.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61909_p10() {
    mul_ln78_236_fu_61909_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61909_p2() {
    mul_ln78_236_fu_61909_p2 = (!mul_ln78_236_fu_61909_p0.read().is_01() || !mul_ln78_236_fu_61909_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_236_fu_61909_p0.read()) * sc_biguint<5>(mul_ln78_236_fu_61909_p1.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62000_p0() {
    mul_ln78_237_fu_62000_p0 =  (sc_lv<5>) (mul_ln78_237_fu_62000_p00.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62000_p00() {
    mul_ln78_237_fu_62000_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62000_p1() {
    mul_ln78_237_fu_62000_p1 =  (sc_lv<5>) (mul_ln78_237_fu_62000_p10.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62000_p10() {
    mul_ln78_237_fu_62000_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62000_p2() {
    mul_ln78_237_fu_62000_p2 = (!mul_ln78_237_fu_62000_p0.read().is_01() || !mul_ln78_237_fu_62000_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_237_fu_62000_p0.read()) * sc_biguint<5>(mul_ln78_237_fu_62000_p1.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62181_p0() {
    mul_ln78_238_fu_62181_p0 =  (sc_lv<5>) (mul_ln78_238_fu_62181_p00.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62181_p00() {
    mul_ln78_238_fu_62181_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62181_p1() {
    mul_ln78_238_fu_62181_p1 =  (sc_lv<5>) (mul_ln78_238_fu_62181_p10.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62181_p10() {
    mul_ln78_238_fu_62181_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62181_p2() {
    mul_ln78_238_fu_62181_p2 = (!mul_ln78_238_fu_62181_p0.read().is_01() || !mul_ln78_238_fu_62181_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_238_fu_62181_p0.read()) * sc_biguint<5>(mul_ln78_238_fu_62181_p1.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62272_p0() {
    mul_ln78_239_fu_62272_p0 =  (sc_lv<5>) (mul_ln78_239_fu_62272_p00.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62272_p00() {
    mul_ln78_239_fu_62272_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62272_p1() {
    mul_ln78_239_fu_62272_p1 =  (sc_lv<5>) (mul_ln78_239_fu_62272_p10.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62272_p10() {
    mul_ln78_239_fu_62272_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62272_p2() {
    mul_ln78_239_fu_62272_p2 = (!mul_ln78_239_fu_62272_p0.read().is_01() || !mul_ln78_239_fu_62272_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_239_fu_62272_p0.read()) * sc_biguint<5>(mul_ln78_239_fu_62272_p1.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32896_p0() {
    mul_ln78_23_fu_32896_p0 =  (sc_lv<5>) (mul_ln78_23_fu_32896_p00.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32896_p00() {
    mul_ln78_23_fu_32896_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32896_p1() {
    mul_ln78_23_fu_32896_p1 =  (sc_lv<5>) (mul_ln78_23_fu_32896_p10.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32896_p10() {
    mul_ln78_23_fu_32896_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32896_p2() {
    mul_ln78_23_fu_32896_p2 = (!mul_ln78_23_fu_32896_p0.read().is_01() || !mul_ln78_23_fu_32896_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_23_fu_32896_p0.read()) * sc_biguint<5>(mul_ln78_23_fu_32896_p1.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62453_p0() {
    mul_ln78_240_fu_62453_p0 =  (sc_lv<5>) (mul_ln78_240_fu_62453_p00.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62453_p00() {
    mul_ln78_240_fu_62453_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62453_p1() {
    mul_ln78_240_fu_62453_p1 =  (sc_lv<5>) (mul_ln78_240_fu_62453_p10.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62453_p10() {
    mul_ln78_240_fu_62453_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62453_p2() {
    mul_ln78_240_fu_62453_p2 = (!mul_ln78_240_fu_62453_p0.read().is_01() || !mul_ln78_240_fu_62453_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_240_fu_62453_p0.read()) * sc_biguint<5>(mul_ln78_240_fu_62453_p1.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62544_p0() {
    mul_ln78_241_fu_62544_p0 =  (sc_lv<5>) (mul_ln78_241_fu_62544_p00.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62544_p00() {
    mul_ln78_241_fu_62544_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62544_p1() {
    mul_ln78_241_fu_62544_p1 =  (sc_lv<5>) (mul_ln78_241_fu_62544_p10.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62544_p10() {
    mul_ln78_241_fu_62544_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62544_p2() {
    mul_ln78_241_fu_62544_p2 = (!mul_ln78_241_fu_62544_p0.read().is_01() || !mul_ln78_241_fu_62544_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_241_fu_62544_p0.read()) * sc_biguint<5>(mul_ln78_241_fu_62544_p1.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62725_p0() {
    mul_ln78_242_fu_62725_p0 =  (sc_lv<5>) (mul_ln78_242_fu_62725_p00.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62725_p00() {
    mul_ln78_242_fu_62725_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62725_p1() {
    mul_ln78_242_fu_62725_p1 =  (sc_lv<5>) (mul_ln78_242_fu_62725_p10.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62725_p10() {
    mul_ln78_242_fu_62725_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62725_p2() {
    mul_ln78_242_fu_62725_p2 = (!mul_ln78_242_fu_62725_p0.read().is_01() || !mul_ln78_242_fu_62725_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_242_fu_62725_p0.read()) * sc_biguint<5>(mul_ln78_242_fu_62725_p1.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62816_p0() {
    mul_ln78_243_fu_62816_p0 =  (sc_lv<5>) (mul_ln78_243_fu_62816_p00.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62816_p00() {
    mul_ln78_243_fu_62816_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62816_p1() {
    mul_ln78_243_fu_62816_p1 =  (sc_lv<5>) (mul_ln78_243_fu_62816_p10.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62816_p10() {
    mul_ln78_243_fu_62816_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62816_p2() {
    mul_ln78_243_fu_62816_p2 = (!mul_ln78_243_fu_62816_p0.read().is_01() || !mul_ln78_243_fu_62816_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_243_fu_62816_p0.read()) * sc_biguint<5>(mul_ln78_243_fu_62816_p1.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62997_p0() {
    mul_ln78_244_fu_62997_p0 =  (sc_lv<5>) (mul_ln78_244_fu_62997_p00.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62997_p00() {
    mul_ln78_244_fu_62997_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62997_p1() {
    mul_ln78_244_fu_62997_p1 =  (sc_lv<5>) (mul_ln78_244_fu_62997_p10.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62997_p10() {
    mul_ln78_244_fu_62997_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62997_p2() {
    mul_ln78_244_fu_62997_p2 = (!mul_ln78_244_fu_62997_p0.read().is_01() || !mul_ln78_244_fu_62997_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_244_fu_62997_p0.read()) * sc_biguint<5>(mul_ln78_244_fu_62997_p1.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63088_p0() {
    mul_ln78_245_fu_63088_p0 =  (sc_lv<5>) (mul_ln78_245_fu_63088_p00.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63088_p00() {
    mul_ln78_245_fu_63088_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63088_p1() {
    mul_ln78_245_fu_63088_p1 =  (sc_lv<5>) (mul_ln78_245_fu_63088_p10.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63088_p10() {
    mul_ln78_245_fu_63088_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63088_p2() {
    mul_ln78_245_fu_63088_p2 = (!mul_ln78_245_fu_63088_p0.read().is_01() || !mul_ln78_245_fu_63088_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_245_fu_63088_p0.read()) * sc_biguint<5>(mul_ln78_245_fu_63088_p1.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63269_p0() {
    mul_ln78_246_fu_63269_p0 =  (sc_lv<5>) (mul_ln78_246_fu_63269_p00.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63269_p00() {
    mul_ln78_246_fu_63269_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63269_p1() {
    mul_ln78_246_fu_63269_p1 =  (sc_lv<5>) (mul_ln78_246_fu_63269_p10.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63269_p10() {
    mul_ln78_246_fu_63269_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63269_p2() {
    mul_ln78_246_fu_63269_p2 = (!mul_ln78_246_fu_63269_p0.read().is_01() || !mul_ln78_246_fu_63269_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_246_fu_63269_p0.read()) * sc_biguint<5>(mul_ln78_246_fu_63269_p1.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63330_p0() {
    mul_ln78_247_fu_63330_p0 =  (sc_lv<5>) (mul_ln78_247_fu_63330_p00.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63330_p00() {
    mul_ln78_247_fu_63330_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63330_p1() {
    mul_ln78_247_fu_63330_p1 =  (sc_lv<5>) (mul_ln78_247_fu_63330_p10.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63330_p10() {
    mul_ln78_247_fu_63330_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63330_p2() {
    mul_ln78_247_fu_63330_p2 = (!mul_ln78_247_fu_63330_p0.read().is_01() || !mul_ln78_247_fu_63330_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_247_fu_63330_p0.read()) * sc_biguint<5>(mul_ln78_247_fu_63330_p1.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63451_p0() {
    mul_ln78_248_fu_63451_p0 =  (sc_lv<5>) (mul_ln78_248_fu_63451_p00.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63451_p00() {
    mul_ln78_248_fu_63451_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63451_p1() {
    mul_ln78_248_fu_63451_p1 =  (sc_lv<5>) (mul_ln78_248_fu_63451_p10.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63451_p10() {
    mul_ln78_248_fu_63451_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63451_p2() {
    mul_ln78_248_fu_63451_p2 = (!mul_ln78_248_fu_63451_p0.read().is_01() || !mul_ln78_248_fu_63451_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_248_fu_63451_p0.read()) * sc_biguint<5>(mul_ln78_248_fu_63451_p1.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63512_p0() {
    mul_ln78_249_fu_63512_p0 =  (sc_lv<5>) (mul_ln78_249_fu_63512_p00.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63512_p00() {
    mul_ln78_249_fu_63512_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63512_p1() {
    mul_ln78_249_fu_63512_p1 =  (sc_lv<5>) (mul_ln78_249_fu_63512_p10.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63512_p10() {
    mul_ln78_249_fu_63512_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63512_p2() {
    mul_ln78_249_fu_63512_p2 = (!mul_ln78_249_fu_63512_p0.read().is_01() || !mul_ln78_249_fu_63512_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_249_fu_63512_p0.read()) * sc_biguint<5>(mul_ln78_249_fu_63512_p1.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33077_p0() {
    mul_ln78_24_fu_33077_p0 =  (sc_lv<5>) (mul_ln78_24_fu_33077_p00.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33077_p00() {
    mul_ln78_24_fu_33077_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33077_p1() {
    mul_ln78_24_fu_33077_p1 =  (sc_lv<5>) (mul_ln78_24_fu_33077_p10.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33077_p10() {
    mul_ln78_24_fu_33077_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33077_p2() {
    mul_ln78_24_fu_33077_p2 = (!mul_ln78_24_fu_33077_p0.read().is_01() || !mul_ln78_24_fu_33077_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_24_fu_33077_p0.read()) * sc_biguint<5>(mul_ln78_24_fu_33077_p1.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63633_p0() {
    mul_ln78_250_fu_63633_p0 =  (sc_lv<5>) (mul_ln78_250_fu_63633_p00.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63633_p00() {
    mul_ln78_250_fu_63633_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63633_p1() {
    mul_ln78_250_fu_63633_p1 =  (sc_lv<5>) (mul_ln78_250_fu_63633_p10.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63633_p10() {
    mul_ln78_250_fu_63633_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63633_p2() {
    mul_ln78_250_fu_63633_p2 = (!mul_ln78_250_fu_63633_p0.read().is_01() || !mul_ln78_250_fu_63633_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_250_fu_63633_p0.read()) * sc_biguint<5>(mul_ln78_250_fu_63633_p1.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63675_p0() {
    mul_ln78_251_fu_63675_p0 =  (sc_lv<5>) (mul_ln78_251_fu_63675_p00.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63675_p00() {
    mul_ln78_251_fu_63675_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63675_p1() {
    mul_ln78_251_fu_63675_p1 =  (sc_lv<5>) (mul_ln78_251_fu_63675_p10.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63675_p10() {
    mul_ln78_251_fu_63675_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63675_p2() {
    mul_ln78_251_fu_63675_p2 = (!mul_ln78_251_fu_63675_p0.read().is_01() || !mul_ln78_251_fu_63675_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_251_fu_63675_p0.read()) * sc_biguint<5>(mul_ln78_251_fu_63675_p1.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63777_p0() {
    mul_ln78_252_fu_63777_p0 =  (sc_lv<5>) (mul_ln78_252_fu_63777_p00.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63777_p00() {
    mul_ln78_252_fu_63777_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63777_p1() {
    mul_ln78_252_fu_63777_p1 =  (sc_lv<5>) (mul_ln78_252_fu_63777_p10.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63777_p10() {
    mul_ln78_252_fu_63777_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63777_p2() {
    mul_ln78_252_fu_63777_p2 = (!mul_ln78_252_fu_63777_p0.read().is_01() || !mul_ln78_252_fu_63777_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_252_fu_63777_p0.read()) * sc_biguint<5>(mul_ln78_252_fu_63777_p1.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63819_p0() {
    mul_ln78_253_fu_63819_p0 =  (sc_lv<5>) (mul_ln78_253_fu_63819_p00.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63819_p00() {
    mul_ln78_253_fu_63819_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63819_p1() {
    mul_ln78_253_fu_63819_p1 =  (sc_lv<5>) (mul_ln78_253_fu_63819_p10.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63819_p10() {
    mul_ln78_253_fu_63819_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63819_p2() {
    mul_ln78_253_fu_63819_p2 = (!mul_ln78_253_fu_63819_p0.read().is_01() || !mul_ln78_253_fu_63819_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_253_fu_63819_p0.read()) * sc_biguint<5>(mul_ln78_253_fu_63819_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30328_p0() {
    mul_ln78_254_fu_30328_p0 =  (sc_lv<5>) (zext_ln78_12_fu_30324_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30328_p1() {
    mul_ln78_254_fu_30328_p1 =  (sc_lv<5>) (zext_ln78_12_fu_30324_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30328_p2() {
    mul_ln78_254_fu_30328_p2 = (!mul_ln78_254_fu_30328_p0.read().is_01() || !mul_ln78_254_fu_30328_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_254_fu_30328_p0.read()) * sc_biguint<5>(mul_ln78_254_fu_30328_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30439_p0() {
    mul_ln78_255_fu_30439_p0 =  (sc_lv<5>) (zext_ln78_19_fu_30435_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30439_p1() {
    mul_ln78_255_fu_30439_p1 =  (sc_lv<5>) (zext_ln78_19_fu_30435_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30439_p2() {
    mul_ln78_255_fu_30439_p2 = (!mul_ln78_255_fu_30439_p0.read().is_01() || !mul_ln78_255_fu_30439_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_255_fu_30439_p0.read()) * sc_biguint<5>(mul_ln78_255_fu_30439_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30506_p0() {
    mul_ln78_256_fu_30506_p0 =  (sc_lv<5>) (zext_ln78_26_fu_30502_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30506_p1() {
    mul_ln78_256_fu_30506_p1 =  (sc_lv<5>) (zext_ln78_26_fu_30502_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30506_p2() {
    mul_ln78_256_fu_30506_p2 = (!mul_ln78_256_fu_30506_p0.read().is_01() || !mul_ln78_256_fu_30506_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_256_fu_30506_p0.read()) * sc_biguint<5>(mul_ln78_256_fu_30506_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30617_p0() {
    mul_ln78_257_fu_30617_p0 =  (sc_lv<5>) (zext_ln78_33_fu_30613_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30617_p1() {
    mul_ln78_257_fu_30617_p1 =  (sc_lv<5>) (zext_ln78_33_fu_30613_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30617_p2() {
    mul_ln78_257_fu_30617_p2 = (!mul_ln78_257_fu_30617_p0.read().is_01() || !mul_ln78_257_fu_30617_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_257_fu_30617_p0.read()) * sc_biguint<5>(mul_ln78_257_fu_30617_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30698_p0() {
    mul_ln78_258_fu_30698_p0 =  (sc_lv<5>) (zext_ln78_40_fu_30694_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30698_p1() {
    mul_ln78_258_fu_30698_p1 =  (sc_lv<5>) (zext_ln78_40_fu_30694_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30698_p2() {
    mul_ln78_258_fu_30698_p2 = (!mul_ln78_258_fu_30698_p0.read().is_01() || !mul_ln78_258_fu_30698_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_258_fu_30698_p0.read()) * sc_biguint<5>(mul_ln78_258_fu_30698_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30809_p0() {
    mul_ln78_259_fu_30809_p0 =  (sc_lv<5>) (zext_ln78_47_fu_30805_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30809_p1() {
    mul_ln78_259_fu_30809_p1 =  (sc_lv<5>) (zext_ln78_47_fu_30805_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30809_p2() {
    mul_ln78_259_fu_30809_p2 = (!mul_ln78_259_fu_30809_p0.read().is_01() || !mul_ln78_259_fu_30809_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_259_fu_30809_p0.read()) * sc_biguint<5>(mul_ln78_259_fu_30809_p1.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33168_p0() {
    mul_ln78_25_fu_33168_p0 =  (sc_lv<5>) (mul_ln78_25_fu_33168_p00.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33168_p00() {
    mul_ln78_25_fu_33168_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33168_p1() {
    mul_ln78_25_fu_33168_p1 =  (sc_lv<5>) (mul_ln78_25_fu_33168_p10.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33168_p10() {
    mul_ln78_25_fu_33168_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33168_p2() {
    mul_ln78_25_fu_33168_p2 = (!mul_ln78_25_fu_33168_p0.read().is_01() || !mul_ln78_25_fu_33168_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_25_fu_33168_p0.read()) * sc_biguint<5>(mul_ln78_25_fu_33168_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30890_p0() {
    mul_ln78_260_fu_30890_p0 =  (sc_lv<5>) (zext_ln78_54_fu_30886_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30890_p1() {
    mul_ln78_260_fu_30890_p1 =  (sc_lv<5>) (zext_ln78_54_fu_30886_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30890_p2() {
    mul_ln78_260_fu_30890_p2 = (!mul_ln78_260_fu_30890_p0.read().is_01() || !mul_ln78_260_fu_30890_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_260_fu_30890_p0.read()) * sc_biguint<5>(mul_ln78_260_fu_30890_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_31001_p0() {
    mul_ln78_261_fu_31001_p0 =  (sc_lv<5>) (zext_ln78_61_fu_30997_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_31001_p1() {
    mul_ln78_261_fu_31001_p1 =  (sc_lv<5>) (zext_ln78_61_fu_30997_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_31001_p2() {
    mul_ln78_261_fu_31001_p2 = (!mul_ln78_261_fu_31001_p0.read().is_01() || !mul_ln78_261_fu_31001_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_261_fu_31001_p0.read()) * sc_biguint<5>(mul_ln78_261_fu_31001_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31082_p0() {
    mul_ln78_262_fu_31082_p0 =  (sc_lv<5>) (zext_ln78_68_fu_31078_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31082_p1() {
    mul_ln78_262_fu_31082_p1 =  (sc_lv<5>) (zext_ln78_68_fu_31078_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31082_p2() {
    mul_ln78_262_fu_31082_p2 = (!mul_ln78_262_fu_31082_p0.read().is_01() || !mul_ln78_262_fu_31082_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_262_fu_31082_p0.read()) * sc_biguint<5>(mul_ln78_262_fu_31082_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31193_p0() {
    mul_ln78_263_fu_31193_p0 =  (sc_lv<5>) (zext_ln78_75_fu_31189_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31193_p1() {
    mul_ln78_263_fu_31193_p1 =  (sc_lv<5>) (zext_ln78_75_fu_31189_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31193_p2() {
    mul_ln78_263_fu_31193_p2 = (!mul_ln78_263_fu_31193_p0.read().is_01() || !mul_ln78_263_fu_31193_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_263_fu_31193_p0.read()) * sc_biguint<5>(mul_ln78_263_fu_31193_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31274_p0() {
    mul_ln78_264_fu_31274_p0 =  (sc_lv<5>) (zext_ln78_82_fu_31270_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31274_p1() {
    mul_ln78_264_fu_31274_p1 =  (sc_lv<5>) (zext_ln78_82_fu_31270_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31274_p2() {
    mul_ln78_264_fu_31274_p2 = (!mul_ln78_264_fu_31274_p0.read().is_01() || !mul_ln78_264_fu_31274_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_264_fu_31274_p0.read()) * sc_biguint<5>(mul_ln78_264_fu_31274_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31455_p0() {
    mul_ln78_265_fu_31455_p0 =  (sc_lv<5>) (zext_ln78_89_fu_31451_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31455_p1() {
    mul_ln78_265_fu_31455_p1 =  (sc_lv<5>) (zext_ln78_89_fu_31451_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31455_p2() {
    mul_ln78_265_fu_31455_p2 = (!mul_ln78_265_fu_31455_p0.read().is_01() || !mul_ln78_265_fu_31455_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_265_fu_31455_p0.read()) * sc_biguint<5>(mul_ln78_265_fu_31455_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31546_p0() {
    mul_ln78_266_fu_31546_p0 =  (sc_lv<5>) (zext_ln78_96_fu_31542_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31546_p1() {
    mul_ln78_266_fu_31546_p1 =  (sc_lv<5>) (zext_ln78_96_fu_31542_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31546_p2() {
    mul_ln78_266_fu_31546_p2 = (!mul_ln78_266_fu_31546_p0.read().is_01() || !mul_ln78_266_fu_31546_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_266_fu_31546_p0.read()) * sc_biguint<5>(mul_ln78_266_fu_31546_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31727_p0() {
    mul_ln78_267_fu_31727_p0 =  (sc_lv<5>) (zext_ln78_103_fu_31723_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31727_p1() {
    mul_ln78_267_fu_31727_p1 =  (sc_lv<5>) (zext_ln78_103_fu_31723_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31727_p2() {
    mul_ln78_267_fu_31727_p2 = (!mul_ln78_267_fu_31727_p0.read().is_01() || !mul_ln78_267_fu_31727_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_267_fu_31727_p0.read()) * sc_biguint<5>(mul_ln78_267_fu_31727_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31818_p0() {
    mul_ln78_268_fu_31818_p0 =  (sc_lv<5>) (zext_ln78_110_fu_31814_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31818_p1() {
    mul_ln78_268_fu_31818_p1 =  (sc_lv<5>) (zext_ln78_110_fu_31814_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31818_p2() {
    mul_ln78_268_fu_31818_p2 = (!mul_ln78_268_fu_31818_p0.read().is_01() || !mul_ln78_268_fu_31818_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_268_fu_31818_p0.read()) * sc_biguint<5>(mul_ln78_268_fu_31818_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_31999_p0() {
    mul_ln78_269_fu_31999_p0 =  (sc_lv<5>) (zext_ln78_117_fu_31995_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_31999_p1() {
    mul_ln78_269_fu_31999_p1 =  (sc_lv<5>) (zext_ln78_117_fu_31995_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_31999_p2() {
    mul_ln78_269_fu_31999_p2 = (!mul_ln78_269_fu_31999_p0.read().is_01() || !mul_ln78_269_fu_31999_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_269_fu_31999_p0.read()) * sc_biguint<5>(mul_ln78_269_fu_31999_p1.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33349_p0() {
    mul_ln78_26_fu_33349_p0 =  (sc_lv<5>) (mul_ln78_26_fu_33349_p00.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33349_p00() {
    mul_ln78_26_fu_33349_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33349_p1() {
    mul_ln78_26_fu_33349_p1 =  (sc_lv<5>) (mul_ln78_26_fu_33349_p10.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33349_p10() {
    mul_ln78_26_fu_33349_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33349_p2() {
    mul_ln78_26_fu_33349_p2 = (!mul_ln78_26_fu_33349_p0.read().is_01() || !mul_ln78_26_fu_33349_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_26_fu_33349_p0.read()) * sc_biguint<5>(mul_ln78_26_fu_33349_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32090_p0() {
    mul_ln78_270_fu_32090_p0 =  (sc_lv<5>) (zext_ln78_124_fu_32086_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32090_p1() {
    mul_ln78_270_fu_32090_p1 =  (sc_lv<5>) (zext_ln78_124_fu_32086_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32090_p2() {
    mul_ln78_270_fu_32090_p2 = (!mul_ln78_270_fu_32090_p0.read().is_01() || !mul_ln78_270_fu_32090_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_270_fu_32090_p0.read()) * sc_biguint<5>(mul_ln78_270_fu_32090_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32271_p0() {
    mul_ln78_271_fu_32271_p0 =  (sc_lv<5>) (zext_ln78_131_fu_32267_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32271_p1() {
    mul_ln78_271_fu_32271_p1 =  (sc_lv<5>) (zext_ln78_131_fu_32267_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32271_p2() {
    mul_ln78_271_fu_32271_p2 = (!mul_ln78_271_fu_32271_p0.read().is_01() || !mul_ln78_271_fu_32271_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_271_fu_32271_p0.read()) * sc_biguint<5>(mul_ln78_271_fu_32271_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32362_p0() {
    mul_ln78_272_fu_32362_p0 =  (sc_lv<5>) (zext_ln78_138_fu_32358_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32362_p1() {
    mul_ln78_272_fu_32362_p1 =  (sc_lv<5>) (zext_ln78_138_fu_32358_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32362_p2() {
    mul_ln78_272_fu_32362_p2 = (!mul_ln78_272_fu_32362_p0.read().is_01() || !mul_ln78_272_fu_32362_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_272_fu_32362_p0.read()) * sc_biguint<5>(mul_ln78_272_fu_32362_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32543_p0() {
    mul_ln78_273_fu_32543_p0 =  (sc_lv<5>) (zext_ln78_145_fu_32539_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32543_p1() {
    mul_ln78_273_fu_32543_p1 =  (sc_lv<5>) (zext_ln78_145_fu_32539_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32543_p2() {
    mul_ln78_273_fu_32543_p2 = (!mul_ln78_273_fu_32543_p0.read().is_01() || !mul_ln78_273_fu_32543_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_273_fu_32543_p0.read()) * sc_biguint<5>(mul_ln78_273_fu_32543_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32634_p0() {
    mul_ln78_274_fu_32634_p0 =  (sc_lv<5>) (zext_ln78_152_fu_32630_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32634_p1() {
    mul_ln78_274_fu_32634_p1 =  (sc_lv<5>) (zext_ln78_152_fu_32630_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32634_p2() {
    mul_ln78_274_fu_32634_p2 = (!mul_ln78_274_fu_32634_p0.read().is_01() || !mul_ln78_274_fu_32634_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_274_fu_32634_p0.read()) * sc_biguint<5>(mul_ln78_274_fu_32634_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32815_p0() {
    mul_ln78_275_fu_32815_p0 =  (sc_lv<5>) (zext_ln78_159_fu_32811_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32815_p1() {
    mul_ln78_275_fu_32815_p1 =  (sc_lv<5>) (zext_ln78_159_fu_32811_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32815_p2() {
    mul_ln78_275_fu_32815_p2 = (!mul_ln78_275_fu_32815_p0.read().is_01() || !mul_ln78_275_fu_32815_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_275_fu_32815_p0.read()) * sc_biguint<5>(mul_ln78_275_fu_32815_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32906_p0() {
    mul_ln78_276_fu_32906_p0 =  (sc_lv<5>) (zext_ln78_166_fu_32902_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32906_p1() {
    mul_ln78_276_fu_32906_p1 =  (sc_lv<5>) (zext_ln78_166_fu_32902_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32906_p2() {
    mul_ln78_276_fu_32906_p2 = (!mul_ln78_276_fu_32906_p0.read().is_01() || !mul_ln78_276_fu_32906_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_276_fu_32906_p0.read()) * sc_biguint<5>(mul_ln78_276_fu_32906_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33087_p0() {
    mul_ln78_277_fu_33087_p0 =  (sc_lv<5>) (zext_ln78_173_fu_33083_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33087_p1() {
    mul_ln78_277_fu_33087_p1 =  (sc_lv<5>) (zext_ln78_173_fu_33083_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33087_p2() {
    mul_ln78_277_fu_33087_p2 = (!mul_ln78_277_fu_33087_p0.read().is_01() || !mul_ln78_277_fu_33087_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_277_fu_33087_p0.read()) * sc_biguint<5>(mul_ln78_277_fu_33087_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33178_p0() {
    mul_ln78_278_fu_33178_p0 =  (sc_lv<5>) (zext_ln78_180_fu_33174_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33178_p1() {
    mul_ln78_278_fu_33178_p1 =  (sc_lv<5>) (zext_ln78_180_fu_33174_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33178_p2() {
    mul_ln78_278_fu_33178_p2 = (!mul_ln78_278_fu_33178_p0.read().is_01() || !mul_ln78_278_fu_33178_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_278_fu_33178_p0.read()) * sc_biguint<5>(mul_ln78_278_fu_33178_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33359_p0() {
    mul_ln78_279_fu_33359_p0 =  (sc_lv<5>) (zext_ln78_187_fu_33355_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33359_p1() {
    mul_ln78_279_fu_33359_p1 =  (sc_lv<5>) (zext_ln78_187_fu_33355_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33359_p2() {
    mul_ln78_279_fu_33359_p2 = (!mul_ln78_279_fu_33359_p0.read().is_01() || !mul_ln78_279_fu_33359_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_279_fu_33359_p0.read()) * sc_biguint<5>(mul_ln78_279_fu_33359_p1.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33440_p0() {
    mul_ln78_27_fu_33440_p0 =  (sc_lv<5>) (mul_ln78_27_fu_33440_p00.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33440_p00() {
    mul_ln78_27_fu_33440_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33440_p1() {
    mul_ln78_27_fu_33440_p1 =  (sc_lv<5>) (mul_ln78_27_fu_33440_p10.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33440_p10() {
    mul_ln78_27_fu_33440_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33440_p2() {
    mul_ln78_27_fu_33440_p2 = (!mul_ln78_27_fu_33440_p0.read().is_01() || !mul_ln78_27_fu_33440_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_27_fu_33440_p0.read()) * sc_biguint<5>(mul_ln78_27_fu_33440_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33450_p0() {
    mul_ln78_280_fu_33450_p0 =  (sc_lv<5>) (zext_ln78_194_fu_33446_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33450_p1() {
    mul_ln78_280_fu_33450_p1 =  (sc_lv<5>) (zext_ln78_194_fu_33446_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33450_p2() {
    mul_ln78_280_fu_33450_p2 = (!mul_ln78_280_fu_33450_p0.read().is_01() || !mul_ln78_280_fu_33450_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_280_fu_33450_p0.read()) * sc_biguint<5>(mul_ln78_280_fu_33450_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33631_p0() {
    mul_ln78_281_fu_33631_p0 =  (sc_lv<5>) (zext_ln78_201_fu_33627_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33631_p1() {
    mul_ln78_281_fu_33631_p1 =  (sc_lv<5>) (zext_ln78_201_fu_33627_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33631_p2() {
    mul_ln78_281_fu_33631_p2 = (!mul_ln78_281_fu_33631_p0.read().is_01() || !mul_ln78_281_fu_33631_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_281_fu_33631_p0.read()) * sc_biguint<5>(mul_ln78_281_fu_33631_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33722_p0() {
    mul_ln78_282_fu_33722_p0 =  (sc_lv<5>) (zext_ln78_208_fu_33718_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33722_p1() {
    mul_ln78_282_fu_33722_p1 =  (sc_lv<5>) (zext_ln78_208_fu_33718_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33722_p2() {
    mul_ln78_282_fu_33722_p2 = (!mul_ln78_282_fu_33722_p0.read().is_01() || !mul_ln78_282_fu_33722_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_282_fu_33722_p0.read()) * sc_biguint<5>(mul_ln78_282_fu_33722_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33903_p0() {
    mul_ln78_283_fu_33903_p0 =  (sc_lv<5>) (zext_ln78_215_fu_33899_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33903_p1() {
    mul_ln78_283_fu_33903_p1 =  (sc_lv<5>) (zext_ln78_215_fu_33899_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33903_p2() {
    mul_ln78_283_fu_33903_p2 = (!mul_ln78_283_fu_33903_p0.read().is_01() || !mul_ln78_283_fu_33903_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_283_fu_33903_p0.read()) * sc_biguint<5>(mul_ln78_283_fu_33903_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_33994_p0() {
    mul_ln78_284_fu_33994_p0 =  (sc_lv<5>) (zext_ln78_222_fu_33990_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_33994_p1() {
    mul_ln78_284_fu_33994_p1 =  (sc_lv<5>) (zext_ln78_222_fu_33990_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_33994_p2() {
    mul_ln78_284_fu_33994_p2 = (!mul_ln78_284_fu_33994_p0.read().is_01() || !mul_ln78_284_fu_33994_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_284_fu_33994_p0.read()) * sc_biguint<5>(mul_ln78_284_fu_33994_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34175_p0() {
    mul_ln78_285_fu_34175_p0 =  (sc_lv<5>) (zext_ln78_229_fu_34171_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34175_p1() {
    mul_ln78_285_fu_34175_p1 =  (sc_lv<5>) (zext_ln78_229_fu_34171_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34175_p2() {
    mul_ln78_285_fu_34175_p2 = (!mul_ln78_285_fu_34175_p0.read().is_01() || !mul_ln78_285_fu_34175_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_285_fu_34175_p0.read()) * sc_biguint<5>(mul_ln78_285_fu_34175_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34266_p0() {
    mul_ln78_286_fu_34266_p0 =  (sc_lv<5>) (zext_ln78_236_fu_34262_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34266_p1() {
    mul_ln78_286_fu_34266_p1 =  (sc_lv<5>) (zext_ln78_236_fu_34262_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34266_p2() {
    mul_ln78_286_fu_34266_p2 = (!mul_ln78_286_fu_34266_p0.read().is_01() || !mul_ln78_286_fu_34266_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_286_fu_34266_p0.read()) * sc_biguint<5>(mul_ln78_286_fu_34266_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34447_p0() {
    mul_ln78_287_fu_34447_p0 =  (sc_lv<5>) (zext_ln78_243_fu_34443_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34447_p1() {
    mul_ln78_287_fu_34447_p1 =  (sc_lv<5>) (zext_ln78_243_fu_34443_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34447_p2() {
    mul_ln78_287_fu_34447_p2 = (!mul_ln78_287_fu_34447_p0.read().is_01() || !mul_ln78_287_fu_34447_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_287_fu_34447_p0.read()) * sc_biguint<5>(mul_ln78_287_fu_34447_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34538_p0() {
    mul_ln78_288_fu_34538_p0 =  (sc_lv<5>) (zext_ln78_250_fu_34534_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34538_p1() {
    mul_ln78_288_fu_34538_p1 =  (sc_lv<5>) (zext_ln78_250_fu_34534_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34538_p2() {
    mul_ln78_288_fu_34538_p2 = (!mul_ln78_288_fu_34538_p0.read().is_01() || !mul_ln78_288_fu_34538_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_288_fu_34538_p0.read()) * sc_biguint<5>(mul_ln78_288_fu_34538_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34719_p0() {
    mul_ln78_289_fu_34719_p0 =  (sc_lv<5>) (zext_ln78_257_fu_34715_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34719_p1() {
    mul_ln78_289_fu_34719_p1 =  (sc_lv<5>) (zext_ln78_257_fu_34715_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34719_p2() {
    mul_ln78_289_fu_34719_p2 = (!mul_ln78_289_fu_34719_p0.read().is_01() || !mul_ln78_289_fu_34719_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_289_fu_34719_p0.read()) * sc_biguint<5>(mul_ln78_289_fu_34719_p1.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33621_p0() {
    mul_ln78_28_fu_33621_p0 =  (sc_lv<5>) (mul_ln78_28_fu_33621_p00.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33621_p00() {
    mul_ln78_28_fu_33621_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33621_p1() {
    mul_ln78_28_fu_33621_p1 =  (sc_lv<5>) (mul_ln78_28_fu_33621_p10.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33621_p10() {
    mul_ln78_28_fu_33621_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33621_p2() {
    mul_ln78_28_fu_33621_p2 = (!mul_ln78_28_fu_33621_p0.read().is_01() || !mul_ln78_28_fu_33621_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_28_fu_33621_p0.read()) * sc_biguint<5>(mul_ln78_28_fu_33621_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34810_p0() {
    mul_ln78_290_fu_34810_p0 =  (sc_lv<5>) (zext_ln78_264_fu_34806_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34810_p1() {
    mul_ln78_290_fu_34810_p1 =  (sc_lv<5>) (zext_ln78_264_fu_34806_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34810_p2() {
    mul_ln78_290_fu_34810_p2 = (!mul_ln78_290_fu_34810_p0.read().is_01() || !mul_ln78_290_fu_34810_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_290_fu_34810_p0.read()) * sc_biguint<5>(mul_ln78_290_fu_34810_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_34991_p0() {
    mul_ln78_291_fu_34991_p0 =  (sc_lv<5>) (zext_ln78_271_fu_34987_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_34991_p1() {
    mul_ln78_291_fu_34991_p1 =  (sc_lv<5>) (zext_ln78_271_fu_34987_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_34991_p2() {
    mul_ln78_291_fu_34991_p2 = (!mul_ln78_291_fu_34991_p0.read().is_01() || !mul_ln78_291_fu_34991_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_291_fu_34991_p0.read()) * sc_biguint<5>(mul_ln78_291_fu_34991_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35082_p0() {
    mul_ln78_292_fu_35082_p0 =  (sc_lv<5>) (zext_ln78_278_fu_35078_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35082_p1() {
    mul_ln78_292_fu_35082_p1 =  (sc_lv<5>) (zext_ln78_278_fu_35078_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35082_p2() {
    mul_ln78_292_fu_35082_p2 = (!mul_ln78_292_fu_35082_p0.read().is_01() || !mul_ln78_292_fu_35082_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_292_fu_35082_p0.read()) * sc_biguint<5>(mul_ln78_292_fu_35082_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35263_p0() {
    mul_ln78_293_fu_35263_p0 =  (sc_lv<5>) (zext_ln78_285_fu_35259_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35263_p1() {
    mul_ln78_293_fu_35263_p1 =  (sc_lv<5>) (zext_ln78_285_fu_35259_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35263_p2() {
    mul_ln78_293_fu_35263_p2 = (!mul_ln78_293_fu_35263_p0.read().is_01() || !mul_ln78_293_fu_35263_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_293_fu_35263_p0.read()) * sc_biguint<5>(mul_ln78_293_fu_35263_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35354_p0() {
    mul_ln78_294_fu_35354_p0 =  (sc_lv<5>) (zext_ln78_292_fu_35350_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35354_p1() {
    mul_ln78_294_fu_35354_p1 =  (sc_lv<5>) (zext_ln78_292_fu_35350_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35354_p2() {
    mul_ln78_294_fu_35354_p2 = (!mul_ln78_294_fu_35354_p0.read().is_01() || !mul_ln78_294_fu_35354_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_294_fu_35354_p0.read()) * sc_biguint<5>(mul_ln78_294_fu_35354_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35535_p0() {
    mul_ln78_295_fu_35535_p0 =  (sc_lv<5>) (zext_ln78_299_fu_35531_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35535_p1() {
    mul_ln78_295_fu_35535_p1 =  (sc_lv<5>) (zext_ln78_299_fu_35531_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35535_p2() {
    mul_ln78_295_fu_35535_p2 = (!mul_ln78_295_fu_35535_p0.read().is_01() || !mul_ln78_295_fu_35535_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_295_fu_35535_p0.read()) * sc_biguint<5>(mul_ln78_295_fu_35535_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35626_p0() {
    mul_ln78_296_fu_35626_p0 =  (sc_lv<5>) (zext_ln78_306_fu_35622_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35626_p1() {
    mul_ln78_296_fu_35626_p1 =  (sc_lv<5>) (zext_ln78_306_fu_35622_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35626_p2() {
    mul_ln78_296_fu_35626_p2 = (!mul_ln78_296_fu_35626_p0.read().is_01() || !mul_ln78_296_fu_35626_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_296_fu_35626_p0.read()) * sc_biguint<5>(mul_ln78_296_fu_35626_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35807_p0() {
    mul_ln78_297_fu_35807_p0 =  (sc_lv<5>) (zext_ln78_313_fu_35803_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35807_p1() {
    mul_ln78_297_fu_35807_p1 =  (sc_lv<5>) (zext_ln78_313_fu_35803_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35807_p2() {
    mul_ln78_297_fu_35807_p2 = (!mul_ln78_297_fu_35807_p0.read().is_01() || !mul_ln78_297_fu_35807_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_297_fu_35807_p0.read()) * sc_biguint<5>(mul_ln78_297_fu_35807_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35898_p0() {
    mul_ln78_298_fu_35898_p0 =  (sc_lv<5>) (zext_ln78_320_fu_35894_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35898_p1() {
    mul_ln78_298_fu_35898_p1 =  (sc_lv<5>) (zext_ln78_320_fu_35894_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35898_p2() {
    mul_ln78_298_fu_35898_p2 = (!mul_ln78_298_fu_35898_p0.read().is_01() || !mul_ln78_298_fu_35898_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_298_fu_35898_p0.read()) * sc_biguint<5>(mul_ln78_298_fu_35898_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36079_p0() {
    mul_ln78_299_fu_36079_p0 =  (sc_lv<5>) (zext_ln78_327_fu_36075_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36079_p1() {
    mul_ln78_299_fu_36079_p1 =  (sc_lv<5>) (zext_ln78_327_fu_36075_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36079_p2() {
    mul_ln78_299_fu_36079_p2 = (!mul_ln78_299_fu_36079_p0.read().is_01() || !mul_ln78_299_fu_36079_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_299_fu_36079_p0.read()) * sc_biguint<5>(mul_ln78_299_fu_36079_p1.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33712_p0() {
    mul_ln78_29_fu_33712_p0 =  (sc_lv<5>) (mul_ln78_29_fu_33712_p00.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33712_p00() {
    mul_ln78_29_fu_33712_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33712_p1() {
    mul_ln78_29_fu_33712_p1 =  (sc_lv<5>) (mul_ln78_29_fu_33712_p10.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33712_p10() {
    mul_ln78_29_fu_33712_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33712_p2() {
    mul_ln78_29_fu_33712_p2 = (!mul_ln78_29_fu_33712_p0.read().is_01() || !mul_ln78_29_fu_33712_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_29_fu_33712_p0.read()) * sc_biguint<5>(mul_ln78_29_fu_33712_p1.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30429_p0() {
    mul_ln78_2_fu_30429_p0 =  (sc_lv<5>) (mul_ln78_2_fu_30429_p00.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30429_p00() {
    mul_ln78_2_fu_30429_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30429_p1() {
    mul_ln78_2_fu_30429_p1 =  (sc_lv<5>) (mul_ln78_2_fu_30429_p10.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30429_p10() {
    mul_ln78_2_fu_30429_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30429_p2() {
    mul_ln78_2_fu_30429_p2 = (!mul_ln78_2_fu_30429_p0.read().is_01() || !mul_ln78_2_fu_30429_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_2_fu_30429_p0.read()) * sc_biguint<5>(mul_ln78_2_fu_30429_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36170_p0() {
    mul_ln78_300_fu_36170_p0 =  (sc_lv<5>) (zext_ln78_334_fu_36166_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36170_p1() {
    mul_ln78_300_fu_36170_p1 =  (sc_lv<5>) (zext_ln78_334_fu_36166_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36170_p2() {
    mul_ln78_300_fu_36170_p2 = (!mul_ln78_300_fu_36170_p0.read().is_01() || !mul_ln78_300_fu_36170_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_300_fu_36170_p0.read()) * sc_biguint<5>(mul_ln78_300_fu_36170_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36351_p0() {
    mul_ln78_301_fu_36351_p0 =  (sc_lv<5>) (zext_ln78_341_fu_36347_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36351_p1() {
    mul_ln78_301_fu_36351_p1 =  (sc_lv<5>) (zext_ln78_341_fu_36347_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36351_p2() {
    mul_ln78_301_fu_36351_p2 = (!mul_ln78_301_fu_36351_p0.read().is_01() || !mul_ln78_301_fu_36351_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_301_fu_36351_p0.read()) * sc_biguint<5>(mul_ln78_301_fu_36351_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36442_p0() {
    mul_ln78_302_fu_36442_p0 =  (sc_lv<5>) (zext_ln78_348_fu_36438_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36442_p1() {
    mul_ln78_302_fu_36442_p1 =  (sc_lv<5>) (zext_ln78_348_fu_36438_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36442_p2() {
    mul_ln78_302_fu_36442_p2 = (!mul_ln78_302_fu_36442_p0.read().is_01() || !mul_ln78_302_fu_36442_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_302_fu_36442_p0.read()) * sc_biguint<5>(mul_ln78_302_fu_36442_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36623_p0() {
    mul_ln78_303_fu_36623_p0 =  (sc_lv<5>) (zext_ln78_355_fu_36619_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36623_p1() {
    mul_ln78_303_fu_36623_p1 =  (sc_lv<5>) (zext_ln78_355_fu_36619_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36623_p2() {
    mul_ln78_303_fu_36623_p2 = (!mul_ln78_303_fu_36623_p0.read().is_01() || !mul_ln78_303_fu_36623_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_303_fu_36623_p0.read()) * sc_biguint<5>(mul_ln78_303_fu_36623_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36714_p0() {
    mul_ln78_304_fu_36714_p0 =  (sc_lv<5>) (zext_ln78_362_fu_36710_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36714_p1() {
    mul_ln78_304_fu_36714_p1 =  (sc_lv<5>) (zext_ln78_362_fu_36710_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36714_p2() {
    mul_ln78_304_fu_36714_p2 = (!mul_ln78_304_fu_36714_p0.read().is_01() || !mul_ln78_304_fu_36714_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_304_fu_36714_p0.read()) * sc_biguint<5>(mul_ln78_304_fu_36714_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36895_p0() {
    mul_ln78_305_fu_36895_p0 =  (sc_lv<5>) (zext_ln78_369_fu_36891_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36895_p1() {
    mul_ln78_305_fu_36895_p1 =  (sc_lv<5>) (zext_ln78_369_fu_36891_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36895_p2() {
    mul_ln78_305_fu_36895_p2 = (!mul_ln78_305_fu_36895_p0.read().is_01() || !mul_ln78_305_fu_36895_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_305_fu_36895_p0.read()) * sc_biguint<5>(mul_ln78_305_fu_36895_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36986_p0() {
    mul_ln78_306_fu_36986_p0 =  (sc_lv<5>) (zext_ln78_376_fu_36982_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36986_p1() {
    mul_ln78_306_fu_36986_p1 =  (sc_lv<5>) (zext_ln78_376_fu_36982_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36986_p2() {
    mul_ln78_306_fu_36986_p2 = (!mul_ln78_306_fu_36986_p0.read().is_01() || !mul_ln78_306_fu_36986_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_306_fu_36986_p0.read()) * sc_biguint<5>(mul_ln78_306_fu_36986_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37167_p0() {
    mul_ln78_307_fu_37167_p0 =  (sc_lv<5>) (zext_ln78_383_fu_37163_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37167_p1() {
    mul_ln78_307_fu_37167_p1 =  (sc_lv<5>) (zext_ln78_383_fu_37163_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37167_p2() {
    mul_ln78_307_fu_37167_p2 = (!mul_ln78_307_fu_37167_p0.read().is_01() || !mul_ln78_307_fu_37167_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_307_fu_37167_p0.read()) * sc_biguint<5>(mul_ln78_307_fu_37167_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37258_p0() {
    mul_ln78_308_fu_37258_p0 =  (sc_lv<5>) (zext_ln78_390_fu_37254_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37258_p1() {
    mul_ln78_308_fu_37258_p1 =  (sc_lv<5>) (zext_ln78_390_fu_37254_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37258_p2() {
    mul_ln78_308_fu_37258_p2 = (!mul_ln78_308_fu_37258_p0.read().is_01() || !mul_ln78_308_fu_37258_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_308_fu_37258_p0.read()) * sc_biguint<5>(mul_ln78_308_fu_37258_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37439_p0() {
    mul_ln78_309_fu_37439_p0 =  (sc_lv<5>) (zext_ln78_397_fu_37435_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37439_p1() {
    mul_ln78_309_fu_37439_p1 =  (sc_lv<5>) (zext_ln78_397_fu_37435_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37439_p2() {
    mul_ln78_309_fu_37439_p2 = (!mul_ln78_309_fu_37439_p0.read().is_01() || !mul_ln78_309_fu_37439_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_309_fu_37439_p0.read()) * sc_biguint<5>(mul_ln78_309_fu_37439_p1.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33893_p0() {
    mul_ln78_30_fu_33893_p0 =  (sc_lv<5>) (mul_ln78_30_fu_33893_p00.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33893_p00() {
    mul_ln78_30_fu_33893_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33893_p1() {
    mul_ln78_30_fu_33893_p1 =  (sc_lv<5>) (mul_ln78_30_fu_33893_p10.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33893_p10() {
    mul_ln78_30_fu_33893_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33893_p2() {
    mul_ln78_30_fu_33893_p2 = (!mul_ln78_30_fu_33893_p0.read().is_01() || !mul_ln78_30_fu_33893_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_30_fu_33893_p0.read()) * sc_biguint<5>(mul_ln78_30_fu_33893_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37530_p0() {
    mul_ln78_310_fu_37530_p0 =  (sc_lv<5>) (zext_ln78_404_fu_37526_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37530_p1() {
    mul_ln78_310_fu_37530_p1 =  (sc_lv<5>) (zext_ln78_404_fu_37526_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37530_p2() {
    mul_ln78_310_fu_37530_p2 = (!mul_ln78_310_fu_37530_p0.read().is_01() || !mul_ln78_310_fu_37530_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_310_fu_37530_p0.read()) * sc_biguint<5>(mul_ln78_310_fu_37530_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37711_p0() {
    mul_ln78_311_fu_37711_p0 =  (sc_lv<5>) (zext_ln78_411_fu_37707_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37711_p1() {
    mul_ln78_311_fu_37711_p1 =  (sc_lv<5>) (zext_ln78_411_fu_37707_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37711_p2() {
    mul_ln78_311_fu_37711_p2 = (!mul_ln78_311_fu_37711_p0.read().is_01() || !mul_ln78_311_fu_37711_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_311_fu_37711_p0.read()) * sc_biguint<5>(mul_ln78_311_fu_37711_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37802_p0() {
    mul_ln78_312_fu_37802_p0 =  (sc_lv<5>) (zext_ln78_418_fu_37798_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37802_p1() {
    mul_ln78_312_fu_37802_p1 =  (sc_lv<5>) (zext_ln78_418_fu_37798_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37802_p2() {
    mul_ln78_312_fu_37802_p2 = (!mul_ln78_312_fu_37802_p0.read().is_01() || !mul_ln78_312_fu_37802_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_312_fu_37802_p0.read()) * sc_biguint<5>(mul_ln78_312_fu_37802_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37983_p0() {
    mul_ln78_313_fu_37983_p0 =  (sc_lv<5>) (zext_ln78_425_fu_37979_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37983_p1() {
    mul_ln78_313_fu_37983_p1 =  (sc_lv<5>) (zext_ln78_425_fu_37979_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37983_p2() {
    mul_ln78_313_fu_37983_p2 = (!mul_ln78_313_fu_37983_p0.read().is_01() || !mul_ln78_313_fu_37983_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_313_fu_37983_p0.read()) * sc_biguint<5>(mul_ln78_313_fu_37983_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38074_p0() {
    mul_ln78_314_fu_38074_p0 =  (sc_lv<5>) (zext_ln78_432_fu_38070_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38074_p1() {
    mul_ln78_314_fu_38074_p1 =  (sc_lv<5>) (zext_ln78_432_fu_38070_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38074_p2() {
    mul_ln78_314_fu_38074_p2 = (!mul_ln78_314_fu_38074_p0.read().is_01() || !mul_ln78_314_fu_38074_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_314_fu_38074_p0.read()) * sc_biguint<5>(mul_ln78_314_fu_38074_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38255_p0() {
    mul_ln78_315_fu_38255_p0 =  (sc_lv<5>) (zext_ln78_439_fu_38251_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38255_p1() {
    mul_ln78_315_fu_38255_p1 =  (sc_lv<5>) (zext_ln78_439_fu_38251_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38255_p2() {
    mul_ln78_315_fu_38255_p2 = (!mul_ln78_315_fu_38255_p0.read().is_01() || !mul_ln78_315_fu_38255_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_315_fu_38255_p0.read()) * sc_biguint<5>(mul_ln78_315_fu_38255_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38346_p0() {
    mul_ln78_316_fu_38346_p0 =  (sc_lv<5>) (zext_ln78_446_fu_38342_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38346_p1() {
    mul_ln78_316_fu_38346_p1 =  (sc_lv<5>) (zext_ln78_446_fu_38342_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38346_p2() {
    mul_ln78_316_fu_38346_p2 = (!mul_ln78_316_fu_38346_p0.read().is_01() || !mul_ln78_316_fu_38346_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_316_fu_38346_p0.read()) * sc_biguint<5>(mul_ln78_316_fu_38346_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38527_p0() {
    mul_ln78_317_fu_38527_p0 =  (sc_lv<5>) (zext_ln78_453_fu_38523_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38527_p1() {
    mul_ln78_317_fu_38527_p1 =  (sc_lv<5>) (zext_ln78_453_fu_38523_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38527_p2() {
    mul_ln78_317_fu_38527_p2 = (!mul_ln78_317_fu_38527_p0.read().is_01() || !mul_ln78_317_fu_38527_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_317_fu_38527_p0.read()) * sc_biguint<5>(mul_ln78_317_fu_38527_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38618_p0() {
    mul_ln78_318_fu_38618_p0 =  (sc_lv<5>) (zext_ln78_460_fu_38614_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38618_p1() {
    mul_ln78_318_fu_38618_p1 =  (sc_lv<5>) (zext_ln78_460_fu_38614_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38618_p2() {
    mul_ln78_318_fu_38618_p2 = (!mul_ln78_318_fu_38618_p0.read().is_01() || !mul_ln78_318_fu_38618_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_318_fu_38618_p0.read()) * sc_biguint<5>(mul_ln78_318_fu_38618_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38799_p0() {
    mul_ln78_319_fu_38799_p0 =  (sc_lv<5>) (zext_ln78_467_fu_38795_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38799_p1() {
    mul_ln78_319_fu_38799_p1 =  (sc_lv<5>) (zext_ln78_467_fu_38795_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38799_p2() {
    mul_ln78_319_fu_38799_p2 = (!mul_ln78_319_fu_38799_p0.read().is_01() || !mul_ln78_319_fu_38799_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_319_fu_38799_p0.read()) * sc_biguint<5>(mul_ln78_319_fu_38799_p1.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33984_p0() {
    mul_ln78_31_fu_33984_p0 =  (sc_lv<5>) (mul_ln78_31_fu_33984_p00.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33984_p00() {
    mul_ln78_31_fu_33984_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33984_p1() {
    mul_ln78_31_fu_33984_p1 =  (sc_lv<5>) (mul_ln78_31_fu_33984_p10.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33984_p10() {
    mul_ln78_31_fu_33984_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33984_p2() {
    mul_ln78_31_fu_33984_p2 = (!mul_ln78_31_fu_33984_p0.read().is_01() || !mul_ln78_31_fu_33984_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_31_fu_33984_p0.read()) * sc_biguint<5>(mul_ln78_31_fu_33984_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38890_p0() {
    mul_ln78_320_fu_38890_p0 =  (sc_lv<5>) (zext_ln78_474_fu_38886_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38890_p1() {
    mul_ln78_320_fu_38890_p1 =  (sc_lv<5>) (zext_ln78_474_fu_38886_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38890_p2() {
    mul_ln78_320_fu_38890_p2 = (!mul_ln78_320_fu_38890_p0.read().is_01() || !mul_ln78_320_fu_38890_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_320_fu_38890_p0.read()) * sc_biguint<5>(mul_ln78_320_fu_38890_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39071_p0() {
    mul_ln78_321_fu_39071_p0 =  (sc_lv<5>) (zext_ln78_481_fu_39067_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39071_p1() {
    mul_ln78_321_fu_39071_p1 =  (sc_lv<5>) (zext_ln78_481_fu_39067_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39071_p2() {
    mul_ln78_321_fu_39071_p2 = (!mul_ln78_321_fu_39071_p0.read().is_01() || !mul_ln78_321_fu_39071_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_321_fu_39071_p0.read()) * sc_biguint<5>(mul_ln78_321_fu_39071_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39162_p0() {
    mul_ln78_322_fu_39162_p0 =  (sc_lv<5>) (zext_ln78_488_fu_39158_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39162_p1() {
    mul_ln78_322_fu_39162_p1 =  (sc_lv<5>) (zext_ln78_488_fu_39158_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39162_p2() {
    mul_ln78_322_fu_39162_p2 = (!mul_ln78_322_fu_39162_p0.read().is_01() || !mul_ln78_322_fu_39162_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_322_fu_39162_p0.read()) * sc_biguint<5>(mul_ln78_322_fu_39162_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39343_p0() {
    mul_ln78_323_fu_39343_p0 =  (sc_lv<5>) (zext_ln78_495_fu_39339_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39343_p1() {
    mul_ln78_323_fu_39343_p1 =  (sc_lv<5>) (zext_ln78_495_fu_39339_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39343_p2() {
    mul_ln78_323_fu_39343_p2 = (!mul_ln78_323_fu_39343_p0.read().is_01() || !mul_ln78_323_fu_39343_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_323_fu_39343_p0.read()) * sc_biguint<5>(mul_ln78_323_fu_39343_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39434_p0() {
    mul_ln78_324_fu_39434_p0 =  (sc_lv<5>) (zext_ln78_502_fu_39430_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39434_p1() {
    mul_ln78_324_fu_39434_p1 =  (sc_lv<5>) (zext_ln78_502_fu_39430_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39434_p2() {
    mul_ln78_324_fu_39434_p2 = (!mul_ln78_324_fu_39434_p0.read().is_01() || !mul_ln78_324_fu_39434_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_324_fu_39434_p0.read()) * sc_biguint<5>(mul_ln78_324_fu_39434_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39615_p0() {
    mul_ln78_325_fu_39615_p0 =  (sc_lv<5>) (zext_ln78_509_fu_39611_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39615_p1() {
    mul_ln78_325_fu_39615_p1 =  (sc_lv<5>) (zext_ln78_509_fu_39611_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39615_p2() {
    mul_ln78_325_fu_39615_p2 = (!mul_ln78_325_fu_39615_p0.read().is_01() || !mul_ln78_325_fu_39615_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_325_fu_39615_p0.read()) * sc_biguint<5>(mul_ln78_325_fu_39615_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39706_p0() {
    mul_ln78_326_fu_39706_p0 =  (sc_lv<5>) (zext_ln78_516_fu_39702_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39706_p1() {
    mul_ln78_326_fu_39706_p1 =  (sc_lv<5>) (zext_ln78_516_fu_39702_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39706_p2() {
    mul_ln78_326_fu_39706_p2 = (!mul_ln78_326_fu_39706_p0.read().is_01() || !mul_ln78_326_fu_39706_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_326_fu_39706_p0.read()) * sc_biguint<5>(mul_ln78_326_fu_39706_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39887_p0() {
    mul_ln78_327_fu_39887_p0 =  (sc_lv<5>) (zext_ln78_523_fu_39883_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39887_p1() {
    mul_ln78_327_fu_39887_p1 =  (sc_lv<5>) (zext_ln78_523_fu_39883_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39887_p2() {
    mul_ln78_327_fu_39887_p2 = (!mul_ln78_327_fu_39887_p0.read().is_01() || !mul_ln78_327_fu_39887_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_327_fu_39887_p0.read()) * sc_biguint<5>(mul_ln78_327_fu_39887_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39978_p0() {
    mul_ln78_328_fu_39978_p0 =  (sc_lv<5>) (zext_ln78_530_fu_39974_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39978_p1() {
    mul_ln78_328_fu_39978_p1 =  (sc_lv<5>) (zext_ln78_530_fu_39974_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39978_p2() {
    mul_ln78_328_fu_39978_p2 = (!mul_ln78_328_fu_39978_p0.read().is_01() || !mul_ln78_328_fu_39978_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_328_fu_39978_p0.read()) * sc_biguint<5>(mul_ln78_328_fu_39978_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40159_p0() {
    mul_ln78_329_fu_40159_p0 =  (sc_lv<5>) (zext_ln78_537_fu_40155_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40159_p1() {
    mul_ln78_329_fu_40159_p1 =  (sc_lv<5>) (zext_ln78_537_fu_40155_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40159_p2() {
    mul_ln78_329_fu_40159_p2 = (!mul_ln78_329_fu_40159_p0.read().is_01() || !mul_ln78_329_fu_40159_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_329_fu_40159_p0.read()) * sc_biguint<5>(mul_ln78_329_fu_40159_p1.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34165_p0() {
    mul_ln78_32_fu_34165_p0 =  (sc_lv<5>) (mul_ln78_32_fu_34165_p00.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34165_p00() {
    mul_ln78_32_fu_34165_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34165_p1() {
    mul_ln78_32_fu_34165_p1 =  (sc_lv<5>) (mul_ln78_32_fu_34165_p10.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34165_p10() {
    mul_ln78_32_fu_34165_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34165_p2() {
    mul_ln78_32_fu_34165_p2 = (!mul_ln78_32_fu_34165_p0.read().is_01() || !mul_ln78_32_fu_34165_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_32_fu_34165_p0.read()) * sc_biguint<5>(mul_ln78_32_fu_34165_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40250_p0() {
    mul_ln78_330_fu_40250_p0 =  (sc_lv<5>) (zext_ln78_544_fu_40246_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40250_p1() {
    mul_ln78_330_fu_40250_p1 =  (sc_lv<5>) (zext_ln78_544_fu_40246_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40250_p2() {
    mul_ln78_330_fu_40250_p2 = (!mul_ln78_330_fu_40250_p0.read().is_01() || !mul_ln78_330_fu_40250_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_330_fu_40250_p0.read()) * sc_biguint<5>(mul_ln78_330_fu_40250_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40431_p0() {
    mul_ln78_331_fu_40431_p0 =  (sc_lv<5>) (zext_ln78_551_fu_40427_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40431_p1() {
    mul_ln78_331_fu_40431_p1 =  (sc_lv<5>) (zext_ln78_551_fu_40427_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40431_p2() {
    mul_ln78_331_fu_40431_p2 = (!mul_ln78_331_fu_40431_p0.read().is_01() || !mul_ln78_331_fu_40431_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_331_fu_40431_p0.read()) * sc_biguint<5>(mul_ln78_331_fu_40431_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40522_p0() {
    mul_ln78_332_fu_40522_p0 =  (sc_lv<5>) (zext_ln78_558_fu_40518_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40522_p1() {
    mul_ln78_332_fu_40522_p1 =  (sc_lv<5>) (zext_ln78_558_fu_40518_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40522_p2() {
    mul_ln78_332_fu_40522_p2 = (!mul_ln78_332_fu_40522_p0.read().is_01() || !mul_ln78_332_fu_40522_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_332_fu_40522_p0.read()) * sc_biguint<5>(mul_ln78_332_fu_40522_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40703_p0() {
    mul_ln78_333_fu_40703_p0 =  (sc_lv<5>) (zext_ln78_565_fu_40699_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40703_p1() {
    mul_ln78_333_fu_40703_p1 =  (sc_lv<5>) (zext_ln78_565_fu_40699_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40703_p2() {
    mul_ln78_333_fu_40703_p2 = (!mul_ln78_333_fu_40703_p0.read().is_01() || !mul_ln78_333_fu_40703_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_333_fu_40703_p0.read()) * sc_biguint<5>(mul_ln78_333_fu_40703_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40794_p0() {
    mul_ln78_334_fu_40794_p0 =  (sc_lv<5>) (zext_ln78_572_fu_40790_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40794_p1() {
    mul_ln78_334_fu_40794_p1 =  (sc_lv<5>) (zext_ln78_572_fu_40790_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40794_p2() {
    mul_ln78_334_fu_40794_p2 = (!mul_ln78_334_fu_40794_p0.read().is_01() || !mul_ln78_334_fu_40794_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_334_fu_40794_p0.read()) * sc_biguint<5>(mul_ln78_334_fu_40794_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40975_p0() {
    mul_ln78_335_fu_40975_p0 =  (sc_lv<5>) (zext_ln78_579_fu_40971_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40975_p1() {
    mul_ln78_335_fu_40975_p1 =  (sc_lv<5>) (zext_ln78_579_fu_40971_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40975_p2() {
    mul_ln78_335_fu_40975_p2 = (!mul_ln78_335_fu_40975_p0.read().is_01() || !mul_ln78_335_fu_40975_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_335_fu_40975_p0.read()) * sc_biguint<5>(mul_ln78_335_fu_40975_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41066_p0() {
    mul_ln78_336_fu_41066_p0 =  (sc_lv<5>) (zext_ln78_586_fu_41062_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41066_p1() {
    mul_ln78_336_fu_41066_p1 =  (sc_lv<5>) (zext_ln78_586_fu_41062_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41066_p2() {
    mul_ln78_336_fu_41066_p2 = (!mul_ln78_336_fu_41066_p0.read().is_01() || !mul_ln78_336_fu_41066_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_336_fu_41066_p0.read()) * sc_biguint<5>(mul_ln78_336_fu_41066_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41247_p0() {
    mul_ln78_337_fu_41247_p0 =  (sc_lv<5>) (zext_ln78_593_fu_41243_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41247_p1() {
    mul_ln78_337_fu_41247_p1 =  (sc_lv<5>) (zext_ln78_593_fu_41243_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41247_p2() {
    mul_ln78_337_fu_41247_p2 = (!mul_ln78_337_fu_41247_p0.read().is_01() || !mul_ln78_337_fu_41247_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_337_fu_41247_p0.read()) * sc_biguint<5>(mul_ln78_337_fu_41247_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41338_p0() {
    mul_ln78_338_fu_41338_p0 =  (sc_lv<5>) (zext_ln78_600_fu_41334_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41338_p1() {
    mul_ln78_338_fu_41338_p1 =  (sc_lv<5>) (zext_ln78_600_fu_41334_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41338_p2() {
    mul_ln78_338_fu_41338_p2 = (!mul_ln78_338_fu_41338_p0.read().is_01() || !mul_ln78_338_fu_41338_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_338_fu_41338_p0.read()) * sc_biguint<5>(mul_ln78_338_fu_41338_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41519_p0() {
    mul_ln78_339_fu_41519_p0 =  (sc_lv<5>) (zext_ln78_607_fu_41515_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41519_p1() {
    mul_ln78_339_fu_41519_p1 =  (sc_lv<5>) (zext_ln78_607_fu_41515_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41519_p2() {
    mul_ln78_339_fu_41519_p2 = (!mul_ln78_339_fu_41519_p0.read().is_01() || !mul_ln78_339_fu_41519_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_339_fu_41519_p0.read()) * sc_biguint<5>(mul_ln78_339_fu_41519_p1.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34256_p0() {
    mul_ln78_33_fu_34256_p0 =  (sc_lv<5>) (mul_ln78_33_fu_34256_p00.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34256_p00() {
    mul_ln78_33_fu_34256_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34256_p1() {
    mul_ln78_33_fu_34256_p1 =  (sc_lv<5>) (mul_ln78_33_fu_34256_p10.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34256_p10() {
    mul_ln78_33_fu_34256_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34256_p2() {
    mul_ln78_33_fu_34256_p2 = (!mul_ln78_33_fu_34256_p0.read().is_01() || !mul_ln78_33_fu_34256_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_33_fu_34256_p0.read()) * sc_biguint<5>(mul_ln78_33_fu_34256_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41610_p0() {
    mul_ln78_340_fu_41610_p0 =  (sc_lv<5>) (zext_ln78_614_fu_41606_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41610_p1() {
    mul_ln78_340_fu_41610_p1 =  (sc_lv<5>) (zext_ln78_614_fu_41606_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41610_p2() {
    mul_ln78_340_fu_41610_p2 = (!mul_ln78_340_fu_41610_p0.read().is_01() || !mul_ln78_340_fu_41610_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_340_fu_41610_p0.read()) * sc_biguint<5>(mul_ln78_340_fu_41610_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41791_p0() {
    mul_ln78_341_fu_41791_p0 =  (sc_lv<5>) (zext_ln78_621_fu_41787_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41791_p1() {
    mul_ln78_341_fu_41791_p1 =  (sc_lv<5>) (zext_ln78_621_fu_41787_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41791_p2() {
    mul_ln78_341_fu_41791_p2 = (!mul_ln78_341_fu_41791_p0.read().is_01() || !mul_ln78_341_fu_41791_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_341_fu_41791_p0.read()) * sc_biguint<5>(mul_ln78_341_fu_41791_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41882_p0() {
    mul_ln78_342_fu_41882_p0 =  (sc_lv<5>) (zext_ln78_628_fu_41878_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41882_p1() {
    mul_ln78_342_fu_41882_p1 =  (sc_lv<5>) (zext_ln78_628_fu_41878_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41882_p2() {
    mul_ln78_342_fu_41882_p2 = (!mul_ln78_342_fu_41882_p0.read().is_01() || !mul_ln78_342_fu_41882_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_342_fu_41882_p0.read()) * sc_biguint<5>(mul_ln78_342_fu_41882_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42063_p0() {
    mul_ln78_343_fu_42063_p0 =  (sc_lv<5>) (zext_ln78_635_fu_42059_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42063_p1() {
    mul_ln78_343_fu_42063_p1 =  (sc_lv<5>) (zext_ln78_635_fu_42059_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42063_p2() {
    mul_ln78_343_fu_42063_p2 = (!mul_ln78_343_fu_42063_p0.read().is_01() || !mul_ln78_343_fu_42063_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_343_fu_42063_p0.read()) * sc_biguint<5>(mul_ln78_343_fu_42063_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42154_p0() {
    mul_ln78_344_fu_42154_p0 =  (sc_lv<5>) (zext_ln78_642_fu_42150_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42154_p1() {
    mul_ln78_344_fu_42154_p1 =  (sc_lv<5>) (zext_ln78_642_fu_42150_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42154_p2() {
    mul_ln78_344_fu_42154_p2 = (!mul_ln78_344_fu_42154_p0.read().is_01() || !mul_ln78_344_fu_42154_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_344_fu_42154_p0.read()) * sc_biguint<5>(mul_ln78_344_fu_42154_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42335_p0() {
    mul_ln78_345_fu_42335_p0 =  (sc_lv<5>) (zext_ln78_649_fu_42331_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42335_p1() {
    mul_ln78_345_fu_42335_p1 =  (sc_lv<5>) (zext_ln78_649_fu_42331_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42335_p2() {
    mul_ln78_345_fu_42335_p2 = (!mul_ln78_345_fu_42335_p0.read().is_01() || !mul_ln78_345_fu_42335_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_345_fu_42335_p0.read()) * sc_biguint<5>(mul_ln78_345_fu_42335_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42426_p0() {
    mul_ln78_346_fu_42426_p0 =  (sc_lv<5>) (zext_ln78_656_fu_42422_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42426_p1() {
    mul_ln78_346_fu_42426_p1 =  (sc_lv<5>) (zext_ln78_656_fu_42422_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42426_p2() {
    mul_ln78_346_fu_42426_p2 = (!mul_ln78_346_fu_42426_p0.read().is_01() || !mul_ln78_346_fu_42426_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_346_fu_42426_p0.read()) * sc_biguint<5>(mul_ln78_346_fu_42426_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42607_p0() {
    mul_ln78_347_fu_42607_p0 =  (sc_lv<5>) (zext_ln78_663_fu_42603_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42607_p1() {
    mul_ln78_347_fu_42607_p1 =  (sc_lv<5>) (zext_ln78_663_fu_42603_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42607_p2() {
    mul_ln78_347_fu_42607_p2 = (!mul_ln78_347_fu_42607_p0.read().is_01() || !mul_ln78_347_fu_42607_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_347_fu_42607_p0.read()) * sc_biguint<5>(mul_ln78_347_fu_42607_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42698_p0() {
    mul_ln78_348_fu_42698_p0 =  (sc_lv<5>) (zext_ln78_670_fu_42694_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42698_p1() {
    mul_ln78_348_fu_42698_p1 =  (sc_lv<5>) (zext_ln78_670_fu_42694_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42698_p2() {
    mul_ln78_348_fu_42698_p2 = (!mul_ln78_348_fu_42698_p0.read().is_01() || !mul_ln78_348_fu_42698_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_348_fu_42698_p0.read()) * sc_biguint<5>(mul_ln78_348_fu_42698_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42879_p0() {
    mul_ln78_349_fu_42879_p0 =  (sc_lv<5>) (zext_ln78_677_fu_42875_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42879_p1() {
    mul_ln78_349_fu_42879_p1 =  (sc_lv<5>) (zext_ln78_677_fu_42875_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42879_p2() {
    mul_ln78_349_fu_42879_p2 = (!mul_ln78_349_fu_42879_p0.read().is_01() || !mul_ln78_349_fu_42879_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_349_fu_42879_p0.read()) * sc_biguint<5>(mul_ln78_349_fu_42879_p1.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34437_p0() {
    mul_ln78_34_fu_34437_p0 =  (sc_lv<5>) (mul_ln78_34_fu_34437_p00.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34437_p00() {
    mul_ln78_34_fu_34437_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34437_p1() {
    mul_ln78_34_fu_34437_p1 =  (sc_lv<5>) (mul_ln78_34_fu_34437_p10.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34437_p10() {
    mul_ln78_34_fu_34437_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34437_p2() {
    mul_ln78_34_fu_34437_p2 = (!mul_ln78_34_fu_34437_p0.read().is_01() || !mul_ln78_34_fu_34437_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_34_fu_34437_p0.read()) * sc_biguint<5>(mul_ln78_34_fu_34437_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42970_p0() {
    mul_ln78_350_fu_42970_p0 =  (sc_lv<5>) (zext_ln78_684_fu_42966_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42970_p1() {
    mul_ln78_350_fu_42970_p1 =  (sc_lv<5>) (zext_ln78_684_fu_42966_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42970_p2() {
    mul_ln78_350_fu_42970_p2 = (!mul_ln78_350_fu_42970_p0.read().is_01() || !mul_ln78_350_fu_42970_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_350_fu_42970_p0.read()) * sc_biguint<5>(mul_ln78_350_fu_42970_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43151_p0() {
    mul_ln78_351_fu_43151_p0 =  (sc_lv<5>) (zext_ln78_691_fu_43147_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43151_p1() {
    mul_ln78_351_fu_43151_p1 =  (sc_lv<5>) (zext_ln78_691_fu_43147_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43151_p2() {
    mul_ln78_351_fu_43151_p2 = (!mul_ln78_351_fu_43151_p0.read().is_01() || !mul_ln78_351_fu_43151_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_351_fu_43151_p0.read()) * sc_biguint<5>(mul_ln78_351_fu_43151_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43242_p0() {
    mul_ln78_352_fu_43242_p0 =  (sc_lv<5>) (zext_ln78_698_fu_43238_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43242_p1() {
    mul_ln78_352_fu_43242_p1 =  (sc_lv<5>) (zext_ln78_698_fu_43238_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43242_p2() {
    mul_ln78_352_fu_43242_p2 = (!mul_ln78_352_fu_43242_p0.read().is_01() || !mul_ln78_352_fu_43242_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_352_fu_43242_p0.read()) * sc_biguint<5>(mul_ln78_352_fu_43242_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43423_p0() {
    mul_ln78_353_fu_43423_p0 =  (sc_lv<5>) (zext_ln78_705_fu_43419_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43423_p1() {
    mul_ln78_353_fu_43423_p1 =  (sc_lv<5>) (zext_ln78_705_fu_43419_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43423_p2() {
    mul_ln78_353_fu_43423_p2 = (!mul_ln78_353_fu_43423_p0.read().is_01() || !mul_ln78_353_fu_43423_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_353_fu_43423_p0.read()) * sc_biguint<5>(mul_ln78_353_fu_43423_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43514_p0() {
    mul_ln78_354_fu_43514_p0 =  (sc_lv<5>) (zext_ln78_712_fu_43510_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43514_p1() {
    mul_ln78_354_fu_43514_p1 =  (sc_lv<5>) (zext_ln78_712_fu_43510_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43514_p2() {
    mul_ln78_354_fu_43514_p2 = (!mul_ln78_354_fu_43514_p0.read().is_01() || !mul_ln78_354_fu_43514_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_354_fu_43514_p0.read()) * sc_biguint<5>(mul_ln78_354_fu_43514_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43695_p0() {
    mul_ln78_355_fu_43695_p0 =  (sc_lv<5>) (zext_ln78_719_fu_43691_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43695_p1() {
    mul_ln78_355_fu_43695_p1 =  (sc_lv<5>) (zext_ln78_719_fu_43691_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43695_p2() {
    mul_ln78_355_fu_43695_p2 = (!mul_ln78_355_fu_43695_p0.read().is_01() || !mul_ln78_355_fu_43695_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_355_fu_43695_p0.read()) * sc_biguint<5>(mul_ln78_355_fu_43695_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43786_p0() {
    mul_ln78_356_fu_43786_p0 =  (sc_lv<5>) (zext_ln78_726_fu_43782_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43786_p1() {
    mul_ln78_356_fu_43786_p1 =  (sc_lv<5>) (zext_ln78_726_fu_43782_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43786_p2() {
    mul_ln78_356_fu_43786_p2 = (!mul_ln78_356_fu_43786_p0.read().is_01() || !mul_ln78_356_fu_43786_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_356_fu_43786_p0.read()) * sc_biguint<5>(mul_ln78_356_fu_43786_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43967_p0() {
    mul_ln78_357_fu_43967_p0 =  (sc_lv<5>) (zext_ln78_733_fu_43963_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43967_p1() {
    mul_ln78_357_fu_43967_p1 =  (sc_lv<5>) (zext_ln78_733_fu_43963_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43967_p2() {
    mul_ln78_357_fu_43967_p2 = (!mul_ln78_357_fu_43967_p0.read().is_01() || !mul_ln78_357_fu_43967_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_357_fu_43967_p0.read()) * sc_biguint<5>(mul_ln78_357_fu_43967_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44058_p0() {
    mul_ln78_358_fu_44058_p0 =  (sc_lv<5>) (zext_ln78_740_fu_44054_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44058_p1() {
    mul_ln78_358_fu_44058_p1 =  (sc_lv<5>) (zext_ln78_740_fu_44054_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44058_p2() {
    mul_ln78_358_fu_44058_p2 = (!mul_ln78_358_fu_44058_p0.read().is_01() || !mul_ln78_358_fu_44058_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_358_fu_44058_p0.read()) * sc_biguint<5>(mul_ln78_358_fu_44058_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44239_p0() {
    mul_ln78_359_fu_44239_p0 =  (sc_lv<5>) (zext_ln78_747_fu_44235_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44239_p1() {
    mul_ln78_359_fu_44239_p1 =  (sc_lv<5>) (zext_ln78_747_fu_44235_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44239_p2() {
    mul_ln78_359_fu_44239_p2 = (!mul_ln78_359_fu_44239_p0.read().is_01() || !mul_ln78_359_fu_44239_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_359_fu_44239_p0.read()) * sc_biguint<5>(mul_ln78_359_fu_44239_p1.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34528_p0() {
    mul_ln78_35_fu_34528_p0 =  (sc_lv<5>) (mul_ln78_35_fu_34528_p00.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34528_p00() {
    mul_ln78_35_fu_34528_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34528_p1() {
    mul_ln78_35_fu_34528_p1 =  (sc_lv<5>) (mul_ln78_35_fu_34528_p10.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34528_p10() {
    mul_ln78_35_fu_34528_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34528_p2() {
    mul_ln78_35_fu_34528_p2 = (!mul_ln78_35_fu_34528_p0.read().is_01() || !mul_ln78_35_fu_34528_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_35_fu_34528_p0.read()) * sc_biguint<5>(mul_ln78_35_fu_34528_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44330_p0() {
    mul_ln78_360_fu_44330_p0 =  (sc_lv<5>) (zext_ln78_754_fu_44326_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44330_p1() {
    mul_ln78_360_fu_44330_p1 =  (sc_lv<5>) (zext_ln78_754_fu_44326_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44330_p2() {
    mul_ln78_360_fu_44330_p2 = (!mul_ln78_360_fu_44330_p0.read().is_01() || !mul_ln78_360_fu_44330_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_360_fu_44330_p0.read()) * sc_biguint<5>(mul_ln78_360_fu_44330_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44511_p0() {
    mul_ln78_361_fu_44511_p0 =  (sc_lv<5>) (zext_ln78_761_fu_44507_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44511_p1() {
    mul_ln78_361_fu_44511_p1 =  (sc_lv<5>) (zext_ln78_761_fu_44507_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44511_p2() {
    mul_ln78_361_fu_44511_p2 = (!mul_ln78_361_fu_44511_p0.read().is_01() || !mul_ln78_361_fu_44511_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_361_fu_44511_p0.read()) * sc_biguint<5>(mul_ln78_361_fu_44511_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44602_p0() {
    mul_ln78_362_fu_44602_p0 =  (sc_lv<5>) (zext_ln78_768_fu_44598_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44602_p1() {
    mul_ln78_362_fu_44602_p1 =  (sc_lv<5>) (zext_ln78_768_fu_44598_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44602_p2() {
    mul_ln78_362_fu_44602_p2 = (!mul_ln78_362_fu_44602_p0.read().is_01() || !mul_ln78_362_fu_44602_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_362_fu_44602_p0.read()) * sc_biguint<5>(mul_ln78_362_fu_44602_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44783_p0() {
    mul_ln78_363_fu_44783_p0 =  (sc_lv<5>) (zext_ln78_775_fu_44779_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44783_p1() {
    mul_ln78_363_fu_44783_p1 =  (sc_lv<5>) (zext_ln78_775_fu_44779_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44783_p2() {
    mul_ln78_363_fu_44783_p2 = (!mul_ln78_363_fu_44783_p0.read().is_01() || !mul_ln78_363_fu_44783_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_363_fu_44783_p0.read()) * sc_biguint<5>(mul_ln78_363_fu_44783_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44874_p0() {
    mul_ln78_364_fu_44874_p0 =  (sc_lv<5>) (zext_ln78_782_fu_44870_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44874_p1() {
    mul_ln78_364_fu_44874_p1 =  (sc_lv<5>) (zext_ln78_782_fu_44870_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44874_p2() {
    mul_ln78_364_fu_44874_p2 = (!mul_ln78_364_fu_44874_p0.read().is_01() || !mul_ln78_364_fu_44874_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_364_fu_44874_p0.read()) * sc_biguint<5>(mul_ln78_364_fu_44874_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45055_p0() {
    mul_ln78_365_fu_45055_p0 =  (sc_lv<5>) (zext_ln78_789_fu_45051_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45055_p1() {
    mul_ln78_365_fu_45055_p1 =  (sc_lv<5>) (zext_ln78_789_fu_45051_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45055_p2() {
    mul_ln78_365_fu_45055_p2 = (!mul_ln78_365_fu_45055_p0.read().is_01() || !mul_ln78_365_fu_45055_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_365_fu_45055_p0.read()) * sc_biguint<5>(mul_ln78_365_fu_45055_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45146_p0() {
    mul_ln78_366_fu_45146_p0 =  (sc_lv<5>) (zext_ln78_796_fu_45142_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45146_p1() {
    mul_ln78_366_fu_45146_p1 =  (sc_lv<5>) (zext_ln78_796_fu_45142_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45146_p2() {
    mul_ln78_366_fu_45146_p2 = (!mul_ln78_366_fu_45146_p0.read().is_01() || !mul_ln78_366_fu_45146_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_366_fu_45146_p0.read()) * sc_biguint<5>(mul_ln78_366_fu_45146_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45327_p0() {
    mul_ln78_367_fu_45327_p0 =  (sc_lv<5>) (zext_ln78_803_fu_45323_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45327_p1() {
    mul_ln78_367_fu_45327_p1 =  (sc_lv<5>) (zext_ln78_803_fu_45323_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45327_p2() {
    mul_ln78_367_fu_45327_p2 = (!mul_ln78_367_fu_45327_p0.read().is_01() || !mul_ln78_367_fu_45327_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_367_fu_45327_p0.read()) * sc_biguint<5>(mul_ln78_367_fu_45327_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45418_p0() {
    mul_ln78_368_fu_45418_p0 =  (sc_lv<5>) (zext_ln78_810_fu_45414_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45418_p1() {
    mul_ln78_368_fu_45418_p1 =  (sc_lv<5>) (zext_ln78_810_fu_45414_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45418_p2() {
    mul_ln78_368_fu_45418_p2 = (!mul_ln78_368_fu_45418_p0.read().is_01() || !mul_ln78_368_fu_45418_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_368_fu_45418_p0.read()) * sc_biguint<5>(mul_ln78_368_fu_45418_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45599_p0() {
    mul_ln78_369_fu_45599_p0 =  (sc_lv<5>) (zext_ln78_817_fu_45595_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45599_p1() {
    mul_ln78_369_fu_45599_p1 =  (sc_lv<5>) (zext_ln78_817_fu_45595_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45599_p2() {
    mul_ln78_369_fu_45599_p2 = (!mul_ln78_369_fu_45599_p0.read().is_01() || !mul_ln78_369_fu_45599_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_369_fu_45599_p0.read()) * sc_biguint<5>(mul_ln78_369_fu_45599_p1.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34709_p0() {
    mul_ln78_36_fu_34709_p0 =  (sc_lv<5>) (mul_ln78_36_fu_34709_p00.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34709_p00() {
    mul_ln78_36_fu_34709_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34709_p1() {
    mul_ln78_36_fu_34709_p1 =  (sc_lv<5>) (mul_ln78_36_fu_34709_p10.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34709_p10() {
    mul_ln78_36_fu_34709_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34709_p2() {
    mul_ln78_36_fu_34709_p2 = (!mul_ln78_36_fu_34709_p0.read().is_01() || !mul_ln78_36_fu_34709_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_36_fu_34709_p0.read()) * sc_biguint<5>(mul_ln78_36_fu_34709_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45690_p0() {
    mul_ln78_370_fu_45690_p0 =  (sc_lv<5>) (zext_ln78_824_fu_45686_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45690_p1() {
    mul_ln78_370_fu_45690_p1 =  (sc_lv<5>) (zext_ln78_824_fu_45686_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45690_p2() {
    mul_ln78_370_fu_45690_p2 = (!mul_ln78_370_fu_45690_p0.read().is_01() || !mul_ln78_370_fu_45690_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_370_fu_45690_p0.read()) * sc_biguint<5>(mul_ln78_370_fu_45690_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45871_p0() {
    mul_ln78_371_fu_45871_p0 =  (sc_lv<5>) (zext_ln78_831_fu_45867_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45871_p1() {
    mul_ln78_371_fu_45871_p1 =  (sc_lv<5>) (zext_ln78_831_fu_45867_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45871_p2() {
    mul_ln78_371_fu_45871_p2 = (!mul_ln78_371_fu_45871_p0.read().is_01() || !mul_ln78_371_fu_45871_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_371_fu_45871_p0.read()) * sc_biguint<5>(mul_ln78_371_fu_45871_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45962_p0() {
    mul_ln78_372_fu_45962_p0 =  (sc_lv<5>) (zext_ln78_838_fu_45958_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45962_p1() {
    mul_ln78_372_fu_45962_p1 =  (sc_lv<5>) (zext_ln78_838_fu_45958_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45962_p2() {
    mul_ln78_372_fu_45962_p2 = (!mul_ln78_372_fu_45962_p0.read().is_01() || !mul_ln78_372_fu_45962_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_372_fu_45962_p0.read()) * sc_biguint<5>(mul_ln78_372_fu_45962_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46143_p0() {
    mul_ln78_373_fu_46143_p0 =  (sc_lv<5>) (zext_ln78_845_fu_46139_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46143_p1() {
    mul_ln78_373_fu_46143_p1 =  (sc_lv<5>) (zext_ln78_845_fu_46139_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46143_p2() {
    mul_ln78_373_fu_46143_p2 = (!mul_ln78_373_fu_46143_p0.read().is_01() || !mul_ln78_373_fu_46143_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_373_fu_46143_p0.read()) * sc_biguint<5>(mul_ln78_373_fu_46143_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46234_p0() {
    mul_ln78_374_fu_46234_p0 =  (sc_lv<5>) (zext_ln78_852_fu_46230_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46234_p1() {
    mul_ln78_374_fu_46234_p1 =  (sc_lv<5>) (zext_ln78_852_fu_46230_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46234_p2() {
    mul_ln78_374_fu_46234_p2 = (!mul_ln78_374_fu_46234_p0.read().is_01() || !mul_ln78_374_fu_46234_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_374_fu_46234_p0.read()) * sc_biguint<5>(mul_ln78_374_fu_46234_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46415_p0() {
    mul_ln78_375_fu_46415_p0 =  (sc_lv<5>) (zext_ln78_859_fu_46411_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46415_p1() {
    mul_ln78_375_fu_46415_p1 =  (sc_lv<5>) (zext_ln78_859_fu_46411_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46415_p2() {
    mul_ln78_375_fu_46415_p2 = (!mul_ln78_375_fu_46415_p0.read().is_01() || !mul_ln78_375_fu_46415_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_375_fu_46415_p0.read()) * sc_biguint<5>(mul_ln78_375_fu_46415_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46506_p0() {
    mul_ln78_376_fu_46506_p0 =  (sc_lv<5>) (zext_ln78_866_fu_46502_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46506_p1() {
    mul_ln78_376_fu_46506_p1 =  (sc_lv<5>) (zext_ln78_866_fu_46502_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46506_p2() {
    mul_ln78_376_fu_46506_p2 = (!mul_ln78_376_fu_46506_p0.read().is_01() || !mul_ln78_376_fu_46506_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_376_fu_46506_p0.read()) * sc_biguint<5>(mul_ln78_376_fu_46506_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46687_p0() {
    mul_ln78_377_fu_46687_p0 =  (sc_lv<5>) (zext_ln78_873_fu_46683_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46687_p1() {
    mul_ln78_377_fu_46687_p1 =  (sc_lv<5>) (zext_ln78_873_fu_46683_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46687_p2() {
    mul_ln78_377_fu_46687_p2 = (!mul_ln78_377_fu_46687_p0.read().is_01() || !mul_ln78_377_fu_46687_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_377_fu_46687_p0.read()) * sc_biguint<5>(mul_ln78_377_fu_46687_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46778_p0() {
    mul_ln78_378_fu_46778_p0 =  (sc_lv<5>) (zext_ln78_880_fu_46774_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46778_p1() {
    mul_ln78_378_fu_46778_p1 =  (sc_lv<5>) (zext_ln78_880_fu_46774_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46778_p2() {
    mul_ln78_378_fu_46778_p2 = (!mul_ln78_378_fu_46778_p0.read().is_01() || !mul_ln78_378_fu_46778_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_378_fu_46778_p0.read()) * sc_biguint<5>(mul_ln78_378_fu_46778_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46959_p0() {
    mul_ln78_379_fu_46959_p0 =  (sc_lv<5>) (zext_ln78_887_fu_46955_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46959_p1() {
    mul_ln78_379_fu_46959_p1 =  (sc_lv<5>) (zext_ln78_887_fu_46955_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46959_p2() {
    mul_ln78_379_fu_46959_p2 = (!mul_ln78_379_fu_46959_p0.read().is_01() || !mul_ln78_379_fu_46959_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_379_fu_46959_p0.read()) * sc_biguint<5>(mul_ln78_379_fu_46959_p1.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34800_p0() {
    mul_ln78_37_fu_34800_p0 =  (sc_lv<5>) (mul_ln78_37_fu_34800_p00.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34800_p00() {
    mul_ln78_37_fu_34800_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34800_p1() {
    mul_ln78_37_fu_34800_p1 =  (sc_lv<5>) (mul_ln78_37_fu_34800_p10.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34800_p10() {
    mul_ln78_37_fu_34800_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34800_p2() {
    mul_ln78_37_fu_34800_p2 = (!mul_ln78_37_fu_34800_p0.read().is_01() || !mul_ln78_37_fu_34800_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_37_fu_34800_p0.read()) * sc_biguint<5>(mul_ln78_37_fu_34800_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47050_p0() {
    mul_ln78_380_fu_47050_p0 =  (sc_lv<5>) (zext_ln78_894_fu_47046_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47050_p1() {
    mul_ln78_380_fu_47050_p1 =  (sc_lv<5>) (zext_ln78_894_fu_47046_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47050_p2() {
    mul_ln78_380_fu_47050_p2 = (!mul_ln78_380_fu_47050_p0.read().is_01() || !mul_ln78_380_fu_47050_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_380_fu_47050_p0.read()) * sc_biguint<5>(mul_ln78_380_fu_47050_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47231_p0() {
    mul_ln78_381_fu_47231_p0 =  (sc_lv<5>) (zext_ln78_901_fu_47227_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47231_p1() {
    mul_ln78_381_fu_47231_p1 =  (sc_lv<5>) (zext_ln78_901_fu_47227_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47231_p2() {
    mul_ln78_381_fu_47231_p2 = (!mul_ln78_381_fu_47231_p0.read().is_01() || !mul_ln78_381_fu_47231_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_381_fu_47231_p0.read()) * sc_biguint<5>(mul_ln78_381_fu_47231_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47322_p0() {
    mul_ln78_382_fu_47322_p0 =  (sc_lv<5>) (zext_ln78_908_fu_47318_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47322_p1() {
    mul_ln78_382_fu_47322_p1 =  (sc_lv<5>) (zext_ln78_908_fu_47318_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47322_p2() {
    mul_ln78_382_fu_47322_p2 = (!mul_ln78_382_fu_47322_p0.read().is_01() || !mul_ln78_382_fu_47322_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_382_fu_47322_p0.read()) * sc_biguint<5>(mul_ln78_382_fu_47322_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47503_p0() {
    mul_ln78_383_fu_47503_p0 =  (sc_lv<5>) (zext_ln78_915_fu_47499_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47503_p1() {
    mul_ln78_383_fu_47503_p1 =  (sc_lv<5>) (zext_ln78_915_fu_47499_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47503_p2() {
    mul_ln78_383_fu_47503_p2 = (!mul_ln78_383_fu_47503_p0.read().is_01() || !mul_ln78_383_fu_47503_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_383_fu_47503_p0.read()) * sc_biguint<5>(mul_ln78_383_fu_47503_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47594_p0() {
    mul_ln78_384_fu_47594_p0 =  (sc_lv<5>) (zext_ln78_922_fu_47590_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47594_p1() {
    mul_ln78_384_fu_47594_p1 =  (sc_lv<5>) (zext_ln78_922_fu_47590_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47594_p2() {
    mul_ln78_384_fu_47594_p2 = (!mul_ln78_384_fu_47594_p0.read().is_01() || !mul_ln78_384_fu_47594_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_384_fu_47594_p0.read()) * sc_biguint<5>(mul_ln78_384_fu_47594_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47775_p0() {
    mul_ln78_385_fu_47775_p0 =  (sc_lv<5>) (zext_ln78_929_fu_47771_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47775_p1() {
    mul_ln78_385_fu_47775_p1 =  (sc_lv<5>) (zext_ln78_929_fu_47771_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47775_p2() {
    mul_ln78_385_fu_47775_p2 = (!mul_ln78_385_fu_47775_p0.read().is_01() || !mul_ln78_385_fu_47775_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_385_fu_47775_p0.read()) * sc_biguint<5>(mul_ln78_385_fu_47775_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47866_p0() {
    mul_ln78_386_fu_47866_p0 =  (sc_lv<5>) (zext_ln78_936_fu_47862_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47866_p1() {
    mul_ln78_386_fu_47866_p1 =  (sc_lv<5>) (zext_ln78_936_fu_47862_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47866_p2() {
    mul_ln78_386_fu_47866_p2 = (!mul_ln78_386_fu_47866_p0.read().is_01() || !mul_ln78_386_fu_47866_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_386_fu_47866_p0.read()) * sc_biguint<5>(mul_ln78_386_fu_47866_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48047_p0() {
    mul_ln78_387_fu_48047_p0 =  (sc_lv<5>) (zext_ln78_943_fu_48043_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48047_p1() {
    mul_ln78_387_fu_48047_p1 =  (sc_lv<5>) (zext_ln78_943_fu_48043_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48047_p2() {
    mul_ln78_387_fu_48047_p2 = (!mul_ln78_387_fu_48047_p0.read().is_01() || !mul_ln78_387_fu_48047_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_387_fu_48047_p0.read()) * sc_biguint<5>(mul_ln78_387_fu_48047_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48138_p0() {
    mul_ln78_388_fu_48138_p0 =  (sc_lv<5>) (zext_ln78_950_fu_48134_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48138_p1() {
    mul_ln78_388_fu_48138_p1 =  (sc_lv<5>) (zext_ln78_950_fu_48134_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48138_p2() {
    mul_ln78_388_fu_48138_p2 = (!mul_ln78_388_fu_48138_p0.read().is_01() || !mul_ln78_388_fu_48138_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_388_fu_48138_p0.read()) * sc_biguint<5>(mul_ln78_388_fu_48138_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48319_p0() {
    mul_ln78_389_fu_48319_p0 =  (sc_lv<5>) (zext_ln78_957_fu_48315_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48319_p1() {
    mul_ln78_389_fu_48319_p1 =  (sc_lv<5>) (zext_ln78_957_fu_48315_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48319_p2() {
    mul_ln78_389_fu_48319_p2 = (!mul_ln78_389_fu_48319_p0.read().is_01() || !mul_ln78_389_fu_48319_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_389_fu_48319_p0.read()) * sc_biguint<5>(mul_ln78_389_fu_48319_p1.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34981_p0() {
    mul_ln78_38_fu_34981_p0 =  (sc_lv<5>) (mul_ln78_38_fu_34981_p00.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34981_p00() {
    mul_ln78_38_fu_34981_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34981_p1() {
    mul_ln78_38_fu_34981_p1 =  (sc_lv<5>) (mul_ln78_38_fu_34981_p10.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34981_p10() {
    mul_ln78_38_fu_34981_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34981_p2() {
    mul_ln78_38_fu_34981_p2 = (!mul_ln78_38_fu_34981_p0.read().is_01() || !mul_ln78_38_fu_34981_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_38_fu_34981_p0.read()) * sc_biguint<5>(mul_ln78_38_fu_34981_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48410_p0() {
    mul_ln78_390_fu_48410_p0 =  (sc_lv<5>) (zext_ln78_964_fu_48406_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48410_p1() {
    mul_ln78_390_fu_48410_p1 =  (sc_lv<5>) (zext_ln78_964_fu_48406_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48410_p2() {
    mul_ln78_390_fu_48410_p2 = (!mul_ln78_390_fu_48410_p0.read().is_01() || !mul_ln78_390_fu_48410_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_390_fu_48410_p0.read()) * sc_biguint<5>(mul_ln78_390_fu_48410_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48591_p0() {
    mul_ln78_391_fu_48591_p0 =  (sc_lv<5>) (zext_ln78_971_fu_48587_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48591_p1() {
    mul_ln78_391_fu_48591_p1 =  (sc_lv<5>) (zext_ln78_971_fu_48587_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48591_p2() {
    mul_ln78_391_fu_48591_p2 = (!mul_ln78_391_fu_48591_p0.read().is_01() || !mul_ln78_391_fu_48591_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_391_fu_48591_p0.read()) * sc_biguint<5>(mul_ln78_391_fu_48591_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48682_p0() {
    mul_ln78_392_fu_48682_p0 =  (sc_lv<5>) (zext_ln78_978_fu_48678_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48682_p1() {
    mul_ln78_392_fu_48682_p1 =  (sc_lv<5>) (zext_ln78_978_fu_48678_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48682_p2() {
    mul_ln78_392_fu_48682_p2 = (!mul_ln78_392_fu_48682_p0.read().is_01() || !mul_ln78_392_fu_48682_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_392_fu_48682_p0.read()) * sc_biguint<5>(mul_ln78_392_fu_48682_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48863_p0() {
    mul_ln78_393_fu_48863_p0 =  (sc_lv<5>) (zext_ln78_985_fu_48859_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48863_p1() {
    mul_ln78_393_fu_48863_p1 =  (sc_lv<5>) (zext_ln78_985_fu_48859_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48863_p2() {
    mul_ln78_393_fu_48863_p2 = (!mul_ln78_393_fu_48863_p0.read().is_01() || !mul_ln78_393_fu_48863_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_393_fu_48863_p0.read()) * sc_biguint<5>(mul_ln78_393_fu_48863_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48954_p0() {
    mul_ln78_394_fu_48954_p0 =  (sc_lv<5>) (zext_ln78_992_fu_48950_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48954_p1() {
    mul_ln78_394_fu_48954_p1 =  (sc_lv<5>) (zext_ln78_992_fu_48950_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48954_p2() {
    mul_ln78_394_fu_48954_p2 = (!mul_ln78_394_fu_48954_p0.read().is_01() || !mul_ln78_394_fu_48954_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_394_fu_48954_p0.read()) * sc_biguint<5>(mul_ln78_394_fu_48954_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49135_p0() {
    mul_ln78_395_fu_49135_p0 =  (sc_lv<5>) (zext_ln78_999_fu_49131_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49135_p1() {
    mul_ln78_395_fu_49135_p1 =  (sc_lv<5>) (zext_ln78_999_fu_49131_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49135_p2() {
    mul_ln78_395_fu_49135_p2 = (!mul_ln78_395_fu_49135_p0.read().is_01() || !mul_ln78_395_fu_49135_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_395_fu_49135_p0.read()) * sc_biguint<5>(mul_ln78_395_fu_49135_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49226_p0() {
    mul_ln78_396_fu_49226_p0 =  (sc_lv<5>) (zext_ln78_1006_fu_49222_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49226_p1() {
    mul_ln78_396_fu_49226_p1 =  (sc_lv<5>) (zext_ln78_1006_fu_49222_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49226_p2() {
    mul_ln78_396_fu_49226_p2 = (!mul_ln78_396_fu_49226_p0.read().is_01() || !mul_ln78_396_fu_49226_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_396_fu_49226_p0.read()) * sc_biguint<5>(mul_ln78_396_fu_49226_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49407_p0() {
    mul_ln78_397_fu_49407_p0 =  (sc_lv<5>) (zext_ln78_1013_fu_49403_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49407_p1() {
    mul_ln78_397_fu_49407_p1 =  (sc_lv<5>) (zext_ln78_1013_fu_49403_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49407_p2() {
    mul_ln78_397_fu_49407_p2 = (!mul_ln78_397_fu_49407_p0.read().is_01() || !mul_ln78_397_fu_49407_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_397_fu_49407_p0.read()) * sc_biguint<5>(mul_ln78_397_fu_49407_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49498_p0() {
    mul_ln78_398_fu_49498_p0 =  (sc_lv<5>) (zext_ln78_1020_fu_49494_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49498_p1() {
    mul_ln78_398_fu_49498_p1 =  (sc_lv<5>) (zext_ln78_1020_fu_49494_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49498_p2() {
    mul_ln78_398_fu_49498_p2 = (!mul_ln78_398_fu_49498_p0.read().is_01() || !mul_ln78_398_fu_49498_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_398_fu_49498_p0.read()) * sc_biguint<5>(mul_ln78_398_fu_49498_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49679_p0() {
    mul_ln78_399_fu_49679_p0 =  (sc_lv<5>) (zext_ln78_1027_fu_49675_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49679_p1() {
    mul_ln78_399_fu_49679_p1 =  (sc_lv<5>) (zext_ln78_1027_fu_49675_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49679_p2() {
    mul_ln78_399_fu_49679_p2 = (!mul_ln78_399_fu_49679_p0.read().is_01() || !mul_ln78_399_fu_49679_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_399_fu_49679_p0.read()) * sc_biguint<5>(mul_ln78_399_fu_49679_p1.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35072_p0() {
    mul_ln78_39_fu_35072_p0 =  (sc_lv<5>) (mul_ln78_39_fu_35072_p00.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35072_p00() {
    mul_ln78_39_fu_35072_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35072_p1() {
    mul_ln78_39_fu_35072_p1 =  (sc_lv<5>) (mul_ln78_39_fu_35072_p10.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35072_p10() {
    mul_ln78_39_fu_35072_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35072_p2() {
    mul_ln78_39_fu_35072_p2 = (!mul_ln78_39_fu_35072_p0.read().is_01() || !mul_ln78_39_fu_35072_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_39_fu_35072_p0.read()) * sc_biguint<5>(mul_ln78_39_fu_35072_p1.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30152_p0() {
    mul_ln78_3_fu_30152_p0 =  (sc_lv<5>) (mul_ln78_3_fu_30152_p00.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30152_p00() {
    mul_ln78_3_fu_30152_p00 = esl_zext<10,5>(grp_apply_kernel_single_s_fu_19189_ap_return.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30152_p1() {
    mul_ln78_3_fu_30152_p1 =  (sc_lv<5>) (mul_ln78_3_fu_30152_p10.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30152_p10() {
    mul_ln78_3_fu_30152_p10 = esl_zext<10,5>(grp_apply_kernel_single_s_fu_19202_ap_return.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30152_p2() {
    mul_ln78_3_fu_30152_p2 = (!mul_ln78_3_fu_30152_p0.read().is_01() || !mul_ln78_3_fu_30152_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_3_fu_30152_p0.read()) * sc_biguint<5>(mul_ln78_3_fu_30152_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49770_p0() {
    mul_ln78_400_fu_49770_p0 =  (sc_lv<5>) (zext_ln78_1034_fu_49766_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49770_p1() {
    mul_ln78_400_fu_49770_p1 =  (sc_lv<5>) (zext_ln78_1034_fu_49766_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49770_p2() {
    mul_ln78_400_fu_49770_p2 = (!mul_ln78_400_fu_49770_p0.read().is_01() || !mul_ln78_400_fu_49770_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_400_fu_49770_p0.read()) * sc_biguint<5>(mul_ln78_400_fu_49770_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49951_p0() {
    mul_ln78_401_fu_49951_p0 =  (sc_lv<5>) (zext_ln78_1041_fu_49947_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49951_p1() {
    mul_ln78_401_fu_49951_p1 =  (sc_lv<5>) (zext_ln78_1041_fu_49947_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49951_p2() {
    mul_ln78_401_fu_49951_p2 = (!mul_ln78_401_fu_49951_p0.read().is_01() || !mul_ln78_401_fu_49951_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_401_fu_49951_p0.read()) * sc_biguint<5>(mul_ln78_401_fu_49951_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50042_p0() {
    mul_ln78_402_fu_50042_p0 =  (sc_lv<5>) (zext_ln78_1048_fu_50038_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50042_p1() {
    mul_ln78_402_fu_50042_p1 =  (sc_lv<5>) (zext_ln78_1048_fu_50038_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50042_p2() {
    mul_ln78_402_fu_50042_p2 = (!mul_ln78_402_fu_50042_p0.read().is_01() || !mul_ln78_402_fu_50042_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_402_fu_50042_p0.read()) * sc_biguint<5>(mul_ln78_402_fu_50042_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50223_p0() {
    mul_ln78_403_fu_50223_p0 =  (sc_lv<5>) (zext_ln78_1055_fu_50219_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50223_p1() {
    mul_ln78_403_fu_50223_p1 =  (sc_lv<5>) (zext_ln78_1055_fu_50219_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50223_p2() {
    mul_ln78_403_fu_50223_p2 = (!mul_ln78_403_fu_50223_p0.read().is_01() || !mul_ln78_403_fu_50223_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_403_fu_50223_p0.read()) * sc_biguint<5>(mul_ln78_403_fu_50223_p1.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50304_p0() {
    mul_ln78_404_fu_50304_p0 =  (sc_lv<5>) (mul_ln78_404_fu_50304_p00.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50304_p00() {
    mul_ln78_404_fu_50304_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50304_p1() {
    mul_ln78_404_fu_50304_p1 =  (sc_lv<5>) (mul_ln78_404_fu_50304_p10.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50304_p10() {
    mul_ln78_404_fu_50304_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50304_p2() {
    mul_ln78_404_fu_50304_p2 = (!mul_ln78_404_fu_50304_p0.read().is_01() || !mul_ln78_404_fu_50304_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_404_fu_50304_p0.read()) * sc_biguint<5>(mul_ln78_404_fu_50304_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50314_p0() {
    mul_ln78_405_fu_50314_p0 =  (sc_lv<5>) (zext_ln78_1062_fu_50310_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50314_p1() {
    mul_ln78_405_fu_50314_p1 =  (sc_lv<5>) (zext_ln78_1062_fu_50310_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50314_p2() {
    mul_ln78_405_fu_50314_p2 = (!mul_ln78_405_fu_50314_p0.read().is_01() || !mul_ln78_405_fu_50314_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_405_fu_50314_p0.read()) * sc_biguint<5>(mul_ln78_405_fu_50314_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50495_p0() {
    mul_ln78_406_fu_50495_p0 =  (sc_lv<5>) (zext_ln78_1069_fu_50491_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50495_p1() {
    mul_ln78_406_fu_50495_p1 =  (sc_lv<5>) (zext_ln78_1069_fu_50491_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50495_p2() {
    mul_ln78_406_fu_50495_p2 = (!mul_ln78_406_fu_50495_p0.read().is_01() || !mul_ln78_406_fu_50495_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_406_fu_50495_p0.read()) * sc_biguint<5>(mul_ln78_406_fu_50495_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50586_p0() {
    mul_ln78_407_fu_50586_p0 =  (sc_lv<5>) (zext_ln78_1076_fu_50582_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50586_p1() {
    mul_ln78_407_fu_50586_p1 =  (sc_lv<5>) (zext_ln78_1076_fu_50582_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50586_p2() {
    mul_ln78_407_fu_50586_p2 = (!mul_ln78_407_fu_50586_p0.read().is_01() || !mul_ln78_407_fu_50586_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_407_fu_50586_p0.read()) * sc_biguint<5>(mul_ln78_407_fu_50586_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50767_p0() {
    mul_ln78_408_fu_50767_p0 =  (sc_lv<5>) (zext_ln78_1083_fu_50763_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50767_p1() {
    mul_ln78_408_fu_50767_p1 =  (sc_lv<5>) (zext_ln78_1083_fu_50763_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50767_p2() {
    mul_ln78_408_fu_50767_p2 = (!mul_ln78_408_fu_50767_p0.read().is_01() || !mul_ln78_408_fu_50767_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_408_fu_50767_p0.read()) * sc_biguint<5>(mul_ln78_408_fu_50767_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50858_p0() {
    mul_ln78_409_fu_50858_p0 =  (sc_lv<5>) (zext_ln78_1090_fu_50854_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50858_p1() {
    mul_ln78_409_fu_50858_p1 =  (sc_lv<5>) (zext_ln78_1090_fu_50854_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50858_p2() {
    mul_ln78_409_fu_50858_p2 = (!mul_ln78_409_fu_50858_p0.read().is_01() || !mul_ln78_409_fu_50858_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_409_fu_50858_p0.read()) * sc_biguint<5>(mul_ln78_409_fu_50858_p1.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35253_p0() {
    mul_ln78_40_fu_35253_p0 =  (sc_lv<5>) (mul_ln78_40_fu_35253_p00.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35253_p00() {
    mul_ln78_40_fu_35253_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35253_p1() {
    mul_ln78_40_fu_35253_p1 =  (sc_lv<5>) (mul_ln78_40_fu_35253_p10.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35253_p10() {
    mul_ln78_40_fu_35253_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35253_p2() {
    mul_ln78_40_fu_35253_p2 = (!mul_ln78_40_fu_35253_p0.read().is_01() || !mul_ln78_40_fu_35253_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_40_fu_35253_p0.read()) * sc_biguint<5>(mul_ln78_40_fu_35253_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51039_p0() {
    mul_ln78_410_fu_51039_p0 =  (sc_lv<5>) (zext_ln78_1097_fu_51035_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51039_p1() {
    mul_ln78_410_fu_51039_p1 =  (sc_lv<5>) (zext_ln78_1097_fu_51035_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51039_p2() {
    mul_ln78_410_fu_51039_p2 = (!mul_ln78_410_fu_51039_p0.read().is_01() || !mul_ln78_410_fu_51039_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_410_fu_51039_p0.read()) * sc_biguint<5>(mul_ln78_410_fu_51039_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51130_p0() {
    mul_ln78_411_fu_51130_p0 =  (sc_lv<5>) (zext_ln78_1104_fu_51126_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51130_p1() {
    mul_ln78_411_fu_51130_p1 =  (sc_lv<5>) (zext_ln78_1104_fu_51126_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51130_p2() {
    mul_ln78_411_fu_51130_p2 = (!mul_ln78_411_fu_51130_p0.read().is_01() || !mul_ln78_411_fu_51130_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_411_fu_51130_p0.read()) * sc_biguint<5>(mul_ln78_411_fu_51130_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51325_p0() {
    mul_ln78_412_fu_51325_p0 =  (sc_lv<5>) (zext_ln78_1111_fu_51321_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51325_p1() {
    mul_ln78_412_fu_51325_p1 =  (sc_lv<5>) (zext_ln78_1111_fu_51321_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51325_p2() {
    mul_ln78_412_fu_51325_p2 = (!mul_ln78_412_fu_51325_p0.read().is_01() || !mul_ln78_412_fu_51325_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_412_fu_51325_p0.read()) * sc_biguint<5>(mul_ln78_412_fu_51325_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51416_p0() {
    mul_ln78_413_fu_51416_p0 =  (sc_lv<5>) (zext_ln78_1118_fu_51412_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51416_p1() {
    mul_ln78_413_fu_51416_p1 =  (sc_lv<5>) (zext_ln78_1118_fu_51412_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51416_p2() {
    mul_ln78_413_fu_51416_p2 = (!mul_ln78_413_fu_51416_p0.read().is_01() || !mul_ln78_413_fu_51416_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_413_fu_51416_p0.read()) * sc_biguint<5>(mul_ln78_413_fu_51416_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51597_p0() {
    mul_ln78_414_fu_51597_p0 =  (sc_lv<5>) (zext_ln78_1125_fu_51593_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51597_p1() {
    mul_ln78_414_fu_51597_p1 =  (sc_lv<5>) (zext_ln78_1125_fu_51593_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51597_p2() {
    mul_ln78_414_fu_51597_p2 = (!mul_ln78_414_fu_51597_p0.read().is_01() || !mul_ln78_414_fu_51597_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_414_fu_51597_p0.read()) * sc_biguint<5>(mul_ln78_414_fu_51597_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51674_p0() {
    mul_ln78_415_fu_51674_p0 =  (sc_lv<5>) (zext_ln78_1132_fu_51670_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51674_p1() {
    mul_ln78_415_fu_51674_p1 =  (sc_lv<5>) (zext_ln78_1132_fu_51670_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51674_p2() {
    mul_ln78_415_fu_51674_p2 = (!mul_ln78_415_fu_51674_p0.read().is_01() || !mul_ln78_415_fu_51674_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_415_fu_51674_p0.read()) * sc_biguint<5>(mul_ln78_415_fu_51674_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51855_p0() {
    mul_ln78_416_fu_51855_p0 =  (sc_lv<5>) (zext_ln78_1139_fu_51851_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51855_p1() {
    mul_ln78_416_fu_51855_p1 =  (sc_lv<5>) (zext_ln78_1139_fu_51851_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51855_p2() {
    mul_ln78_416_fu_51855_p2 = (!mul_ln78_416_fu_51855_p0.read().is_01() || !mul_ln78_416_fu_51855_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_416_fu_51855_p0.read()) * sc_biguint<5>(mul_ln78_416_fu_51855_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51946_p0() {
    mul_ln78_417_fu_51946_p0 =  (sc_lv<5>) (zext_ln78_1146_fu_51942_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51946_p1() {
    mul_ln78_417_fu_51946_p1 =  (sc_lv<5>) (zext_ln78_1146_fu_51942_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51946_p2() {
    mul_ln78_417_fu_51946_p2 = (!mul_ln78_417_fu_51946_p0.read().is_01() || !mul_ln78_417_fu_51946_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_417_fu_51946_p0.read()) * sc_biguint<5>(mul_ln78_417_fu_51946_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52127_p0() {
    mul_ln78_418_fu_52127_p0 =  (sc_lv<5>) (zext_ln78_1153_fu_52123_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52127_p1() {
    mul_ln78_418_fu_52127_p1 =  (sc_lv<5>) (zext_ln78_1153_fu_52123_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52127_p2() {
    mul_ln78_418_fu_52127_p2 = (!mul_ln78_418_fu_52127_p0.read().is_01() || !mul_ln78_418_fu_52127_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_418_fu_52127_p0.read()) * sc_biguint<5>(mul_ln78_418_fu_52127_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52218_p0() {
    mul_ln78_419_fu_52218_p0 =  (sc_lv<5>) (zext_ln78_1160_fu_52214_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52218_p1() {
    mul_ln78_419_fu_52218_p1 =  (sc_lv<5>) (zext_ln78_1160_fu_52214_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52218_p2() {
    mul_ln78_419_fu_52218_p2 = (!mul_ln78_419_fu_52218_p0.read().is_01() || !mul_ln78_419_fu_52218_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_419_fu_52218_p0.read()) * sc_biguint<5>(mul_ln78_419_fu_52218_p1.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35344_p0() {
    mul_ln78_41_fu_35344_p0 =  (sc_lv<5>) (mul_ln78_41_fu_35344_p00.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35344_p00() {
    mul_ln78_41_fu_35344_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35344_p1() {
    mul_ln78_41_fu_35344_p1 =  (sc_lv<5>) (mul_ln78_41_fu_35344_p10.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35344_p10() {
    mul_ln78_41_fu_35344_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35344_p2() {
    mul_ln78_41_fu_35344_p2 = (!mul_ln78_41_fu_35344_p0.read().is_01() || !mul_ln78_41_fu_35344_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_41_fu_35344_p0.read()) * sc_biguint<5>(mul_ln78_41_fu_35344_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52399_p0() {
    mul_ln78_420_fu_52399_p0 =  (sc_lv<5>) (zext_ln78_1167_fu_52395_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52399_p1() {
    mul_ln78_420_fu_52399_p1 =  (sc_lv<5>) (zext_ln78_1167_fu_52395_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52399_p2() {
    mul_ln78_420_fu_52399_p2 = (!mul_ln78_420_fu_52399_p0.read().is_01() || !mul_ln78_420_fu_52399_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_420_fu_52399_p0.read()) * sc_biguint<5>(mul_ln78_420_fu_52399_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52490_p0() {
    mul_ln78_421_fu_52490_p0 =  (sc_lv<5>) (zext_ln78_1174_fu_52486_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52490_p1() {
    mul_ln78_421_fu_52490_p1 =  (sc_lv<5>) (zext_ln78_1174_fu_52486_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52490_p2() {
    mul_ln78_421_fu_52490_p2 = (!mul_ln78_421_fu_52490_p0.read().is_01() || !mul_ln78_421_fu_52490_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_421_fu_52490_p0.read()) * sc_biguint<5>(mul_ln78_421_fu_52490_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52671_p0() {
    mul_ln78_422_fu_52671_p0 =  (sc_lv<5>) (zext_ln78_1181_fu_52667_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52671_p1() {
    mul_ln78_422_fu_52671_p1 =  (sc_lv<5>) (zext_ln78_1181_fu_52667_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52671_p2() {
    mul_ln78_422_fu_52671_p2 = (!mul_ln78_422_fu_52671_p0.read().is_01() || !mul_ln78_422_fu_52671_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_422_fu_52671_p0.read()) * sc_biguint<5>(mul_ln78_422_fu_52671_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52762_p0() {
    mul_ln78_423_fu_52762_p0 =  (sc_lv<5>) (zext_ln78_1188_fu_52758_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52762_p1() {
    mul_ln78_423_fu_52762_p1 =  (sc_lv<5>) (zext_ln78_1188_fu_52758_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52762_p2() {
    mul_ln78_423_fu_52762_p2 = (!mul_ln78_423_fu_52762_p0.read().is_01() || !mul_ln78_423_fu_52762_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_423_fu_52762_p0.read()) * sc_biguint<5>(mul_ln78_423_fu_52762_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52943_p0() {
    mul_ln78_424_fu_52943_p0 =  (sc_lv<5>) (zext_ln78_1195_fu_52939_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52943_p1() {
    mul_ln78_424_fu_52943_p1 =  (sc_lv<5>) (zext_ln78_1195_fu_52939_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52943_p2() {
    mul_ln78_424_fu_52943_p2 = (!mul_ln78_424_fu_52943_p0.read().is_01() || !mul_ln78_424_fu_52943_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_424_fu_52943_p0.read()) * sc_biguint<5>(mul_ln78_424_fu_52943_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53034_p0() {
    mul_ln78_425_fu_53034_p0 =  (sc_lv<5>) (zext_ln78_1202_fu_53030_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53034_p1() {
    mul_ln78_425_fu_53034_p1 =  (sc_lv<5>) (zext_ln78_1202_fu_53030_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53034_p2() {
    mul_ln78_425_fu_53034_p2 = (!mul_ln78_425_fu_53034_p0.read().is_01() || !mul_ln78_425_fu_53034_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_425_fu_53034_p0.read()) * sc_biguint<5>(mul_ln78_425_fu_53034_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53215_p0() {
    mul_ln78_426_fu_53215_p0 =  (sc_lv<5>) (zext_ln78_1209_fu_53211_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53215_p1() {
    mul_ln78_426_fu_53215_p1 =  (sc_lv<5>) (zext_ln78_1209_fu_53211_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53215_p2() {
    mul_ln78_426_fu_53215_p2 = (!mul_ln78_426_fu_53215_p0.read().is_01() || !mul_ln78_426_fu_53215_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_426_fu_53215_p0.read()) * sc_biguint<5>(mul_ln78_426_fu_53215_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53306_p0() {
    mul_ln78_427_fu_53306_p0 =  (sc_lv<5>) (zext_ln78_1216_fu_53302_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53306_p1() {
    mul_ln78_427_fu_53306_p1 =  (sc_lv<5>) (zext_ln78_1216_fu_53302_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53306_p2() {
    mul_ln78_427_fu_53306_p2 = (!mul_ln78_427_fu_53306_p0.read().is_01() || !mul_ln78_427_fu_53306_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_427_fu_53306_p0.read()) * sc_biguint<5>(mul_ln78_427_fu_53306_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53487_p0() {
    mul_ln78_428_fu_53487_p0 =  (sc_lv<5>) (zext_ln78_1223_fu_53483_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53487_p1() {
    mul_ln78_428_fu_53487_p1 =  (sc_lv<5>) (zext_ln78_1223_fu_53483_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53487_p2() {
    mul_ln78_428_fu_53487_p2 = (!mul_ln78_428_fu_53487_p0.read().is_01() || !mul_ln78_428_fu_53487_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_428_fu_53487_p0.read()) * sc_biguint<5>(mul_ln78_428_fu_53487_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53578_p0() {
    mul_ln78_429_fu_53578_p0 =  (sc_lv<5>) (zext_ln78_1230_fu_53574_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53578_p1() {
    mul_ln78_429_fu_53578_p1 =  (sc_lv<5>) (zext_ln78_1230_fu_53574_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53578_p2() {
    mul_ln78_429_fu_53578_p2 = (!mul_ln78_429_fu_53578_p0.read().is_01() || !mul_ln78_429_fu_53578_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_429_fu_53578_p0.read()) * sc_biguint<5>(mul_ln78_429_fu_53578_p1.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35525_p0() {
    mul_ln78_42_fu_35525_p0 =  (sc_lv<5>) (mul_ln78_42_fu_35525_p00.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35525_p00() {
    mul_ln78_42_fu_35525_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35525_p1() {
    mul_ln78_42_fu_35525_p1 =  (sc_lv<5>) (mul_ln78_42_fu_35525_p10.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35525_p10() {
    mul_ln78_42_fu_35525_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35525_p2() {
    mul_ln78_42_fu_35525_p2 = (!mul_ln78_42_fu_35525_p0.read().is_01() || !mul_ln78_42_fu_35525_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_42_fu_35525_p0.read()) * sc_biguint<5>(mul_ln78_42_fu_35525_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53759_p0() {
    mul_ln78_430_fu_53759_p0 =  (sc_lv<5>) (zext_ln78_1237_fu_53755_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53759_p1() {
    mul_ln78_430_fu_53759_p1 =  (sc_lv<5>) (zext_ln78_1237_fu_53755_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53759_p2() {
    mul_ln78_430_fu_53759_p2 = (!mul_ln78_430_fu_53759_p0.read().is_01() || !mul_ln78_430_fu_53759_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_430_fu_53759_p0.read()) * sc_biguint<5>(mul_ln78_430_fu_53759_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53850_p0() {
    mul_ln78_431_fu_53850_p0 =  (sc_lv<5>) (zext_ln78_1244_fu_53846_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53850_p1() {
    mul_ln78_431_fu_53850_p1 =  (sc_lv<5>) (zext_ln78_1244_fu_53846_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53850_p2() {
    mul_ln78_431_fu_53850_p2 = (!mul_ln78_431_fu_53850_p0.read().is_01() || !mul_ln78_431_fu_53850_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_431_fu_53850_p0.read()) * sc_biguint<5>(mul_ln78_431_fu_53850_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_54031_p0() {
    mul_ln78_432_fu_54031_p0 =  (sc_lv<5>) (zext_ln78_1251_fu_54027_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_54031_p1() {
    mul_ln78_432_fu_54031_p1 =  (sc_lv<5>) (zext_ln78_1251_fu_54027_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_54031_p2() {
    mul_ln78_432_fu_54031_p2 = (!mul_ln78_432_fu_54031_p0.read().is_01() || !mul_ln78_432_fu_54031_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_432_fu_54031_p0.read()) * sc_biguint<5>(mul_ln78_432_fu_54031_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54122_p0() {
    mul_ln78_433_fu_54122_p0 =  (sc_lv<5>) (zext_ln78_1258_fu_54118_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54122_p1() {
    mul_ln78_433_fu_54122_p1 =  (sc_lv<5>) (zext_ln78_1258_fu_54118_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54122_p2() {
    mul_ln78_433_fu_54122_p2 = (!mul_ln78_433_fu_54122_p0.read().is_01() || !mul_ln78_433_fu_54122_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_433_fu_54122_p0.read()) * sc_biguint<5>(mul_ln78_433_fu_54122_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54303_p0() {
    mul_ln78_434_fu_54303_p0 =  (sc_lv<5>) (zext_ln78_1265_fu_54299_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54303_p1() {
    mul_ln78_434_fu_54303_p1 =  (sc_lv<5>) (zext_ln78_1265_fu_54299_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54303_p2() {
    mul_ln78_434_fu_54303_p2 = (!mul_ln78_434_fu_54303_p0.read().is_01() || !mul_ln78_434_fu_54303_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_434_fu_54303_p0.read()) * sc_biguint<5>(mul_ln78_434_fu_54303_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54394_p0() {
    mul_ln78_435_fu_54394_p0 =  (sc_lv<5>) (zext_ln78_1272_fu_54390_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54394_p1() {
    mul_ln78_435_fu_54394_p1 =  (sc_lv<5>) (zext_ln78_1272_fu_54390_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54394_p2() {
    mul_ln78_435_fu_54394_p2 = (!mul_ln78_435_fu_54394_p0.read().is_01() || !mul_ln78_435_fu_54394_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_435_fu_54394_p0.read()) * sc_biguint<5>(mul_ln78_435_fu_54394_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54575_p0() {
    mul_ln78_436_fu_54575_p0 =  (sc_lv<5>) (zext_ln78_1279_fu_54571_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54575_p1() {
    mul_ln78_436_fu_54575_p1 =  (sc_lv<5>) (zext_ln78_1279_fu_54571_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54575_p2() {
    mul_ln78_436_fu_54575_p2 = (!mul_ln78_436_fu_54575_p0.read().is_01() || !mul_ln78_436_fu_54575_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_436_fu_54575_p0.read()) * sc_biguint<5>(mul_ln78_436_fu_54575_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54666_p0() {
    mul_ln78_437_fu_54666_p0 =  (sc_lv<5>) (zext_ln78_1286_fu_54662_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54666_p1() {
    mul_ln78_437_fu_54666_p1 =  (sc_lv<5>) (zext_ln78_1286_fu_54662_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54666_p2() {
    mul_ln78_437_fu_54666_p2 = (!mul_ln78_437_fu_54666_p0.read().is_01() || !mul_ln78_437_fu_54666_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_437_fu_54666_p0.read()) * sc_biguint<5>(mul_ln78_437_fu_54666_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54847_p0() {
    mul_ln78_438_fu_54847_p0 =  (sc_lv<5>) (zext_ln78_1293_fu_54843_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54847_p1() {
    mul_ln78_438_fu_54847_p1 =  (sc_lv<5>) (zext_ln78_1293_fu_54843_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54847_p2() {
    mul_ln78_438_fu_54847_p2 = (!mul_ln78_438_fu_54847_p0.read().is_01() || !mul_ln78_438_fu_54847_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_438_fu_54847_p0.read()) * sc_biguint<5>(mul_ln78_438_fu_54847_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54938_p0() {
    mul_ln78_439_fu_54938_p0 =  (sc_lv<5>) (zext_ln78_1300_fu_54934_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54938_p1() {
    mul_ln78_439_fu_54938_p1 =  (sc_lv<5>) (zext_ln78_1300_fu_54934_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54938_p2() {
    mul_ln78_439_fu_54938_p2 = (!mul_ln78_439_fu_54938_p0.read().is_01() || !mul_ln78_439_fu_54938_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_439_fu_54938_p0.read()) * sc_biguint<5>(mul_ln78_439_fu_54938_p1.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35616_p0() {
    mul_ln78_43_fu_35616_p0 =  (sc_lv<5>) (mul_ln78_43_fu_35616_p00.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35616_p00() {
    mul_ln78_43_fu_35616_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35616_p1() {
    mul_ln78_43_fu_35616_p1 =  (sc_lv<5>) (mul_ln78_43_fu_35616_p10.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35616_p10() {
    mul_ln78_43_fu_35616_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35616_p2() {
    mul_ln78_43_fu_35616_p2 = (!mul_ln78_43_fu_35616_p0.read().is_01() || !mul_ln78_43_fu_35616_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_43_fu_35616_p0.read()) * sc_biguint<5>(mul_ln78_43_fu_35616_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55119_p0() {
    mul_ln78_440_fu_55119_p0 =  (sc_lv<5>) (zext_ln78_1307_fu_55115_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55119_p1() {
    mul_ln78_440_fu_55119_p1 =  (sc_lv<5>) (zext_ln78_1307_fu_55115_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55119_p2() {
    mul_ln78_440_fu_55119_p2 = (!mul_ln78_440_fu_55119_p0.read().is_01() || !mul_ln78_440_fu_55119_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_440_fu_55119_p0.read()) * sc_biguint<5>(mul_ln78_440_fu_55119_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55210_p0() {
    mul_ln78_441_fu_55210_p0 =  (sc_lv<5>) (zext_ln78_1314_fu_55206_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55210_p1() {
    mul_ln78_441_fu_55210_p1 =  (sc_lv<5>) (zext_ln78_1314_fu_55206_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55210_p2() {
    mul_ln78_441_fu_55210_p2 = (!mul_ln78_441_fu_55210_p0.read().is_01() || !mul_ln78_441_fu_55210_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_441_fu_55210_p0.read()) * sc_biguint<5>(mul_ln78_441_fu_55210_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55391_p0() {
    mul_ln78_442_fu_55391_p0 =  (sc_lv<5>) (zext_ln78_1321_fu_55387_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55391_p1() {
    mul_ln78_442_fu_55391_p1 =  (sc_lv<5>) (zext_ln78_1321_fu_55387_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55391_p2() {
    mul_ln78_442_fu_55391_p2 = (!mul_ln78_442_fu_55391_p0.read().is_01() || !mul_ln78_442_fu_55391_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_442_fu_55391_p0.read()) * sc_biguint<5>(mul_ln78_442_fu_55391_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55482_p0() {
    mul_ln78_443_fu_55482_p0 =  (sc_lv<5>) (zext_ln78_1328_fu_55478_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55482_p1() {
    mul_ln78_443_fu_55482_p1 =  (sc_lv<5>) (zext_ln78_1328_fu_55478_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55482_p2() {
    mul_ln78_443_fu_55482_p2 = (!mul_ln78_443_fu_55482_p0.read().is_01() || !mul_ln78_443_fu_55482_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_443_fu_55482_p0.read()) * sc_biguint<5>(mul_ln78_443_fu_55482_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55663_p0() {
    mul_ln78_444_fu_55663_p0 =  (sc_lv<5>) (zext_ln78_1335_fu_55659_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55663_p1() {
    mul_ln78_444_fu_55663_p1 =  (sc_lv<5>) (zext_ln78_1335_fu_55659_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55663_p2() {
    mul_ln78_444_fu_55663_p2 = (!mul_ln78_444_fu_55663_p0.read().is_01() || !mul_ln78_444_fu_55663_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_444_fu_55663_p0.read()) * sc_biguint<5>(mul_ln78_444_fu_55663_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55754_p0() {
    mul_ln78_445_fu_55754_p0 =  (sc_lv<5>) (zext_ln78_1342_fu_55750_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55754_p1() {
    mul_ln78_445_fu_55754_p1 =  (sc_lv<5>) (zext_ln78_1342_fu_55750_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55754_p2() {
    mul_ln78_445_fu_55754_p2 = (!mul_ln78_445_fu_55754_p0.read().is_01() || !mul_ln78_445_fu_55754_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_445_fu_55754_p0.read()) * sc_biguint<5>(mul_ln78_445_fu_55754_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55935_p0() {
    mul_ln78_446_fu_55935_p0 =  (sc_lv<5>) (zext_ln78_1349_fu_55931_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55935_p1() {
    mul_ln78_446_fu_55935_p1 =  (sc_lv<5>) (zext_ln78_1349_fu_55931_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55935_p2() {
    mul_ln78_446_fu_55935_p2 = (!mul_ln78_446_fu_55935_p0.read().is_01() || !mul_ln78_446_fu_55935_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_446_fu_55935_p0.read()) * sc_biguint<5>(mul_ln78_446_fu_55935_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_56026_p0() {
    mul_ln78_447_fu_56026_p0 =  (sc_lv<5>) (zext_ln78_1356_fu_56022_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_56026_p1() {
    mul_ln78_447_fu_56026_p1 =  (sc_lv<5>) (zext_ln78_1356_fu_56022_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_56026_p2() {
    mul_ln78_447_fu_56026_p2 = (!mul_ln78_447_fu_56026_p0.read().is_01() || !mul_ln78_447_fu_56026_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_447_fu_56026_p0.read()) * sc_biguint<5>(mul_ln78_447_fu_56026_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56207_p0() {
    mul_ln78_448_fu_56207_p0 =  (sc_lv<5>) (zext_ln78_1363_fu_56203_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56207_p1() {
    mul_ln78_448_fu_56207_p1 =  (sc_lv<5>) (zext_ln78_1363_fu_56203_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56207_p2() {
    mul_ln78_448_fu_56207_p2 = (!mul_ln78_448_fu_56207_p0.read().is_01() || !mul_ln78_448_fu_56207_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_448_fu_56207_p0.read()) * sc_biguint<5>(mul_ln78_448_fu_56207_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56298_p0() {
    mul_ln78_449_fu_56298_p0 =  (sc_lv<5>) (zext_ln78_1370_fu_56294_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56298_p1() {
    mul_ln78_449_fu_56298_p1 =  (sc_lv<5>) (zext_ln78_1370_fu_56294_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56298_p2() {
    mul_ln78_449_fu_56298_p2 = (!mul_ln78_449_fu_56298_p0.read().is_01() || !mul_ln78_449_fu_56298_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_449_fu_56298_p0.read()) * sc_biguint<5>(mul_ln78_449_fu_56298_p1.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35797_p0() {
    mul_ln78_44_fu_35797_p0 =  (sc_lv<5>) (mul_ln78_44_fu_35797_p00.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35797_p00() {
    mul_ln78_44_fu_35797_p00 = esl_zext<10,5>(reg_19391.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35797_p1() {
    mul_ln78_44_fu_35797_p1 =  (sc_lv<5>) (mul_ln78_44_fu_35797_p10.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35797_p10() {
    mul_ln78_44_fu_35797_p10 = esl_zext<10,5>(reg_19395.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35797_p2() {
    mul_ln78_44_fu_35797_p2 = (!mul_ln78_44_fu_35797_p0.read().is_01() || !mul_ln78_44_fu_35797_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_44_fu_35797_p0.read()) * sc_biguint<5>(mul_ln78_44_fu_35797_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56479_p0() {
    mul_ln78_450_fu_56479_p0 =  (sc_lv<5>) (zext_ln78_1377_fu_56475_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56479_p1() {
    mul_ln78_450_fu_56479_p1 =  (sc_lv<5>) (zext_ln78_1377_fu_56475_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56479_p2() {
    mul_ln78_450_fu_56479_p2 = (!mul_ln78_450_fu_56479_p0.read().is_01() || !mul_ln78_450_fu_56479_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_450_fu_56479_p0.read()) * sc_biguint<5>(mul_ln78_450_fu_56479_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56570_p0() {
    mul_ln78_451_fu_56570_p0 =  (sc_lv<5>) (zext_ln78_1384_fu_56566_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56570_p1() {
    mul_ln78_451_fu_56570_p1 =  (sc_lv<5>) (zext_ln78_1384_fu_56566_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56570_p2() {
    mul_ln78_451_fu_56570_p2 = (!mul_ln78_451_fu_56570_p0.read().is_01() || !mul_ln78_451_fu_56570_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_451_fu_56570_p0.read()) * sc_biguint<5>(mul_ln78_451_fu_56570_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56751_p0() {
    mul_ln78_452_fu_56751_p0 =  (sc_lv<5>) (zext_ln78_1391_fu_56747_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56751_p1() {
    mul_ln78_452_fu_56751_p1 =  (sc_lv<5>) (zext_ln78_1391_fu_56747_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56751_p2() {
    mul_ln78_452_fu_56751_p2 = (!mul_ln78_452_fu_56751_p0.read().is_01() || !mul_ln78_452_fu_56751_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_452_fu_56751_p0.read()) * sc_biguint<5>(mul_ln78_452_fu_56751_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56842_p0() {
    mul_ln78_453_fu_56842_p0 =  (sc_lv<5>) (zext_ln78_1398_fu_56838_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56842_p1() {
    mul_ln78_453_fu_56842_p1 =  (sc_lv<5>) (zext_ln78_1398_fu_56838_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56842_p2() {
    mul_ln78_453_fu_56842_p2 = (!mul_ln78_453_fu_56842_p0.read().is_01() || !mul_ln78_453_fu_56842_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_453_fu_56842_p0.read()) * sc_biguint<5>(mul_ln78_453_fu_56842_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_57023_p0() {
    mul_ln78_454_fu_57023_p0 =  (sc_lv<5>) (zext_ln78_1405_fu_57019_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_57023_p1() {
    mul_ln78_454_fu_57023_p1 =  (sc_lv<5>) (zext_ln78_1405_fu_57019_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_57023_p2() {
    mul_ln78_454_fu_57023_p2 = (!mul_ln78_454_fu_57023_p0.read().is_01() || !mul_ln78_454_fu_57023_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_454_fu_57023_p0.read()) * sc_biguint<5>(mul_ln78_454_fu_57023_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57114_p0() {
    mul_ln78_455_fu_57114_p0 =  (sc_lv<5>) (zext_ln78_1412_fu_57110_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57114_p1() {
    mul_ln78_455_fu_57114_p1 =  (sc_lv<5>) (zext_ln78_1412_fu_57110_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57114_p2() {
    mul_ln78_455_fu_57114_p2 = (!mul_ln78_455_fu_57114_p0.read().is_01() || !mul_ln78_455_fu_57114_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_455_fu_57114_p0.read()) * sc_biguint<5>(mul_ln78_455_fu_57114_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57295_p0() {
    mul_ln78_456_fu_57295_p0 =  (sc_lv<5>) (zext_ln78_1419_fu_57291_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57295_p1() {
    mul_ln78_456_fu_57295_p1 =  (sc_lv<5>) (zext_ln78_1419_fu_57291_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57295_p2() {
    mul_ln78_456_fu_57295_p2 = (!mul_ln78_456_fu_57295_p0.read().is_01() || !mul_ln78_456_fu_57295_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_456_fu_57295_p0.read()) * sc_biguint<5>(mul_ln78_456_fu_57295_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57400_p0() {
    mul_ln78_457_fu_57400_p0 =  (sc_lv<5>) (zext_ln78_1426_fu_57396_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57400_p1() {
    mul_ln78_457_fu_57400_p1 =  (sc_lv<5>) (zext_ln78_1426_fu_57396_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57400_p2() {
    mul_ln78_457_fu_57400_p2 = (!mul_ln78_457_fu_57400_p0.read().is_01() || !mul_ln78_457_fu_57400_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_457_fu_57400_p0.read()) * sc_biguint<5>(mul_ln78_457_fu_57400_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57581_p0() {
    mul_ln78_458_fu_57581_p0 =  (sc_lv<5>) (zext_ln78_1433_fu_57577_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57581_p1() {
    mul_ln78_458_fu_57581_p1 =  (sc_lv<5>) (zext_ln78_1433_fu_57577_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57581_p2() {
    mul_ln78_458_fu_57581_p2 = (!mul_ln78_458_fu_57581_p0.read().is_01() || !mul_ln78_458_fu_57581_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_458_fu_57581_p0.read()) * sc_biguint<5>(mul_ln78_458_fu_57581_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57672_p0() {
    mul_ln78_459_fu_57672_p0 =  (sc_lv<5>) (zext_ln78_1440_fu_57668_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57672_p1() {
    mul_ln78_459_fu_57672_p1 =  (sc_lv<5>) (zext_ln78_1440_fu_57668_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57672_p2() {
    mul_ln78_459_fu_57672_p2 = (!mul_ln78_459_fu_57672_p0.read().is_01() || !mul_ln78_459_fu_57672_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_459_fu_57672_p0.read()) * sc_biguint<5>(mul_ln78_459_fu_57672_p1.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35888_p0() {
    mul_ln78_45_fu_35888_p0 =  (sc_lv<5>) (mul_ln78_45_fu_35888_p00.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35888_p00() {
    mul_ln78_45_fu_35888_p00 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35888_p1() {
    mul_ln78_45_fu_35888_p1 =  (sc_lv<5>) (mul_ln78_45_fu_35888_p10.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35888_p10() {
    mul_ln78_45_fu_35888_p10 = esl_zext<10,5>(reg_19428.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35888_p2() {
    mul_ln78_45_fu_35888_p2 = (!mul_ln78_45_fu_35888_p0.read().is_01() || !mul_ln78_45_fu_35888_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_45_fu_35888_p0.read()) * sc_biguint<5>(mul_ln78_45_fu_35888_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57839_p0() {
    mul_ln78_460_fu_57839_p0 =  (sc_lv<5>) (zext_ln78_1447_fu_57835_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57839_p1() {
    mul_ln78_460_fu_57839_p1 =  (sc_lv<5>) (zext_ln78_1447_fu_57835_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57839_p2() {
    mul_ln78_460_fu_57839_p2 = (!mul_ln78_460_fu_57839_p0.read().is_01() || !mul_ln78_460_fu_57839_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_460_fu_57839_p0.read()) * sc_biguint<5>(mul_ln78_460_fu_57839_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57930_p0() {
    mul_ln78_461_fu_57930_p0 =  (sc_lv<5>) (zext_ln78_1454_fu_57926_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57930_p1() {
    mul_ln78_461_fu_57930_p1 =  (sc_lv<5>) (zext_ln78_1454_fu_57926_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57930_p2() {
    mul_ln78_461_fu_57930_p2 = (!mul_ln78_461_fu_57930_p0.read().is_01() || !mul_ln78_461_fu_57930_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_461_fu_57930_p0.read()) * sc_biguint<5>(mul_ln78_461_fu_57930_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58111_p0() {
    mul_ln78_462_fu_58111_p0 =  (sc_lv<5>) (zext_ln78_1461_fu_58107_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58111_p1() {
    mul_ln78_462_fu_58111_p1 =  (sc_lv<5>) (zext_ln78_1461_fu_58107_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58111_p2() {
    mul_ln78_462_fu_58111_p2 = (!mul_ln78_462_fu_58111_p0.read().is_01() || !mul_ln78_462_fu_58111_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_462_fu_58111_p0.read()) * sc_biguint<5>(mul_ln78_462_fu_58111_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58202_p0() {
    mul_ln78_463_fu_58202_p0 =  (sc_lv<5>) (zext_ln78_1468_fu_58198_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58202_p1() {
    mul_ln78_463_fu_58202_p1 =  (sc_lv<5>) (zext_ln78_1468_fu_58198_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58202_p2() {
    mul_ln78_463_fu_58202_p2 = (!mul_ln78_463_fu_58202_p0.read().is_01() || !mul_ln78_463_fu_58202_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_463_fu_58202_p0.read()) * sc_biguint<5>(mul_ln78_463_fu_58202_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58383_p0() {
    mul_ln78_464_fu_58383_p0 =  (sc_lv<5>) (zext_ln78_1475_fu_58379_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58383_p1() {
    mul_ln78_464_fu_58383_p1 =  (sc_lv<5>) (zext_ln78_1475_fu_58379_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58383_p2() {
    mul_ln78_464_fu_58383_p2 = (!mul_ln78_464_fu_58383_p0.read().is_01() || !mul_ln78_464_fu_58383_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_464_fu_58383_p0.read()) * sc_biguint<5>(mul_ln78_464_fu_58383_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58474_p0() {
    mul_ln78_465_fu_58474_p0 =  (sc_lv<5>) (zext_ln78_1482_fu_58470_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58474_p1() {
    mul_ln78_465_fu_58474_p1 =  (sc_lv<5>) (zext_ln78_1482_fu_58470_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58474_p2() {
    mul_ln78_465_fu_58474_p2 = (!mul_ln78_465_fu_58474_p0.read().is_01() || !mul_ln78_465_fu_58474_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_465_fu_58474_p0.read()) * sc_biguint<5>(mul_ln78_465_fu_58474_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58655_p0() {
    mul_ln78_466_fu_58655_p0 =  (sc_lv<5>) (zext_ln78_1489_fu_58651_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58655_p1() {
    mul_ln78_466_fu_58655_p1 =  (sc_lv<5>) (zext_ln78_1489_fu_58651_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58655_p2() {
    mul_ln78_466_fu_58655_p2 = (!mul_ln78_466_fu_58655_p0.read().is_01() || !mul_ln78_466_fu_58655_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_466_fu_58655_p0.read()) * sc_biguint<5>(mul_ln78_466_fu_58655_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58746_p0() {
    mul_ln78_467_fu_58746_p0 =  (sc_lv<5>) (zext_ln78_1496_fu_58742_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58746_p1() {
    mul_ln78_467_fu_58746_p1 =  (sc_lv<5>) (zext_ln78_1496_fu_58742_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58746_p2() {
    mul_ln78_467_fu_58746_p2 = (!mul_ln78_467_fu_58746_p0.read().is_01() || !mul_ln78_467_fu_58746_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_467_fu_58746_p0.read()) * sc_biguint<5>(mul_ln78_467_fu_58746_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58927_p0() {
    mul_ln78_468_fu_58927_p0 =  (sc_lv<5>) (zext_ln78_1503_fu_58923_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58927_p1() {
    mul_ln78_468_fu_58927_p1 =  (sc_lv<5>) (zext_ln78_1503_fu_58923_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58927_p2() {
    mul_ln78_468_fu_58927_p2 = (!mul_ln78_468_fu_58927_p0.read().is_01() || !mul_ln78_468_fu_58927_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_468_fu_58927_p0.read()) * sc_biguint<5>(mul_ln78_468_fu_58927_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_59018_p0() {
    mul_ln78_469_fu_59018_p0 =  (sc_lv<5>) (zext_ln78_1510_fu_59014_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_59018_p1() {
    mul_ln78_469_fu_59018_p1 =  (sc_lv<5>) (zext_ln78_1510_fu_59014_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_59018_p2() {
    mul_ln78_469_fu_59018_p2 = (!mul_ln78_469_fu_59018_p0.read().is_01() || !mul_ln78_469_fu_59018_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_469_fu_59018_p0.read()) * sc_biguint<5>(mul_ln78_469_fu_59018_p1.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36069_p0() {
    mul_ln78_46_fu_36069_p0 =  (sc_lv<5>) (mul_ln78_46_fu_36069_p00.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36069_p00() {
    mul_ln78_46_fu_36069_p00 = esl_zext<10,5>(reg_19478.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36069_p1() {
    mul_ln78_46_fu_36069_p1 =  (sc_lv<5>) (mul_ln78_46_fu_36069_p10.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36069_p10() {
    mul_ln78_46_fu_36069_p10 = esl_zext<10,5>(reg_19482.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36069_p2() {
    mul_ln78_46_fu_36069_p2 = (!mul_ln78_46_fu_36069_p0.read().is_01() || !mul_ln78_46_fu_36069_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_46_fu_36069_p0.read()) * sc_biguint<5>(mul_ln78_46_fu_36069_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59199_p0() {
    mul_ln78_470_fu_59199_p0 =  (sc_lv<5>) (zext_ln78_1517_fu_59195_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59199_p1() {
    mul_ln78_470_fu_59199_p1 =  (sc_lv<5>) (zext_ln78_1517_fu_59195_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59199_p2() {
    mul_ln78_470_fu_59199_p2 = (!mul_ln78_470_fu_59199_p0.read().is_01() || !mul_ln78_470_fu_59199_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_470_fu_59199_p0.read()) * sc_biguint<5>(mul_ln78_470_fu_59199_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59290_p0() {
    mul_ln78_471_fu_59290_p0 =  (sc_lv<5>) (zext_ln78_1524_fu_59286_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59290_p1() {
    mul_ln78_471_fu_59290_p1 =  (sc_lv<5>) (zext_ln78_1524_fu_59286_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59290_p2() {
    mul_ln78_471_fu_59290_p2 = (!mul_ln78_471_fu_59290_p0.read().is_01() || !mul_ln78_471_fu_59290_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_471_fu_59290_p0.read()) * sc_biguint<5>(mul_ln78_471_fu_59290_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59471_p0() {
    mul_ln78_472_fu_59471_p0 =  (sc_lv<5>) (zext_ln78_1531_fu_59467_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59471_p1() {
    mul_ln78_472_fu_59471_p1 =  (sc_lv<5>) (zext_ln78_1531_fu_59467_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59471_p2() {
    mul_ln78_472_fu_59471_p2 = (!mul_ln78_472_fu_59471_p0.read().is_01() || !mul_ln78_472_fu_59471_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_472_fu_59471_p0.read()) * sc_biguint<5>(mul_ln78_472_fu_59471_p1.read());
}

void HLS_accel::thread_mul_ln78_473_fu_59562_p0() {
    mul_ln78_473_fu_59562_p0 =  (sc_lv<5>) (zext_ln78_1538_fu_59558_p1.read());
}

void HLS_accel::thread_mul_ln78_473_fu_59562_p1() {
    mul_ln78_473_fu_59562_p1 =  (sc_lv<5>) (zext_ln78_1538_fu_59558_p1.read());
}

void HLS_accel::thread_mul_ln78_473_fu_59562_p2() {
    mul_ln78_473_fu_59562_p2 = (!mul_ln78_473_fu_59562_p0.read().is_01() || !mul_ln78_473_fu_59562_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_473_fu_59562_p0.read()) * sc_biguint<5>(mul_ln78_473_fu_59562_p1.read());
}

}

