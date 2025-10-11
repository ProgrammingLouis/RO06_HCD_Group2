#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_mul_ln78_214_fu_58927_p1() {
    mul_ln78_214_fu_58927_p1 =  (sc_lv<5>) (mul_ln78_214_fu_58927_p10.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58927_p10() {
    mul_ln78_214_fu_58927_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58927_p2() {
    mul_ln78_214_fu_58927_p2 = (!mul_ln78_214_fu_58927_p0.read().is_01() || !mul_ln78_214_fu_58927_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_214_fu_58927_p0.read()) * sc_biguint<5>(mul_ln78_214_fu_58927_p1.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59018_p0() {
    mul_ln78_215_fu_59018_p0 =  (sc_lv<5>) (mul_ln78_215_fu_59018_p00.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59018_p00() {
    mul_ln78_215_fu_59018_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59018_p1() {
    mul_ln78_215_fu_59018_p1 =  (sc_lv<5>) (mul_ln78_215_fu_59018_p10.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59018_p10() {
    mul_ln78_215_fu_59018_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_215_fu_59018_p2() {
    mul_ln78_215_fu_59018_p2 = (!mul_ln78_215_fu_59018_p0.read().is_01() || !mul_ln78_215_fu_59018_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_215_fu_59018_p0.read()) * sc_biguint<5>(mul_ln78_215_fu_59018_p1.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59199_p0() {
    mul_ln78_216_fu_59199_p0 =  (sc_lv<5>) (mul_ln78_216_fu_59199_p00.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59199_p00() {
    mul_ln78_216_fu_59199_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59199_p1() {
    mul_ln78_216_fu_59199_p1 =  (sc_lv<5>) (mul_ln78_216_fu_59199_p10.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59199_p10() {
    mul_ln78_216_fu_59199_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59199_p2() {
    mul_ln78_216_fu_59199_p2 = (!mul_ln78_216_fu_59199_p0.read().is_01() || !mul_ln78_216_fu_59199_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_216_fu_59199_p0.read()) * sc_biguint<5>(mul_ln78_216_fu_59199_p1.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59290_p0() {
    mul_ln78_217_fu_59290_p0 =  (sc_lv<5>) (mul_ln78_217_fu_59290_p00.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59290_p00() {
    mul_ln78_217_fu_59290_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59290_p1() {
    mul_ln78_217_fu_59290_p1 =  (sc_lv<5>) (mul_ln78_217_fu_59290_p10.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59290_p10() {
    mul_ln78_217_fu_59290_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59290_p2() {
    mul_ln78_217_fu_59290_p2 = (!mul_ln78_217_fu_59290_p0.read().is_01() || !mul_ln78_217_fu_59290_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_217_fu_59290_p0.read()) * sc_biguint<5>(mul_ln78_217_fu_59290_p1.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59471_p0() {
    mul_ln78_218_fu_59471_p0 =  (sc_lv<5>) (mul_ln78_218_fu_59471_p00.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59471_p00() {
    mul_ln78_218_fu_59471_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59471_p1() {
    mul_ln78_218_fu_59471_p1 =  (sc_lv<5>) (mul_ln78_218_fu_59471_p10.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59471_p10() {
    mul_ln78_218_fu_59471_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59471_p2() {
    mul_ln78_218_fu_59471_p2 = (!mul_ln78_218_fu_59471_p0.read().is_01() || !mul_ln78_218_fu_59471_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_218_fu_59471_p0.read()) * sc_biguint<5>(mul_ln78_218_fu_59471_p1.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59562_p0() {
    mul_ln78_219_fu_59562_p0 =  (sc_lv<5>) (mul_ln78_219_fu_59562_p00.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59562_p00() {
    mul_ln78_219_fu_59562_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59562_p1() {
    mul_ln78_219_fu_59562_p1 =  (sc_lv<5>) (mul_ln78_219_fu_59562_p10.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59562_p10() {
    mul_ln78_219_fu_59562_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59562_p2() {
    mul_ln78_219_fu_59562_p2 = (!mul_ln78_219_fu_59562_p0.read().is_01() || !mul_ln78_219_fu_59562_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_219_fu_59562_p0.read()) * sc_biguint<5>(mul_ln78_219_fu_59562_p1.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32634_p0() {
    mul_ln78_21_fu_32634_p0 =  (sc_lv<5>) (mul_ln78_21_fu_32634_p00.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32634_p00() {
    mul_ln78_21_fu_32634_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32634_p1() {
    mul_ln78_21_fu_32634_p1 =  (sc_lv<5>) (mul_ln78_21_fu_32634_p10.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32634_p10() {
    mul_ln78_21_fu_32634_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32634_p2() {
    mul_ln78_21_fu_32634_p2 = (!mul_ln78_21_fu_32634_p0.read().is_01() || !mul_ln78_21_fu_32634_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_21_fu_32634_p0.read()) * sc_biguint<5>(mul_ln78_21_fu_32634_p1.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59743_p0() {
    mul_ln78_220_fu_59743_p0 =  (sc_lv<5>) (mul_ln78_220_fu_59743_p00.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59743_p00() {
    mul_ln78_220_fu_59743_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59743_p1() {
    mul_ln78_220_fu_59743_p1 =  (sc_lv<5>) (mul_ln78_220_fu_59743_p10.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59743_p10() {
    mul_ln78_220_fu_59743_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59743_p2() {
    mul_ln78_220_fu_59743_p2 = (!mul_ln78_220_fu_59743_p0.read().is_01() || !mul_ln78_220_fu_59743_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_220_fu_59743_p0.read()) * sc_biguint<5>(mul_ln78_220_fu_59743_p1.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59834_p0() {
    mul_ln78_221_fu_59834_p0 =  (sc_lv<5>) (mul_ln78_221_fu_59834_p00.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59834_p00() {
    mul_ln78_221_fu_59834_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59834_p1() {
    mul_ln78_221_fu_59834_p1 =  (sc_lv<5>) (mul_ln78_221_fu_59834_p10.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59834_p10() {
    mul_ln78_221_fu_59834_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59834_p2() {
    mul_ln78_221_fu_59834_p2 = (!mul_ln78_221_fu_59834_p0.read().is_01() || !mul_ln78_221_fu_59834_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_221_fu_59834_p0.read()) * sc_biguint<5>(mul_ln78_221_fu_59834_p1.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60015_p0() {
    mul_ln78_222_fu_60015_p0 =  (sc_lv<5>) (mul_ln78_222_fu_60015_p00.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60015_p00() {
    mul_ln78_222_fu_60015_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60015_p1() {
    mul_ln78_222_fu_60015_p1 =  (sc_lv<5>) (mul_ln78_222_fu_60015_p10.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60015_p10() {
    mul_ln78_222_fu_60015_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_222_fu_60015_p2() {
    mul_ln78_222_fu_60015_p2 = (!mul_ln78_222_fu_60015_p0.read().is_01() || !mul_ln78_222_fu_60015_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_222_fu_60015_p0.read()) * sc_biguint<5>(mul_ln78_222_fu_60015_p1.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60116_p0() {
    mul_ln78_223_fu_60116_p0 =  (sc_lv<5>) (mul_ln78_223_fu_60116_p00.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60116_p00() {
    mul_ln78_223_fu_60116_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60116_p1() {
    mul_ln78_223_fu_60116_p1 =  (sc_lv<5>) (mul_ln78_223_fu_60116_p10.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60116_p10() {
    mul_ln78_223_fu_60116_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60116_p2() {
    mul_ln78_223_fu_60116_p2 = (!mul_ln78_223_fu_60116_p0.read().is_01() || !mul_ln78_223_fu_60116_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_223_fu_60116_p0.read()) * sc_biguint<5>(mul_ln78_223_fu_60116_p1.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60287_p0() {
    mul_ln78_224_fu_60287_p0 =  (sc_lv<5>) (mul_ln78_224_fu_60287_p00.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60287_p00() {
    mul_ln78_224_fu_60287_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60287_p1() {
    mul_ln78_224_fu_60287_p1 =  (sc_lv<5>) (mul_ln78_224_fu_60287_p10.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60287_p10() {
    mul_ln78_224_fu_60287_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60287_p2() {
    mul_ln78_224_fu_60287_p2 = (!mul_ln78_224_fu_60287_p0.read().is_01() || !mul_ln78_224_fu_60287_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_224_fu_60287_p0.read()) * sc_biguint<5>(mul_ln78_224_fu_60287_p1.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60378_p0() {
    mul_ln78_225_fu_60378_p0 =  (sc_lv<5>) (mul_ln78_225_fu_60378_p00.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60378_p00() {
    mul_ln78_225_fu_60378_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60378_p1() {
    mul_ln78_225_fu_60378_p1 =  (sc_lv<5>) (mul_ln78_225_fu_60378_p10.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60378_p10() {
    mul_ln78_225_fu_60378_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60378_p2() {
    mul_ln78_225_fu_60378_p2 = (!mul_ln78_225_fu_60378_p0.read().is_01() || !mul_ln78_225_fu_60378_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_225_fu_60378_p0.read()) * sc_biguint<5>(mul_ln78_225_fu_60378_p1.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60559_p0() {
    mul_ln78_226_fu_60559_p0 =  (sc_lv<5>) (mul_ln78_226_fu_60559_p00.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60559_p00() {
    mul_ln78_226_fu_60559_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60559_p1() {
    mul_ln78_226_fu_60559_p1 =  (sc_lv<5>) (mul_ln78_226_fu_60559_p10.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60559_p10() {
    mul_ln78_226_fu_60559_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60559_p2() {
    mul_ln78_226_fu_60559_p2 = (!mul_ln78_226_fu_60559_p0.read().is_01() || !mul_ln78_226_fu_60559_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_226_fu_60559_p0.read()) * sc_biguint<5>(mul_ln78_226_fu_60559_p1.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60660_p0() {
    mul_ln78_227_fu_60660_p0 =  (sc_lv<5>) (mul_ln78_227_fu_60660_p00.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60660_p00() {
    mul_ln78_227_fu_60660_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60660_p1() {
    mul_ln78_227_fu_60660_p1 =  (sc_lv<5>) (mul_ln78_227_fu_60660_p10.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60660_p10() {
    mul_ln78_227_fu_60660_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60660_p2() {
    mul_ln78_227_fu_60660_p2 = (!mul_ln78_227_fu_60660_p0.read().is_01() || !mul_ln78_227_fu_60660_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_227_fu_60660_p0.read()) * sc_biguint<5>(mul_ln78_227_fu_60660_p1.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60831_p0() {
    mul_ln78_228_fu_60831_p0 =  (sc_lv<5>) (mul_ln78_228_fu_60831_p00.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60831_p00() {
    mul_ln78_228_fu_60831_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60831_p1() {
    mul_ln78_228_fu_60831_p1 =  (sc_lv<5>) (mul_ln78_228_fu_60831_p10.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60831_p10() {
    mul_ln78_228_fu_60831_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60831_p2() {
    mul_ln78_228_fu_60831_p2 = (!mul_ln78_228_fu_60831_p0.read().is_01() || !mul_ln78_228_fu_60831_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_228_fu_60831_p0.read()) * sc_biguint<5>(mul_ln78_228_fu_60831_p1.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60922_p0() {
    mul_ln78_229_fu_60922_p0 =  (sc_lv<5>) (mul_ln78_229_fu_60922_p00.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60922_p00() {
    mul_ln78_229_fu_60922_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60922_p1() {
    mul_ln78_229_fu_60922_p1 =  (sc_lv<5>) (mul_ln78_229_fu_60922_p10.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60922_p10() {
    mul_ln78_229_fu_60922_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60922_p2() {
    mul_ln78_229_fu_60922_p2 = (!mul_ln78_229_fu_60922_p0.read().is_01() || !mul_ln78_229_fu_60922_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_229_fu_60922_p0.read()) * sc_biguint<5>(mul_ln78_229_fu_60922_p1.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32815_p0() {
    mul_ln78_22_fu_32815_p0 =  (sc_lv<5>) (mul_ln78_22_fu_32815_p00.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32815_p00() {
    mul_ln78_22_fu_32815_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32815_p1() {
    mul_ln78_22_fu_32815_p1 =  (sc_lv<5>) (mul_ln78_22_fu_32815_p10.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32815_p10() {
    mul_ln78_22_fu_32815_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32815_p2() {
    mul_ln78_22_fu_32815_p2 = (!mul_ln78_22_fu_32815_p0.read().is_01() || !mul_ln78_22_fu_32815_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_22_fu_32815_p0.read()) * sc_biguint<5>(mul_ln78_22_fu_32815_p1.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61103_p0() {
    mul_ln78_230_fu_61103_p0 =  (sc_lv<5>) (mul_ln78_230_fu_61103_p00.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61103_p00() {
    mul_ln78_230_fu_61103_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61103_p1() {
    mul_ln78_230_fu_61103_p1 =  (sc_lv<5>) (mul_ln78_230_fu_61103_p10.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61103_p10() {
    mul_ln78_230_fu_61103_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61103_p2() {
    mul_ln78_230_fu_61103_p2 = (!mul_ln78_230_fu_61103_p0.read().is_01() || !mul_ln78_230_fu_61103_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_230_fu_61103_p0.read()) * sc_biguint<5>(mul_ln78_230_fu_61103_p1.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61194_p0() {
    mul_ln78_231_fu_61194_p0 =  (sc_lv<5>) (mul_ln78_231_fu_61194_p00.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61194_p00() {
    mul_ln78_231_fu_61194_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61194_p1() {
    mul_ln78_231_fu_61194_p1 =  (sc_lv<5>) (mul_ln78_231_fu_61194_p10.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61194_p10() {
    mul_ln78_231_fu_61194_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61194_p2() {
    mul_ln78_231_fu_61194_p2 = (!mul_ln78_231_fu_61194_p0.read().is_01() || !mul_ln78_231_fu_61194_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_231_fu_61194_p0.read()) * sc_biguint<5>(mul_ln78_231_fu_61194_p1.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61375_p0() {
    mul_ln78_232_fu_61375_p0 =  (sc_lv<5>) (mul_ln78_232_fu_61375_p00.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61375_p00() {
    mul_ln78_232_fu_61375_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61375_p1() {
    mul_ln78_232_fu_61375_p1 =  (sc_lv<5>) (mul_ln78_232_fu_61375_p10.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61375_p10() {
    mul_ln78_232_fu_61375_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61375_p2() {
    mul_ln78_232_fu_61375_p2 = (!mul_ln78_232_fu_61375_p0.read().is_01() || !mul_ln78_232_fu_61375_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_232_fu_61375_p0.read()) * sc_biguint<5>(mul_ln78_232_fu_61375_p1.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61466_p0() {
    mul_ln78_233_fu_61466_p0 =  (sc_lv<5>) (mul_ln78_233_fu_61466_p00.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61466_p00() {
    mul_ln78_233_fu_61466_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61466_p1() {
    mul_ln78_233_fu_61466_p1 =  (sc_lv<5>) (mul_ln78_233_fu_61466_p10.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61466_p10() {
    mul_ln78_233_fu_61466_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61466_p2() {
    mul_ln78_233_fu_61466_p2 = (!mul_ln78_233_fu_61466_p0.read().is_01() || !mul_ln78_233_fu_61466_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_233_fu_61466_p0.read()) * sc_biguint<5>(mul_ln78_233_fu_61466_p1.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61647_p0() {
    mul_ln78_234_fu_61647_p0 =  (sc_lv<5>) (mul_ln78_234_fu_61647_p00.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61647_p00() {
    mul_ln78_234_fu_61647_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61647_p1() {
    mul_ln78_234_fu_61647_p1 =  (sc_lv<5>) (mul_ln78_234_fu_61647_p10.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61647_p10() {
    mul_ln78_234_fu_61647_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61647_p2() {
    mul_ln78_234_fu_61647_p2 = (!mul_ln78_234_fu_61647_p0.read().is_01() || !mul_ln78_234_fu_61647_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_234_fu_61647_p0.read()) * sc_biguint<5>(mul_ln78_234_fu_61647_p1.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61738_p0() {
    mul_ln78_235_fu_61738_p0 =  (sc_lv<5>) (mul_ln78_235_fu_61738_p00.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61738_p00() {
    mul_ln78_235_fu_61738_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61738_p1() {
    mul_ln78_235_fu_61738_p1 =  (sc_lv<5>) (mul_ln78_235_fu_61738_p10.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61738_p10() {
    mul_ln78_235_fu_61738_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61738_p2() {
    mul_ln78_235_fu_61738_p2 = (!mul_ln78_235_fu_61738_p0.read().is_01() || !mul_ln78_235_fu_61738_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_235_fu_61738_p0.read()) * sc_biguint<5>(mul_ln78_235_fu_61738_p1.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61919_p0() {
    mul_ln78_236_fu_61919_p0 =  (sc_lv<5>) (mul_ln78_236_fu_61919_p00.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61919_p00() {
    mul_ln78_236_fu_61919_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61919_p1() {
    mul_ln78_236_fu_61919_p1 =  (sc_lv<5>) (mul_ln78_236_fu_61919_p10.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61919_p10() {
    mul_ln78_236_fu_61919_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61919_p2() {
    mul_ln78_236_fu_61919_p2 = (!mul_ln78_236_fu_61919_p0.read().is_01() || !mul_ln78_236_fu_61919_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_236_fu_61919_p0.read()) * sc_biguint<5>(mul_ln78_236_fu_61919_p1.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62010_p0() {
    mul_ln78_237_fu_62010_p0 =  (sc_lv<5>) (mul_ln78_237_fu_62010_p00.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62010_p00() {
    mul_ln78_237_fu_62010_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62010_p1() {
    mul_ln78_237_fu_62010_p1 =  (sc_lv<5>) (mul_ln78_237_fu_62010_p10.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62010_p10() {
    mul_ln78_237_fu_62010_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_237_fu_62010_p2() {
    mul_ln78_237_fu_62010_p2 = (!mul_ln78_237_fu_62010_p0.read().is_01() || !mul_ln78_237_fu_62010_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_237_fu_62010_p0.read()) * sc_biguint<5>(mul_ln78_237_fu_62010_p1.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62201_p0() {
    mul_ln78_238_fu_62201_p0 =  (sc_lv<5>) (mul_ln78_238_fu_62201_p00.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62201_p00() {
    mul_ln78_238_fu_62201_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62201_p1() {
    mul_ln78_238_fu_62201_p1 =  (sc_lv<5>) (mul_ln78_238_fu_62201_p10.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62201_p10() {
    mul_ln78_238_fu_62201_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62201_p2() {
    mul_ln78_238_fu_62201_p2 = (!mul_ln78_238_fu_62201_p0.read().is_01() || !mul_ln78_238_fu_62201_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_238_fu_62201_p0.read()) * sc_biguint<5>(mul_ln78_238_fu_62201_p1.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62282_p0() {
    mul_ln78_239_fu_62282_p0 =  (sc_lv<5>) (mul_ln78_239_fu_62282_p00.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62282_p00() {
    mul_ln78_239_fu_62282_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62282_p1() {
    mul_ln78_239_fu_62282_p1 =  (sc_lv<5>) (mul_ln78_239_fu_62282_p10.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62282_p10() {
    mul_ln78_239_fu_62282_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62282_p2() {
    mul_ln78_239_fu_62282_p2 = (!mul_ln78_239_fu_62282_p0.read().is_01() || !mul_ln78_239_fu_62282_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_239_fu_62282_p0.read()) * sc_biguint<5>(mul_ln78_239_fu_62282_p1.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32916_p0() {
    mul_ln78_23_fu_32916_p0 =  (sc_lv<5>) (mul_ln78_23_fu_32916_p00.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32916_p00() {
    mul_ln78_23_fu_32916_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32916_p1() {
    mul_ln78_23_fu_32916_p1 =  (sc_lv<5>) (mul_ln78_23_fu_32916_p10.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32916_p10() {
    mul_ln78_23_fu_32916_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32916_p2() {
    mul_ln78_23_fu_32916_p2 = (!mul_ln78_23_fu_32916_p0.read().is_01() || !mul_ln78_23_fu_32916_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_23_fu_32916_p0.read()) * sc_biguint<5>(mul_ln78_23_fu_32916_p1.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62463_p0() {
    mul_ln78_240_fu_62463_p0 =  (sc_lv<5>) (mul_ln78_240_fu_62463_p00.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62463_p00() {
    mul_ln78_240_fu_62463_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62463_p1() {
    mul_ln78_240_fu_62463_p1 =  (sc_lv<5>) (mul_ln78_240_fu_62463_p10.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62463_p10() {
    mul_ln78_240_fu_62463_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62463_p2() {
    mul_ln78_240_fu_62463_p2 = (!mul_ln78_240_fu_62463_p0.read().is_01() || !mul_ln78_240_fu_62463_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_240_fu_62463_p0.read()) * sc_biguint<5>(mul_ln78_240_fu_62463_p1.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62554_p0() {
    mul_ln78_241_fu_62554_p0 =  (sc_lv<5>) (mul_ln78_241_fu_62554_p00.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62554_p00() {
    mul_ln78_241_fu_62554_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62554_p1() {
    mul_ln78_241_fu_62554_p1 =  (sc_lv<5>) (mul_ln78_241_fu_62554_p10.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62554_p10() {
    mul_ln78_241_fu_62554_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62554_p2() {
    mul_ln78_241_fu_62554_p2 = (!mul_ln78_241_fu_62554_p0.read().is_01() || !mul_ln78_241_fu_62554_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_241_fu_62554_p0.read()) * sc_biguint<5>(mul_ln78_241_fu_62554_p1.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62745_p0() {
    mul_ln78_242_fu_62745_p0 =  (sc_lv<5>) (mul_ln78_242_fu_62745_p00.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62745_p00() {
    mul_ln78_242_fu_62745_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62745_p1() {
    mul_ln78_242_fu_62745_p1 =  (sc_lv<5>) (mul_ln78_242_fu_62745_p10.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62745_p10() {
    mul_ln78_242_fu_62745_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62745_p2() {
    mul_ln78_242_fu_62745_p2 = (!mul_ln78_242_fu_62745_p0.read().is_01() || !mul_ln78_242_fu_62745_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_242_fu_62745_p0.read()) * sc_biguint<5>(mul_ln78_242_fu_62745_p1.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62826_p0() {
    mul_ln78_243_fu_62826_p0 =  (sc_lv<5>) (mul_ln78_243_fu_62826_p00.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62826_p00() {
    mul_ln78_243_fu_62826_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62826_p1() {
    mul_ln78_243_fu_62826_p1 =  (sc_lv<5>) (mul_ln78_243_fu_62826_p10.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62826_p10() {
    mul_ln78_243_fu_62826_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62826_p2() {
    mul_ln78_243_fu_62826_p2 = (!mul_ln78_243_fu_62826_p0.read().is_01() || !mul_ln78_243_fu_62826_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_243_fu_62826_p0.read()) * sc_biguint<5>(mul_ln78_243_fu_62826_p1.read());
}

void HLS_accel::thread_mul_ln78_244_fu_63007_p0() {
    mul_ln78_244_fu_63007_p0 =  (sc_lv<5>) (mul_ln78_244_fu_63007_p00.read());
}

void HLS_accel::thread_mul_ln78_244_fu_63007_p00() {
    mul_ln78_244_fu_63007_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_244_fu_63007_p1() {
    mul_ln78_244_fu_63007_p1 =  (sc_lv<5>) (mul_ln78_244_fu_63007_p10.read());
}

void HLS_accel::thread_mul_ln78_244_fu_63007_p10() {
    mul_ln78_244_fu_63007_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_244_fu_63007_p2() {
    mul_ln78_244_fu_63007_p2 = (!mul_ln78_244_fu_63007_p0.read().is_01() || !mul_ln78_244_fu_63007_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_244_fu_63007_p0.read()) * sc_biguint<5>(mul_ln78_244_fu_63007_p1.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63098_p0() {
    mul_ln78_245_fu_63098_p0 =  (sc_lv<5>) (mul_ln78_245_fu_63098_p00.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63098_p00() {
    mul_ln78_245_fu_63098_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63098_p1() {
    mul_ln78_245_fu_63098_p1 =  (sc_lv<5>) (mul_ln78_245_fu_63098_p10.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63098_p10() {
    mul_ln78_245_fu_63098_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63098_p2() {
    mul_ln78_245_fu_63098_p2 = (!mul_ln78_245_fu_63098_p0.read().is_01() || !mul_ln78_245_fu_63098_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_245_fu_63098_p0.read()) * sc_biguint<5>(mul_ln78_245_fu_63098_p1.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63279_p0() {
    mul_ln78_246_fu_63279_p0 =  (sc_lv<5>) (mul_ln78_246_fu_63279_p00.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63279_p00() {
    mul_ln78_246_fu_63279_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63279_p1() {
    mul_ln78_246_fu_63279_p1 =  (sc_lv<5>) (mul_ln78_246_fu_63279_p10.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63279_p10() {
    mul_ln78_246_fu_63279_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63279_p2() {
    mul_ln78_246_fu_63279_p2 = (!mul_ln78_246_fu_63279_p0.read().is_01() || !mul_ln78_246_fu_63279_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_246_fu_63279_p0.read()) * sc_biguint<5>(mul_ln78_246_fu_63279_p1.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63340_p0() {
    mul_ln78_247_fu_63340_p0 =  (sc_lv<5>) (mul_ln78_247_fu_63340_p00.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63340_p00() {
    mul_ln78_247_fu_63340_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63340_p1() {
    mul_ln78_247_fu_63340_p1 =  (sc_lv<5>) (mul_ln78_247_fu_63340_p10.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63340_p10() {
    mul_ln78_247_fu_63340_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63340_p2() {
    mul_ln78_247_fu_63340_p2 = (!mul_ln78_247_fu_63340_p0.read().is_01() || !mul_ln78_247_fu_63340_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_247_fu_63340_p0.read()) * sc_biguint<5>(mul_ln78_247_fu_63340_p1.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63461_p0() {
    mul_ln78_248_fu_63461_p0 =  (sc_lv<5>) (mul_ln78_248_fu_63461_p00.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63461_p00() {
    mul_ln78_248_fu_63461_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63461_p1() {
    mul_ln78_248_fu_63461_p1 =  (sc_lv<5>) (mul_ln78_248_fu_63461_p10.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63461_p10() {
    mul_ln78_248_fu_63461_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63461_p2() {
    mul_ln78_248_fu_63461_p2 = (!mul_ln78_248_fu_63461_p0.read().is_01() || !mul_ln78_248_fu_63461_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_248_fu_63461_p0.read()) * sc_biguint<5>(mul_ln78_248_fu_63461_p1.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63522_p0() {
    mul_ln78_249_fu_63522_p0 =  (sc_lv<5>) (mul_ln78_249_fu_63522_p00.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63522_p00() {
    mul_ln78_249_fu_63522_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63522_p1() {
    mul_ln78_249_fu_63522_p1 =  (sc_lv<5>) (mul_ln78_249_fu_63522_p10.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63522_p10() {
    mul_ln78_249_fu_63522_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63522_p2() {
    mul_ln78_249_fu_63522_p2 = (!mul_ln78_249_fu_63522_p0.read().is_01() || !mul_ln78_249_fu_63522_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_249_fu_63522_p0.read()) * sc_biguint<5>(mul_ln78_249_fu_63522_p1.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33087_p0() {
    mul_ln78_24_fu_33087_p0 =  (sc_lv<5>) (mul_ln78_24_fu_33087_p00.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33087_p00() {
    mul_ln78_24_fu_33087_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33087_p1() {
    mul_ln78_24_fu_33087_p1 =  (sc_lv<5>) (mul_ln78_24_fu_33087_p10.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33087_p10() {
    mul_ln78_24_fu_33087_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33087_p2() {
    mul_ln78_24_fu_33087_p2 = (!mul_ln78_24_fu_33087_p0.read().is_01() || !mul_ln78_24_fu_33087_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_24_fu_33087_p0.read()) * sc_biguint<5>(mul_ln78_24_fu_33087_p1.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63643_p0() {
    mul_ln78_250_fu_63643_p0 =  (sc_lv<5>) (mul_ln78_250_fu_63643_p00.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63643_p00() {
    mul_ln78_250_fu_63643_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63643_p1() {
    mul_ln78_250_fu_63643_p1 =  (sc_lv<5>) (mul_ln78_250_fu_63643_p10.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63643_p10() {
    mul_ln78_250_fu_63643_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63643_p2() {
    mul_ln78_250_fu_63643_p2 = (!mul_ln78_250_fu_63643_p0.read().is_01() || !mul_ln78_250_fu_63643_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_250_fu_63643_p0.read()) * sc_biguint<5>(mul_ln78_250_fu_63643_p1.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63685_p0() {
    mul_ln78_251_fu_63685_p0 =  (sc_lv<5>) (mul_ln78_251_fu_63685_p00.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63685_p00() {
    mul_ln78_251_fu_63685_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63685_p1() {
    mul_ln78_251_fu_63685_p1 =  (sc_lv<5>) (mul_ln78_251_fu_63685_p10.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63685_p10() {
    mul_ln78_251_fu_63685_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63685_p2() {
    mul_ln78_251_fu_63685_p2 = (!mul_ln78_251_fu_63685_p0.read().is_01() || !mul_ln78_251_fu_63685_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_251_fu_63685_p0.read()) * sc_biguint<5>(mul_ln78_251_fu_63685_p1.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63787_p0() {
    mul_ln78_252_fu_63787_p0 =  (sc_lv<5>) (mul_ln78_252_fu_63787_p00.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63787_p00() {
    mul_ln78_252_fu_63787_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63787_p1() {
    mul_ln78_252_fu_63787_p1 =  (sc_lv<5>) (mul_ln78_252_fu_63787_p10.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63787_p10() {
    mul_ln78_252_fu_63787_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63787_p2() {
    mul_ln78_252_fu_63787_p2 = (!mul_ln78_252_fu_63787_p0.read().is_01() || !mul_ln78_252_fu_63787_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_252_fu_63787_p0.read()) * sc_biguint<5>(mul_ln78_252_fu_63787_p1.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63829_p0() {
    mul_ln78_253_fu_63829_p0 =  (sc_lv<5>) (mul_ln78_253_fu_63829_p00.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63829_p00() {
    mul_ln78_253_fu_63829_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63829_p1() {
    mul_ln78_253_fu_63829_p1 =  (sc_lv<5>) (mul_ln78_253_fu_63829_p10.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63829_p10() {
    mul_ln78_253_fu_63829_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63829_p2() {
    mul_ln78_253_fu_63829_p2 = (!mul_ln78_253_fu_63829_p0.read().is_01() || !mul_ln78_253_fu_63829_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_253_fu_63829_p0.read()) * sc_biguint<5>(mul_ln78_253_fu_63829_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30334_p0() {
    mul_ln78_254_fu_30334_p0 =  (sc_lv<5>) (zext_ln78_12_fu_30330_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30334_p1() {
    mul_ln78_254_fu_30334_p1 =  (sc_lv<5>) (zext_ln78_12_fu_30330_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30334_p2() {
    mul_ln78_254_fu_30334_p2 = (!mul_ln78_254_fu_30334_p0.read().is_01() || !mul_ln78_254_fu_30334_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_254_fu_30334_p0.read()) * sc_biguint<5>(mul_ln78_254_fu_30334_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30445_p0() {
    mul_ln78_255_fu_30445_p0 =  (sc_lv<5>) (zext_ln78_19_fu_30441_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30445_p1() {
    mul_ln78_255_fu_30445_p1 =  (sc_lv<5>) (zext_ln78_19_fu_30441_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30445_p2() {
    mul_ln78_255_fu_30445_p2 = (!mul_ln78_255_fu_30445_p0.read().is_01() || !mul_ln78_255_fu_30445_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_255_fu_30445_p0.read()) * sc_biguint<5>(mul_ln78_255_fu_30445_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30526_p0() {
    mul_ln78_256_fu_30526_p0 =  (sc_lv<5>) (zext_ln78_26_fu_30522_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30526_p1() {
    mul_ln78_256_fu_30526_p1 =  (sc_lv<5>) (zext_ln78_26_fu_30522_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30526_p2() {
    mul_ln78_256_fu_30526_p2 = (!mul_ln78_256_fu_30526_p0.read().is_01() || !mul_ln78_256_fu_30526_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_256_fu_30526_p0.read()) * sc_biguint<5>(mul_ln78_256_fu_30526_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30637_p0() {
    mul_ln78_257_fu_30637_p0 =  (sc_lv<5>) (zext_ln78_33_fu_30633_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30637_p1() {
    mul_ln78_257_fu_30637_p1 =  (sc_lv<5>) (zext_ln78_33_fu_30633_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30637_p2() {
    mul_ln78_257_fu_30637_p2 = (!mul_ln78_257_fu_30637_p0.read().is_01() || !mul_ln78_257_fu_30637_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_257_fu_30637_p0.read()) * sc_biguint<5>(mul_ln78_257_fu_30637_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30718_p0() {
    mul_ln78_258_fu_30718_p0 =  (sc_lv<5>) (zext_ln78_40_fu_30714_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30718_p1() {
    mul_ln78_258_fu_30718_p1 =  (sc_lv<5>) (zext_ln78_40_fu_30714_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30718_p2() {
    mul_ln78_258_fu_30718_p2 = (!mul_ln78_258_fu_30718_p0.read().is_01() || !mul_ln78_258_fu_30718_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_258_fu_30718_p0.read()) * sc_biguint<5>(mul_ln78_258_fu_30718_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30829_p0() {
    mul_ln78_259_fu_30829_p0 =  (sc_lv<5>) (zext_ln78_47_fu_30825_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30829_p1() {
    mul_ln78_259_fu_30829_p1 =  (sc_lv<5>) (zext_ln78_47_fu_30825_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30829_p2() {
    mul_ln78_259_fu_30829_p2 = (!mul_ln78_259_fu_30829_p0.read().is_01() || !mul_ln78_259_fu_30829_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_259_fu_30829_p0.read()) * sc_biguint<5>(mul_ln78_259_fu_30829_p1.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33178_p0() {
    mul_ln78_25_fu_33178_p0 =  (sc_lv<5>) (mul_ln78_25_fu_33178_p00.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33178_p00() {
    mul_ln78_25_fu_33178_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33178_p1() {
    mul_ln78_25_fu_33178_p1 =  (sc_lv<5>) (mul_ln78_25_fu_33178_p10.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33178_p10() {
    mul_ln78_25_fu_33178_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33178_p2() {
    mul_ln78_25_fu_33178_p2 = (!mul_ln78_25_fu_33178_p0.read().is_01() || !mul_ln78_25_fu_33178_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_25_fu_33178_p0.read()) * sc_biguint<5>(mul_ln78_25_fu_33178_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30910_p0() {
    mul_ln78_260_fu_30910_p0 =  (sc_lv<5>) (zext_ln78_54_fu_30906_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30910_p1() {
    mul_ln78_260_fu_30910_p1 =  (sc_lv<5>) (zext_ln78_54_fu_30906_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30910_p2() {
    mul_ln78_260_fu_30910_p2 = (!mul_ln78_260_fu_30910_p0.read().is_01() || !mul_ln78_260_fu_30910_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_260_fu_30910_p0.read()) * sc_biguint<5>(mul_ln78_260_fu_30910_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_31021_p0() {
    mul_ln78_261_fu_31021_p0 =  (sc_lv<5>) (zext_ln78_61_fu_31017_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_31021_p1() {
    mul_ln78_261_fu_31021_p1 =  (sc_lv<5>) (zext_ln78_61_fu_31017_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_31021_p2() {
    mul_ln78_261_fu_31021_p2 = (!mul_ln78_261_fu_31021_p0.read().is_01() || !mul_ln78_261_fu_31021_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_261_fu_31021_p0.read()) * sc_biguint<5>(mul_ln78_261_fu_31021_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31102_p0() {
    mul_ln78_262_fu_31102_p0 =  (sc_lv<5>) (zext_ln78_68_fu_31098_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31102_p1() {
    mul_ln78_262_fu_31102_p1 =  (sc_lv<5>) (zext_ln78_68_fu_31098_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31102_p2() {
    mul_ln78_262_fu_31102_p2 = (!mul_ln78_262_fu_31102_p0.read().is_01() || !mul_ln78_262_fu_31102_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_262_fu_31102_p0.read()) * sc_biguint<5>(mul_ln78_262_fu_31102_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31213_p0() {
    mul_ln78_263_fu_31213_p0 =  (sc_lv<5>) (zext_ln78_75_fu_31209_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31213_p1() {
    mul_ln78_263_fu_31213_p1 =  (sc_lv<5>) (zext_ln78_75_fu_31209_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31213_p2() {
    mul_ln78_263_fu_31213_p2 = (!mul_ln78_263_fu_31213_p0.read().is_01() || !mul_ln78_263_fu_31213_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_263_fu_31213_p0.read()) * sc_biguint<5>(mul_ln78_263_fu_31213_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31294_p0() {
    mul_ln78_264_fu_31294_p0 =  (sc_lv<5>) (zext_ln78_82_fu_31290_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31294_p1() {
    mul_ln78_264_fu_31294_p1 =  (sc_lv<5>) (zext_ln78_82_fu_31290_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31294_p2() {
    mul_ln78_264_fu_31294_p2 = (!mul_ln78_264_fu_31294_p0.read().is_01() || !mul_ln78_264_fu_31294_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_264_fu_31294_p0.read()) * sc_biguint<5>(mul_ln78_264_fu_31294_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31475_p0() {
    mul_ln78_265_fu_31475_p0 =  (sc_lv<5>) (zext_ln78_89_fu_31471_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31475_p1() {
    mul_ln78_265_fu_31475_p1 =  (sc_lv<5>) (zext_ln78_89_fu_31471_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31475_p2() {
    mul_ln78_265_fu_31475_p2 = (!mul_ln78_265_fu_31475_p0.read().is_01() || !mul_ln78_265_fu_31475_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_265_fu_31475_p0.read()) * sc_biguint<5>(mul_ln78_265_fu_31475_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31556_p0() {
    mul_ln78_266_fu_31556_p0 =  (sc_lv<5>) (zext_ln78_96_fu_31552_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31556_p1() {
    mul_ln78_266_fu_31556_p1 =  (sc_lv<5>) (zext_ln78_96_fu_31552_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31556_p2() {
    mul_ln78_266_fu_31556_p2 = (!mul_ln78_266_fu_31556_p0.read().is_01() || !mul_ln78_266_fu_31556_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_266_fu_31556_p0.read()) * sc_biguint<5>(mul_ln78_266_fu_31556_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31737_p0() {
    mul_ln78_267_fu_31737_p0 =  (sc_lv<5>) (zext_ln78_103_fu_31733_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31737_p1() {
    mul_ln78_267_fu_31737_p1 =  (sc_lv<5>) (zext_ln78_103_fu_31733_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31737_p2() {
    mul_ln78_267_fu_31737_p2 = (!mul_ln78_267_fu_31737_p0.read().is_01() || !mul_ln78_267_fu_31737_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_267_fu_31737_p0.read()) * sc_biguint<5>(mul_ln78_267_fu_31737_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31828_p0() {
    mul_ln78_268_fu_31828_p0 =  (sc_lv<5>) (zext_ln78_110_fu_31824_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31828_p1() {
    mul_ln78_268_fu_31828_p1 =  (sc_lv<5>) (zext_ln78_110_fu_31824_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31828_p2() {
    mul_ln78_268_fu_31828_p2 = (!mul_ln78_268_fu_31828_p0.read().is_01() || !mul_ln78_268_fu_31828_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_268_fu_31828_p0.read()) * sc_biguint<5>(mul_ln78_268_fu_31828_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_32009_p0() {
    mul_ln78_269_fu_32009_p0 =  (sc_lv<5>) (zext_ln78_117_fu_32005_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_32009_p1() {
    mul_ln78_269_fu_32009_p1 =  (sc_lv<5>) (zext_ln78_117_fu_32005_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_32009_p2() {
    mul_ln78_269_fu_32009_p2 = (!mul_ln78_269_fu_32009_p0.read().is_01() || !mul_ln78_269_fu_32009_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_269_fu_32009_p0.read()) * sc_biguint<5>(mul_ln78_269_fu_32009_p1.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33359_p0() {
    mul_ln78_26_fu_33359_p0 =  (sc_lv<5>) (mul_ln78_26_fu_33359_p00.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33359_p00() {
    mul_ln78_26_fu_33359_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33359_p1() {
    mul_ln78_26_fu_33359_p1 =  (sc_lv<5>) (mul_ln78_26_fu_33359_p10.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33359_p10() {
    mul_ln78_26_fu_33359_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33359_p2() {
    mul_ln78_26_fu_33359_p2 = (!mul_ln78_26_fu_33359_p0.read().is_01() || !mul_ln78_26_fu_33359_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_26_fu_33359_p0.read()) * sc_biguint<5>(mul_ln78_26_fu_33359_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32100_p0() {
    mul_ln78_270_fu_32100_p0 =  (sc_lv<5>) (zext_ln78_124_fu_32096_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32100_p1() {
    mul_ln78_270_fu_32100_p1 =  (sc_lv<5>) (zext_ln78_124_fu_32096_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32100_p2() {
    mul_ln78_270_fu_32100_p2 = (!mul_ln78_270_fu_32100_p0.read().is_01() || !mul_ln78_270_fu_32100_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_270_fu_32100_p0.read()) * sc_biguint<5>(mul_ln78_270_fu_32100_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32281_p0() {
    mul_ln78_271_fu_32281_p0 =  (sc_lv<5>) (zext_ln78_131_fu_32277_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32281_p1() {
    mul_ln78_271_fu_32281_p1 =  (sc_lv<5>) (zext_ln78_131_fu_32277_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32281_p2() {
    mul_ln78_271_fu_32281_p2 = (!mul_ln78_271_fu_32281_p0.read().is_01() || !mul_ln78_271_fu_32281_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_271_fu_32281_p0.read()) * sc_biguint<5>(mul_ln78_271_fu_32281_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32372_p0() {
    mul_ln78_272_fu_32372_p0 =  (sc_lv<5>) (zext_ln78_138_fu_32368_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32372_p1() {
    mul_ln78_272_fu_32372_p1 =  (sc_lv<5>) (zext_ln78_138_fu_32368_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32372_p2() {
    mul_ln78_272_fu_32372_p2 = (!mul_ln78_272_fu_32372_p0.read().is_01() || !mul_ln78_272_fu_32372_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_272_fu_32372_p0.read()) * sc_biguint<5>(mul_ln78_272_fu_32372_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32553_p0() {
    mul_ln78_273_fu_32553_p0 =  (sc_lv<5>) (zext_ln78_145_fu_32549_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32553_p1() {
    mul_ln78_273_fu_32553_p1 =  (sc_lv<5>) (zext_ln78_145_fu_32549_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32553_p2() {
    mul_ln78_273_fu_32553_p2 = (!mul_ln78_273_fu_32553_p0.read().is_01() || !mul_ln78_273_fu_32553_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_273_fu_32553_p0.read()) * sc_biguint<5>(mul_ln78_273_fu_32553_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32644_p0() {
    mul_ln78_274_fu_32644_p0 =  (sc_lv<5>) (zext_ln78_152_fu_32640_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32644_p1() {
    mul_ln78_274_fu_32644_p1 =  (sc_lv<5>) (zext_ln78_152_fu_32640_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32644_p2() {
    mul_ln78_274_fu_32644_p2 = (!mul_ln78_274_fu_32644_p0.read().is_01() || !mul_ln78_274_fu_32644_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_274_fu_32644_p0.read()) * sc_biguint<5>(mul_ln78_274_fu_32644_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32825_p0() {
    mul_ln78_275_fu_32825_p0 =  (sc_lv<5>) (zext_ln78_159_fu_32821_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32825_p1() {
    mul_ln78_275_fu_32825_p1 =  (sc_lv<5>) (zext_ln78_159_fu_32821_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32825_p2() {
    mul_ln78_275_fu_32825_p2 = (!mul_ln78_275_fu_32825_p0.read().is_01() || !mul_ln78_275_fu_32825_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_275_fu_32825_p0.read()) * sc_biguint<5>(mul_ln78_275_fu_32825_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32926_p0() {
    mul_ln78_276_fu_32926_p0 =  (sc_lv<5>) (zext_ln78_166_fu_32922_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32926_p1() {
    mul_ln78_276_fu_32926_p1 =  (sc_lv<5>) (zext_ln78_166_fu_32922_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32926_p2() {
    mul_ln78_276_fu_32926_p2 = (!mul_ln78_276_fu_32926_p0.read().is_01() || !mul_ln78_276_fu_32926_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_276_fu_32926_p0.read()) * sc_biguint<5>(mul_ln78_276_fu_32926_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33097_p0() {
    mul_ln78_277_fu_33097_p0 =  (sc_lv<5>) (zext_ln78_173_fu_33093_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33097_p1() {
    mul_ln78_277_fu_33097_p1 =  (sc_lv<5>) (zext_ln78_173_fu_33093_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33097_p2() {
    mul_ln78_277_fu_33097_p2 = (!mul_ln78_277_fu_33097_p0.read().is_01() || !mul_ln78_277_fu_33097_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_277_fu_33097_p0.read()) * sc_biguint<5>(mul_ln78_277_fu_33097_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33188_p0() {
    mul_ln78_278_fu_33188_p0 =  (sc_lv<5>) (zext_ln78_180_fu_33184_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33188_p1() {
    mul_ln78_278_fu_33188_p1 =  (sc_lv<5>) (zext_ln78_180_fu_33184_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33188_p2() {
    mul_ln78_278_fu_33188_p2 = (!mul_ln78_278_fu_33188_p0.read().is_01() || !mul_ln78_278_fu_33188_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_278_fu_33188_p0.read()) * sc_biguint<5>(mul_ln78_278_fu_33188_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33369_p0() {
    mul_ln78_279_fu_33369_p0 =  (sc_lv<5>) (zext_ln78_187_fu_33365_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33369_p1() {
    mul_ln78_279_fu_33369_p1 =  (sc_lv<5>) (zext_ln78_187_fu_33365_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33369_p2() {
    mul_ln78_279_fu_33369_p2 = (!mul_ln78_279_fu_33369_p0.read().is_01() || !mul_ln78_279_fu_33369_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_279_fu_33369_p0.read()) * sc_biguint<5>(mul_ln78_279_fu_33369_p1.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33460_p0() {
    mul_ln78_27_fu_33460_p0 =  (sc_lv<5>) (mul_ln78_27_fu_33460_p00.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33460_p00() {
    mul_ln78_27_fu_33460_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33460_p1() {
    mul_ln78_27_fu_33460_p1 =  (sc_lv<5>) (mul_ln78_27_fu_33460_p10.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33460_p10() {
    mul_ln78_27_fu_33460_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33460_p2() {
    mul_ln78_27_fu_33460_p2 = (!mul_ln78_27_fu_33460_p0.read().is_01() || !mul_ln78_27_fu_33460_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_27_fu_33460_p0.read()) * sc_biguint<5>(mul_ln78_27_fu_33460_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33470_p0() {
    mul_ln78_280_fu_33470_p0 =  (sc_lv<5>) (zext_ln78_194_fu_33466_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33470_p1() {
    mul_ln78_280_fu_33470_p1 =  (sc_lv<5>) (zext_ln78_194_fu_33466_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33470_p2() {
    mul_ln78_280_fu_33470_p2 = (!mul_ln78_280_fu_33470_p0.read().is_01() || !mul_ln78_280_fu_33470_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_280_fu_33470_p0.read()) * sc_biguint<5>(mul_ln78_280_fu_33470_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33641_p0() {
    mul_ln78_281_fu_33641_p0 =  (sc_lv<5>) (zext_ln78_201_fu_33637_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33641_p1() {
    mul_ln78_281_fu_33641_p1 =  (sc_lv<5>) (zext_ln78_201_fu_33637_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33641_p2() {
    mul_ln78_281_fu_33641_p2 = (!mul_ln78_281_fu_33641_p0.read().is_01() || !mul_ln78_281_fu_33641_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_281_fu_33641_p0.read()) * sc_biguint<5>(mul_ln78_281_fu_33641_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33742_p0() {
    mul_ln78_282_fu_33742_p0 =  (sc_lv<5>) (zext_ln78_208_fu_33738_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33742_p1() {
    mul_ln78_282_fu_33742_p1 =  (sc_lv<5>) (zext_ln78_208_fu_33738_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33742_p2() {
    mul_ln78_282_fu_33742_p2 = (!mul_ln78_282_fu_33742_p0.read().is_01() || !mul_ln78_282_fu_33742_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_282_fu_33742_p0.read()) * sc_biguint<5>(mul_ln78_282_fu_33742_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33913_p0() {
    mul_ln78_283_fu_33913_p0 =  (sc_lv<5>) (zext_ln78_215_fu_33909_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33913_p1() {
    mul_ln78_283_fu_33913_p1 =  (sc_lv<5>) (zext_ln78_215_fu_33909_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33913_p2() {
    mul_ln78_283_fu_33913_p2 = (!mul_ln78_283_fu_33913_p0.read().is_01() || !mul_ln78_283_fu_33913_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_283_fu_33913_p0.read()) * sc_biguint<5>(mul_ln78_283_fu_33913_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_34004_p0() {
    mul_ln78_284_fu_34004_p0 =  (sc_lv<5>) (zext_ln78_222_fu_34000_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_34004_p1() {
    mul_ln78_284_fu_34004_p1 =  (sc_lv<5>) (zext_ln78_222_fu_34000_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_34004_p2() {
    mul_ln78_284_fu_34004_p2 = (!mul_ln78_284_fu_34004_p0.read().is_01() || !mul_ln78_284_fu_34004_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_284_fu_34004_p0.read()) * sc_biguint<5>(mul_ln78_284_fu_34004_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34185_p0() {
    mul_ln78_285_fu_34185_p0 =  (sc_lv<5>) (zext_ln78_229_fu_34181_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34185_p1() {
    mul_ln78_285_fu_34185_p1 =  (sc_lv<5>) (zext_ln78_229_fu_34181_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34185_p2() {
    mul_ln78_285_fu_34185_p2 = (!mul_ln78_285_fu_34185_p0.read().is_01() || !mul_ln78_285_fu_34185_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_285_fu_34185_p0.read()) * sc_biguint<5>(mul_ln78_285_fu_34185_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34276_p0() {
    mul_ln78_286_fu_34276_p0 =  (sc_lv<5>) (zext_ln78_236_fu_34272_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34276_p1() {
    mul_ln78_286_fu_34276_p1 =  (sc_lv<5>) (zext_ln78_236_fu_34272_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34276_p2() {
    mul_ln78_286_fu_34276_p2 = (!mul_ln78_286_fu_34276_p0.read().is_01() || !mul_ln78_286_fu_34276_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_286_fu_34276_p0.read()) * sc_biguint<5>(mul_ln78_286_fu_34276_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34457_p0() {
    mul_ln78_287_fu_34457_p0 =  (sc_lv<5>) (zext_ln78_243_fu_34453_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34457_p1() {
    mul_ln78_287_fu_34457_p1 =  (sc_lv<5>) (zext_ln78_243_fu_34453_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34457_p2() {
    mul_ln78_287_fu_34457_p2 = (!mul_ln78_287_fu_34457_p0.read().is_01() || !mul_ln78_287_fu_34457_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_287_fu_34457_p0.read()) * sc_biguint<5>(mul_ln78_287_fu_34457_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34548_p0() {
    mul_ln78_288_fu_34548_p0 =  (sc_lv<5>) (zext_ln78_250_fu_34544_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34548_p1() {
    mul_ln78_288_fu_34548_p1 =  (sc_lv<5>) (zext_ln78_250_fu_34544_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34548_p2() {
    mul_ln78_288_fu_34548_p2 = (!mul_ln78_288_fu_34548_p0.read().is_01() || !mul_ln78_288_fu_34548_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_288_fu_34548_p0.read()) * sc_biguint<5>(mul_ln78_288_fu_34548_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34739_p0() {
    mul_ln78_289_fu_34739_p0 =  (sc_lv<5>) (zext_ln78_257_fu_34735_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34739_p1() {
    mul_ln78_289_fu_34739_p1 =  (sc_lv<5>) (zext_ln78_257_fu_34735_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34739_p2() {
    mul_ln78_289_fu_34739_p2 = (!mul_ln78_289_fu_34739_p0.read().is_01() || !mul_ln78_289_fu_34739_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_289_fu_34739_p0.read()) * sc_biguint<5>(mul_ln78_289_fu_34739_p1.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33631_p0() {
    mul_ln78_28_fu_33631_p0 =  (sc_lv<5>) (mul_ln78_28_fu_33631_p00.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33631_p00() {
    mul_ln78_28_fu_33631_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33631_p1() {
    mul_ln78_28_fu_33631_p1 =  (sc_lv<5>) (mul_ln78_28_fu_33631_p10.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33631_p10() {
    mul_ln78_28_fu_33631_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33631_p2() {
    mul_ln78_28_fu_33631_p2 = (!mul_ln78_28_fu_33631_p0.read().is_01() || !mul_ln78_28_fu_33631_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_28_fu_33631_p0.read()) * sc_biguint<5>(mul_ln78_28_fu_33631_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34820_p0() {
    mul_ln78_290_fu_34820_p0 =  (sc_lv<5>) (zext_ln78_264_fu_34816_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34820_p1() {
    mul_ln78_290_fu_34820_p1 =  (sc_lv<5>) (zext_ln78_264_fu_34816_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34820_p2() {
    mul_ln78_290_fu_34820_p2 = (!mul_ln78_290_fu_34820_p0.read().is_01() || !mul_ln78_290_fu_34820_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_290_fu_34820_p0.read()) * sc_biguint<5>(mul_ln78_290_fu_34820_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_35011_p0() {
    mul_ln78_291_fu_35011_p0 =  (sc_lv<5>) (zext_ln78_271_fu_35007_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_35011_p1() {
    mul_ln78_291_fu_35011_p1 =  (sc_lv<5>) (zext_ln78_271_fu_35007_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_35011_p2() {
    mul_ln78_291_fu_35011_p2 = (!mul_ln78_291_fu_35011_p0.read().is_01() || !mul_ln78_291_fu_35011_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_291_fu_35011_p0.read()) * sc_biguint<5>(mul_ln78_291_fu_35011_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35102_p0() {
    mul_ln78_292_fu_35102_p0 =  (sc_lv<5>) (zext_ln78_278_fu_35098_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35102_p1() {
    mul_ln78_292_fu_35102_p1 =  (sc_lv<5>) (zext_ln78_278_fu_35098_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35102_p2() {
    mul_ln78_292_fu_35102_p2 = (!mul_ln78_292_fu_35102_p0.read().is_01() || !mul_ln78_292_fu_35102_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_292_fu_35102_p0.read()) * sc_biguint<5>(mul_ln78_292_fu_35102_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35273_p0() {
    mul_ln78_293_fu_35273_p0 =  (sc_lv<5>) (zext_ln78_285_fu_35269_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35273_p1() {
    mul_ln78_293_fu_35273_p1 =  (sc_lv<5>) (zext_ln78_285_fu_35269_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35273_p2() {
    mul_ln78_293_fu_35273_p2 = (!mul_ln78_293_fu_35273_p0.read().is_01() || !mul_ln78_293_fu_35273_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_293_fu_35273_p0.read()) * sc_biguint<5>(mul_ln78_293_fu_35273_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35364_p0() {
    mul_ln78_294_fu_35364_p0 =  (sc_lv<5>) (zext_ln78_292_fu_35360_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35364_p1() {
    mul_ln78_294_fu_35364_p1 =  (sc_lv<5>) (zext_ln78_292_fu_35360_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35364_p2() {
    mul_ln78_294_fu_35364_p2 = (!mul_ln78_294_fu_35364_p0.read().is_01() || !mul_ln78_294_fu_35364_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_294_fu_35364_p0.read()) * sc_biguint<5>(mul_ln78_294_fu_35364_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35545_p0() {
    mul_ln78_295_fu_35545_p0 =  (sc_lv<5>) (zext_ln78_299_fu_35541_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35545_p1() {
    mul_ln78_295_fu_35545_p1 =  (sc_lv<5>) (zext_ln78_299_fu_35541_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35545_p2() {
    mul_ln78_295_fu_35545_p2 = (!mul_ln78_295_fu_35545_p0.read().is_01() || !mul_ln78_295_fu_35545_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_295_fu_35545_p0.read()) * sc_biguint<5>(mul_ln78_295_fu_35545_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35636_p0() {
    mul_ln78_296_fu_35636_p0 =  (sc_lv<5>) (zext_ln78_306_fu_35632_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35636_p1() {
    mul_ln78_296_fu_35636_p1 =  (sc_lv<5>) (zext_ln78_306_fu_35632_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35636_p2() {
    mul_ln78_296_fu_35636_p2 = (!mul_ln78_296_fu_35636_p0.read().is_01() || !mul_ln78_296_fu_35636_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_296_fu_35636_p0.read()) * sc_biguint<5>(mul_ln78_296_fu_35636_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35827_p0() {
    mul_ln78_297_fu_35827_p0 =  (sc_lv<5>) (zext_ln78_313_fu_35823_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35827_p1() {
    mul_ln78_297_fu_35827_p1 =  (sc_lv<5>) (zext_ln78_313_fu_35823_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35827_p2() {
    mul_ln78_297_fu_35827_p2 = (!mul_ln78_297_fu_35827_p0.read().is_01() || !mul_ln78_297_fu_35827_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_297_fu_35827_p0.read()) * sc_biguint<5>(mul_ln78_297_fu_35827_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35908_p0() {
    mul_ln78_298_fu_35908_p0 =  (sc_lv<5>) (zext_ln78_320_fu_35904_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35908_p1() {
    mul_ln78_298_fu_35908_p1 =  (sc_lv<5>) (zext_ln78_320_fu_35904_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35908_p2() {
    mul_ln78_298_fu_35908_p2 = (!mul_ln78_298_fu_35908_p0.read().is_01() || !mul_ln78_298_fu_35908_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_298_fu_35908_p0.read()) * sc_biguint<5>(mul_ln78_298_fu_35908_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36089_p0() {
    mul_ln78_299_fu_36089_p0 =  (sc_lv<5>) (zext_ln78_327_fu_36085_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36089_p1() {
    mul_ln78_299_fu_36089_p1 =  (sc_lv<5>) (zext_ln78_327_fu_36085_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36089_p2() {
    mul_ln78_299_fu_36089_p2 = (!mul_ln78_299_fu_36089_p0.read().is_01() || !mul_ln78_299_fu_36089_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_299_fu_36089_p0.read()) * sc_biguint<5>(mul_ln78_299_fu_36089_p1.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33732_p0() {
    mul_ln78_29_fu_33732_p0 =  (sc_lv<5>) (mul_ln78_29_fu_33732_p00.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33732_p00() {
    mul_ln78_29_fu_33732_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33732_p1() {
    mul_ln78_29_fu_33732_p1 =  (sc_lv<5>) (mul_ln78_29_fu_33732_p10.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33732_p10() {
    mul_ln78_29_fu_33732_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33732_p2() {
    mul_ln78_29_fu_33732_p2 = (!mul_ln78_29_fu_33732_p0.read().is_01() || !mul_ln78_29_fu_33732_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_29_fu_33732_p0.read()) * sc_biguint<5>(mul_ln78_29_fu_33732_p1.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30435_p0() {
    mul_ln78_2_fu_30435_p0 =  (sc_lv<5>) (mul_ln78_2_fu_30435_p00.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30435_p00() {
    mul_ln78_2_fu_30435_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30435_p1() {
    mul_ln78_2_fu_30435_p1 =  (sc_lv<5>) (mul_ln78_2_fu_30435_p10.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30435_p10() {
    mul_ln78_2_fu_30435_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30435_p2() {
    mul_ln78_2_fu_30435_p2 = (!mul_ln78_2_fu_30435_p0.read().is_01() || !mul_ln78_2_fu_30435_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_2_fu_30435_p0.read()) * sc_biguint<5>(mul_ln78_2_fu_30435_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36180_p0() {
    mul_ln78_300_fu_36180_p0 =  (sc_lv<5>) (zext_ln78_334_fu_36176_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36180_p1() {
    mul_ln78_300_fu_36180_p1 =  (sc_lv<5>) (zext_ln78_334_fu_36176_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36180_p2() {
    mul_ln78_300_fu_36180_p2 = (!mul_ln78_300_fu_36180_p0.read().is_01() || !mul_ln78_300_fu_36180_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_300_fu_36180_p0.read()) * sc_biguint<5>(mul_ln78_300_fu_36180_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36371_p0() {
    mul_ln78_301_fu_36371_p0 =  (sc_lv<5>) (zext_ln78_341_fu_36367_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36371_p1() {
    mul_ln78_301_fu_36371_p1 =  (sc_lv<5>) (zext_ln78_341_fu_36367_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36371_p2() {
    mul_ln78_301_fu_36371_p2 = (!mul_ln78_301_fu_36371_p0.read().is_01() || !mul_ln78_301_fu_36371_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_301_fu_36371_p0.read()) * sc_biguint<5>(mul_ln78_301_fu_36371_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36462_p0() {
    mul_ln78_302_fu_36462_p0 =  (sc_lv<5>) (zext_ln78_348_fu_36458_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36462_p1() {
    mul_ln78_302_fu_36462_p1 =  (sc_lv<5>) (zext_ln78_348_fu_36458_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36462_p2() {
    mul_ln78_302_fu_36462_p2 = (!mul_ln78_302_fu_36462_p0.read().is_01() || !mul_ln78_302_fu_36462_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_302_fu_36462_p0.read()) * sc_biguint<5>(mul_ln78_302_fu_36462_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36633_p0() {
    mul_ln78_303_fu_36633_p0 =  (sc_lv<5>) (zext_ln78_355_fu_36629_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36633_p1() {
    mul_ln78_303_fu_36633_p1 =  (sc_lv<5>) (zext_ln78_355_fu_36629_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36633_p2() {
    mul_ln78_303_fu_36633_p2 = (!mul_ln78_303_fu_36633_p0.read().is_01() || !mul_ln78_303_fu_36633_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_303_fu_36633_p0.read()) * sc_biguint<5>(mul_ln78_303_fu_36633_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36724_p0() {
    mul_ln78_304_fu_36724_p0 =  (sc_lv<5>) (zext_ln78_362_fu_36720_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36724_p1() {
    mul_ln78_304_fu_36724_p1 =  (sc_lv<5>) (zext_ln78_362_fu_36720_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36724_p2() {
    mul_ln78_304_fu_36724_p2 = (!mul_ln78_304_fu_36724_p0.read().is_01() || !mul_ln78_304_fu_36724_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_304_fu_36724_p0.read()) * sc_biguint<5>(mul_ln78_304_fu_36724_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36905_p0() {
    mul_ln78_305_fu_36905_p0 =  (sc_lv<5>) (zext_ln78_369_fu_36901_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36905_p1() {
    mul_ln78_305_fu_36905_p1 =  (sc_lv<5>) (zext_ln78_369_fu_36901_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36905_p2() {
    mul_ln78_305_fu_36905_p2 = (!mul_ln78_305_fu_36905_p0.read().is_01() || !mul_ln78_305_fu_36905_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_305_fu_36905_p0.read()) * sc_biguint<5>(mul_ln78_305_fu_36905_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36996_p0() {
    mul_ln78_306_fu_36996_p0 =  (sc_lv<5>) (zext_ln78_376_fu_36992_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36996_p1() {
    mul_ln78_306_fu_36996_p1 =  (sc_lv<5>) (zext_ln78_376_fu_36992_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36996_p2() {
    mul_ln78_306_fu_36996_p2 = (!mul_ln78_306_fu_36996_p0.read().is_01() || !mul_ln78_306_fu_36996_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_306_fu_36996_p0.read()) * sc_biguint<5>(mul_ln78_306_fu_36996_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37177_p0() {
    mul_ln78_307_fu_37177_p0 =  (sc_lv<5>) (zext_ln78_383_fu_37173_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37177_p1() {
    mul_ln78_307_fu_37177_p1 =  (sc_lv<5>) (zext_ln78_383_fu_37173_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37177_p2() {
    mul_ln78_307_fu_37177_p2 = (!mul_ln78_307_fu_37177_p0.read().is_01() || !mul_ln78_307_fu_37177_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_307_fu_37177_p0.read()) * sc_biguint<5>(mul_ln78_307_fu_37177_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37268_p0() {
    mul_ln78_308_fu_37268_p0 =  (sc_lv<5>) (zext_ln78_390_fu_37264_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37268_p1() {
    mul_ln78_308_fu_37268_p1 =  (sc_lv<5>) (zext_ln78_390_fu_37264_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37268_p2() {
    mul_ln78_308_fu_37268_p2 = (!mul_ln78_308_fu_37268_p0.read().is_01() || !mul_ln78_308_fu_37268_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_308_fu_37268_p0.read()) * sc_biguint<5>(mul_ln78_308_fu_37268_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37449_p0() {
    mul_ln78_309_fu_37449_p0 =  (sc_lv<5>) (zext_ln78_397_fu_37445_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37449_p1() {
    mul_ln78_309_fu_37449_p1 =  (sc_lv<5>) (zext_ln78_397_fu_37445_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37449_p2() {
    mul_ln78_309_fu_37449_p2 = (!mul_ln78_309_fu_37449_p0.read().is_01() || !mul_ln78_309_fu_37449_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_309_fu_37449_p0.read()) * sc_biguint<5>(mul_ln78_309_fu_37449_p1.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33903_p0() {
    mul_ln78_30_fu_33903_p0 =  (sc_lv<5>) (mul_ln78_30_fu_33903_p00.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33903_p00() {
    mul_ln78_30_fu_33903_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33903_p1() {
    mul_ln78_30_fu_33903_p1 =  (sc_lv<5>) (mul_ln78_30_fu_33903_p10.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33903_p10() {
    mul_ln78_30_fu_33903_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33903_p2() {
    mul_ln78_30_fu_33903_p2 = (!mul_ln78_30_fu_33903_p0.read().is_01() || !mul_ln78_30_fu_33903_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_30_fu_33903_p0.read()) * sc_biguint<5>(mul_ln78_30_fu_33903_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37540_p0() {
    mul_ln78_310_fu_37540_p0 =  (sc_lv<5>) (zext_ln78_404_fu_37536_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37540_p1() {
    mul_ln78_310_fu_37540_p1 =  (sc_lv<5>) (zext_ln78_404_fu_37536_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37540_p2() {
    mul_ln78_310_fu_37540_p2 = (!mul_ln78_310_fu_37540_p0.read().is_01() || !mul_ln78_310_fu_37540_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_310_fu_37540_p0.read()) * sc_biguint<5>(mul_ln78_310_fu_37540_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37721_p0() {
    mul_ln78_311_fu_37721_p0 =  (sc_lv<5>) (zext_ln78_411_fu_37717_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37721_p1() {
    mul_ln78_311_fu_37721_p1 =  (sc_lv<5>) (zext_ln78_411_fu_37717_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37721_p2() {
    mul_ln78_311_fu_37721_p2 = (!mul_ln78_311_fu_37721_p0.read().is_01() || !mul_ln78_311_fu_37721_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_311_fu_37721_p0.read()) * sc_biguint<5>(mul_ln78_311_fu_37721_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37812_p0() {
    mul_ln78_312_fu_37812_p0 =  (sc_lv<5>) (zext_ln78_418_fu_37808_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37812_p1() {
    mul_ln78_312_fu_37812_p1 =  (sc_lv<5>) (zext_ln78_418_fu_37808_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37812_p2() {
    mul_ln78_312_fu_37812_p2 = (!mul_ln78_312_fu_37812_p0.read().is_01() || !mul_ln78_312_fu_37812_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_312_fu_37812_p0.read()) * sc_biguint<5>(mul_ln78_312_fu_37812_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37993_p0() {
    mul_ln78_313_fu_37993_p0 =  (sc_lv<5>) (zext_ln78_425_fu_37989_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37993_p1() {
    mul_ln78_313_fu_37993_p1 =  (sc_lv<5>) (zext_ln78_425_fu_37989_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37993_p2() {
    mul_ln78_313_fu_37993_p2 = (!mul_ln78_313_fu_37993_p0.read().is_01() || !mul_ln78_313_fu_37993_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_313_fu_37993_p0.read()) * sc_biguint<5>(mul_ln78_313_fu_37993_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38084_p0() {
    mul_ln78_314_fu_38084_p0 =  (sc_lv<5>) (zext_ln78_432_fu_38080_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38084_p1() {
    mul_ln78_314_fu_38084_p1 =  (sc_lv<5>) (zext_ln78_432_fu_38080_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38084_p2() {
    mul_ln78_314_fu_38084_p2 = (!mul_ln78_314_fu_38084_p0.read().is_01() || !mul_ln78_314_fu_38084_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_314_fu_38084_p0.read()) * sc_biguint<5>(mul_ln78_314_fu_38084_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38265_p0() {
    mul_ln78_315_fu_38265_p0 =  (sc_lv<5>) (zext_ln78_439_fu_38261_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38265_p1() {
    mul_ln78_315_fu_38265_p1 =  (sc_lv<5>) (zext_ln78_439_fu_38261_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38265_p2() {
    mul_ln78_315_fu_38265_p2 = (!mul_ln78_315_fu_38265_p0.read().is_01() || !mul_ln78_315_fu_38265_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_315_fu_38265_p0.read()) * sc_biguint<5>(mul_ln78_315_fu_38265_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38366_p0() {
    mul_ln78_316_fu_38366_p0 =  (sc_lv<5>) (zext_ln78_446_fu_38362_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38366_p1() {
    mul_ln78_316_fu_38366_p1 =  (sc_lv<5>) (zext_ln78_446_fu_38362_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38366_p2() {
    mul_ln78_316_fu_38366_p2 = (!mul_ln78_316_fu_38366_p0.read().is_01() || !mul_ln78_316_fu_38366_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_316_fu_38366_p0.read()) * sc_biguint<5>(mul_ln78_316_fu_38366_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38537_p0() {
    mul_ln78_317_fu_38537_p0 =  (sc_lv<5>) (zext_ln78_453_fu_38533_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38537_p1() {
    mul_ln78_317_fu_38537_p1 =  (sc_lv<5>) (zext_ln78_453_fu_38533_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38537_p2() {
    mul_ln78_317_fu_38537_p2 = (!mul_ln78_317_fu_38537_p0.read().is_01() || !mul_ln78_317_fu_38537_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_317_fu_38537_p0.read()) * sc_biguint<5>(mul_ln78_317_fu_38537_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38628_p0() {
    mul_ln78_318_fu_38628_p0 =  (sc_lv<5>) (zext_ln78_460_fu_38624_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38628_p1() {
    mul_ln78_318_fu_38628_p1 =  (sc_lv<5>) (zext_ln78_460_fu_38624_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38628_p2() {
    mul_ln78_318_fu_38628_p2 = (!mul_ln78_318_fu_38628_p0.read().is_01() || !mul_ln78_318_fu_38628_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_318_fu_38628_p0.read()) * sc_biguint<5>(mul_ln78_318_fu_38628_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38819_p0() {
    mul_ln78_319_fu_38819_p0 =  (sc_lv<5>) (zext_ln78_467_fu_38815_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38819_p1() {
    mul_ln78_319_fu_38819_p1 =  (sc_lv<5>) (zext_ln78_467_fu_38815_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38819_p2() {
    mul_ln78_319_fu_38819_p2 = (!mul_ln78_319_fu_38819_p0.read().is_01() || !mul_ln78_319_fu_38819_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_319_fu_38819_p0.read()) * sc_biguint<5>(mul_ln78_319_fu_38819_p1.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33994_p0() {
    mul_ln78_31_fu_33994_p0 =  (sc_lv<5>) (mul_ln78_31_fu_33994_p00.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33994_p00() {
    mul_ln78_31_fu_33994_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33994_p1() {
    mul_ln78_31_fu_33994_p1 =  (sc_lv<5>) (mul_ln78_31_fu_33994_p10.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33994_p10() {
    mul_ln78_31_fu_33994_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33994_p2() {
    mul_ln78_31_fu_33994_p2 = (!mul_ln78_31_fu_33994_p0.read().is_01() || !mul_ln78_31_fu_33994_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_31_fu_33994_p0.read()) * sc_biguint<5>(mul_ln78_31_fu_33994_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38900_p0() {
    mul_ln78_320_fu_38900_p0 =  (sc_lv<5>) (zext_ln78_474_fu_38896_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38900_p1() {
    mul_ln78_320_fu_38900_p1 =  (sc_lv<5>) (zext_ln78_474_fu_38896_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38900_p2() {
    mul_ln78_320_fu_38900_p2 = (!mul_ln78_320_fu_38900_p0.read().is_01() || !mul_ln78_320_fu_38900_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_320_fu_38900_p0.read()) * sc_biguint<5>(mul_ln78_320_fu_38900_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39081_p0() {
    mul_ln78_321_fu_39081_p0 =  (sc_lv<5>) (zext_ln78_481_fu_39077_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39081_p1() {
    mul_ln78_321_fu_39081_p1 =  (sc_lv<5>) (zext_ln78_481_fu_39077_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39081_p2() {
    mul_ln78_321_fu_39081_p2 = (!mul_ln78_321_fu_39081_p0.read().is_01() || !mul_ln78_321_fu_39081_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_321_fu_39081_p0.read()) * sc_biguint<5>(mul_ln78_321_fu_39081_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39172_p0() {
    mul_ln78_322_fu_39172_p0 =  (sc_lv<5>) (zext_ln78_488_fu_39168_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39172_p1() {
    mul_ln78_322_fu_39172_p1 =  (sc_lv<5>) (zext_ln78_488_fu_39168_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39172_p2() {
    mul_ln78_322_fu_39172_p2 = (!mul_ln78_322_fu_39172_p0.read().is_01() || !mul_ln78_322_fu_39172_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_322_fu_39172_p0.read()) * sc_biguint<5>(mul_ln78_322_fu_39172_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39353_p0() {
    mul_ln78_323_fu_39353_p0 =  (sc_lv<5>) (zext_ln78_495_fu_39349_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39353_p1() {
    mul_ln78_323_fu_39353_p1 =  (sc_lv<5>) (zext_ln78_495_fu_39349_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39353_p2() {
    mul_ln78_323_fu_39353_p2 = (!mul_ln78_323_fu_39353_p0.read().is_01() || !mul_ln78_323_fu_39353_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_323_fu_39353_p0.read()) * sc_biguint<5>(mul_ln78_323_fu_39353_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39444_p0() {
    mul_ln78_324_fu_39444_p0 =  (sc_lv<5>) (zext_ln78_502_fu_39440_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39444_p1() {
    mul_ln78_324_fu_39444_p1 =  (sc_lv<5>) (zext_ln78_502_fu_39440_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39444_p2() {
    mul_ln78_324_fu_39444_p2 = (!mul_ln78_324_fu_39444_p0.read().is_01() || !mul_ln78_324_fu_39444_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_324_fu_39444_p0.read()) * sc_biguint<5>(mul_ln78_324_fu_39444_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39635_p0() {
    mul_ln78_325_fu_39635_p0 =  (sc_lv<5>) (zext_ln78_509_fu_39631_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39635_p1() {
    mul_ln78_325_fu_39635_p1 =  (sc_lv<5>) (zext_ln78_509_fu_39631_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39635_p2() {
    mul_ln78_325_fu_39635_p2 = (!mul_ln78_325_fu_39635_p0.read().is_01() || !mul_ln78_325_fu_39635_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_325_fu_39635_p0.read()) * sc_biguint<5>(mul_ln78_325_fu_39635_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39716_p0() {
    mul_ln78_326_fu_39716_p0 =  (sc_lv<5>) (zext_ln78_516_fu_39712_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39716_p1() {
    mul_ln78_326_fu_39716_p1 =  (sc_lv<5>) (zext_ln78_516_fu_39712_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39716_p2() {
    mul_ln78_326_fu_39716_p2 = (!mul_ln78_326_fu_39716_p0.read().is_01() || !mul_ln78_326_fu_39716_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_326_fu_39716_p0.read()) * sc_biguint<5>(mul_ln78_326_fu_39716_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39897_p0() {
    mul_ln78_327_fu_39897_p0 =  (sc_lv<5>) (zext_ln78_523_fu_39893_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39897_p1() {
    mul_ln78_327_fu_39897_p1 =  (sc_lv<5>) (zext_ln78_523_fu_39893_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39897_p2() {
    mul_ln78_327_fu_39897_p2 = (!mul_ln78_327_fu_39897_p0.read().is_01() || !mul_ln78_327_fu_39897_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_327_fu_39897_p0.read()) * sc_biguint<5>(mul_ln78_327_fu_39897_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39988_p0() {
    mul_ln78_328_fu_39988_p0 =  (sc_lv<5>) (zext_ln78_530_fu_39984_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39988_p1() {
    mul_ln78_328_fu_39988_p1 =  (sc_lv<5>) (zext_ln78_530_fu_39984_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39988_p2() {
    mul_ln78_328_fu_39988_p2 = (!mul_ln78_328_fu_39988_p0.read().is_01() || !mul_ln78_328_fu_39988_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_328_fu_39988_p0.read()) * sc_biguint<5>(mul_ln78_328_fu_39988_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40179_p0() {
    mul_ln78_329_fu_40179_p0 =  (sc_lv<5>) (zext_ln78_537_fu_40175_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40179_p1() {
    mul_ln78_329_fu_40179_p1 =  (sc_lv<5>) (zext_ln78_537_fu_40175_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40179_p2() {
    mul_ln78_329_fu_40179_p2 = (!mul_ln78_329_fu_40179_p0.read().is_01() || !mul_ln78_329_fu_40179_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_329_fu_40179_p0.read()) * sc_biguint<5>(mul_ln78_329_fu_40179_p1.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34175_p0() {
    mul_ln78_32_fu_34175_p0 =  (sc_lv<5>) (mul_ln78_32_fu_34175_p00.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34175_p00() {
    mul_ln78_32_fu_34175_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34175_p1() {
    mul_ln78_32_fu_34175_p1 =  (sc_lv<5>) (mul_ln78_32_fu_34175_p10.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34175_p10() {
    mul_ln78_32_fu_34175_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34175_p2() {
    mul_ln78_32_fu_34175_p2 = (!mul_ln78_32_fu_34175_p0.read().is_01() || !mul_ln78_32_fu_34175_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_32_fu_34175_p0.read()) * sc_biguint<5>(mul_ln78_32_fu_34175_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40270_p0() {
    mul_ln78_330_fu_40270_p0 =  (sc_lv<5>) (zext_ln78_544_fu_40266_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40270_p1() {
    mul_ln78_330_fu_40270_p1 =  (sc_lv<5>) (zext_ln78_544_fu_40266_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40270_p2() {
    mul_ln78_330_fu_40270_p2 = (!mul_ln78_330_fu_40270_p0.read().is_01() || !mul_ln78_330_fu_40270_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_330_fu_40270_p0.read()) * sc_biguint<5>(mul_ln78_330_fu_40270_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40441_p0() {
    mul_ln78_331_fu_40441_p0 =  (sc_lv<5>) (zext_ln78_551_fu_40437_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40441_p1() {
    mul_ln78_331_fu_40441_p1 =  (sc_lv<5>) (zext_ln78_551_fu_40437_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40441_p2() {
    mul_ln78_331_fu_40441_p2 = (!mul_ln78_331_fu_40441_p0.read().is_01() || !mul_ln78_331_fu_40441_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_331_fu_40441_p0.read()) * sc_biguint<5>(mul_ln78_331_fu_40441_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40532_p0() {
    mul_ln78_332_fu_40532_p0 =  (sc_lv<5>) (zext_ln78_558_fu_40528_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40532_p1() {
    mul_ln78_332_fu_40532_p1 =  (sc_lv<5>) (zext_ln78_558_fu_40528_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40532_p2() {
    mul_ln78_332_fu_40532_p2 = (!mul_ln78_332_fu_40532_p0.read().is_01() || !mul_ln78_332_fu_40532_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_332_fu_40532_p0.read()) * sc_biguint<5>(mul_ln78_332_fu_40532_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40713_p0() {
    mul_ln78_333_fu_40713_p0 =  (sc_lv<5>) (zext_ln78_565_fu_40709_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40713_p1() {
    mul_ln78_333_fu_40713_p1 =  (sc_lv<5>) (zext_ln78_565_fu_40709_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40713_p2() {
    mul_ln78_333_fu_40713_p2 = (!mul_ln78_333_fu_40713_p0.read().is_01() || !mul_ln78_333_fu_40713_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_333_fu_40713_p0.read()) * sc_biguint<5>(mul_ln78_333_fu_40713_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40804_p0() {
    mul_ln78_334_fu_40804_p0 =  (sc_lv<5>) (zext_ln78_572_fu_40800_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40804_p1() {
    mul_ln78_334_fu_40804_p1 =  (sc_lv<5>) (zext_ln78_572_fu_40800_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40804_p2() {
    mul_ln78_334_fu_40804_p2 = (!mul_ln78_334_fu_40804_p0.read().is_01() || !mul_ln78_334_fu_40804_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_334_fu_40804_p0.read()) * sc_biguint<5>(mul_ln78_334_fu_40804_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40985_p0() {
    mul_ln78_335_fu_40985_p0 =  (sc_lv<5>) (zext_ln78_579_fu_40981_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40985_p1() {
    mul_ln78_335_fu_40985_p1 =  (sc_lv<5>) (zext_ln78_579_fu_40981_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40985_p2() {
    mul_ln78_335_fu_40985_p2 = (!mul_ln78_335_fu_40985_p0.read().is_01() || !mul_ln78_335_fu_40985_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_335_fu_40985_p0.read()) * sc_biguint<5>(mul_ln78_335_fu_40985_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41076_p0() {
    mul_ln78_336_fu_41076_p0 =  (sc_lv<5>) (zext_ln78_586_fu_41072_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41076_p1() {
    mul_ln78_336_fu_41076_p1 =  (sc_lv<5>) (zext_ln78_586_fu_41072_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41076_p2() {
    mul_ln78_336_fu_41076_p2 = (!mul_ln78_336_fu_41076_p0.read().is_01() || !mul_ln78_336_fu_41076_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_336_fu_41076_p0.read()) * sc_biguint<5>(mul_ln78_336_fu_41076_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41257_p0() {
    mul_ln78_337_fu_41257_p0 =  (sc_lv<5>) (zext_ln78_593_fu_41253_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41257_p1() {
    mul_ln78_337_fu_41257_p1 =  (sc_lv<5>) (zext_ln78_593_fu_41253_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41257_p2() {
    mul_ln78_337_fu_41257_p2 = (!mul_ln78_337_fu_41257_p0.read().is_01() || !mul_ln78_337_fu_41257_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_337_fu_41257_p0.read()) * sc_biguint<5>(mul_ln78_337_fu_41257_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41348_p0() {
    mul_ln78_338_fu_41348_p0 =  (sc_lv<5>) (zext_ln78_600_fu_41344_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41348_p1() {
    mul_ln78_338_fu_41348_p1 =  (sc_lv<5>) (zext_ln78_600_fu_41344_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41348_p2() {
    mul_ln78_338_fu_41348_p2 = (!mul_ln78_338_fu_41348_p0.read().is_01() || !mul_ln78_338_fu_41348_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_338_fu_41348_p0.read()) * sc_biguint<5>(mul_ln78_338_fu_41348_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41529_p0() {
    mul_ln78_339_fu_41529_p0 =  (sc_lv<5>) (zext_ln78_607_fu_41525_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41529_p1() {
    mul_ln78_339_fu_41529_p1 =  (sc_lv<5>) (zext_ln78_607_fu_41525_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41529_p2() {
    mul_ln78_339_fu_41529_p2 = (!mul_ln78_339_fu_41529_p0.read().is_01() || !mul_ln78_339_fu_41529_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_339_fu_41529_p0.read()) * sc_biguint<5>(mul_ln78_339_fu_41529_p1.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34266_p0() {
    mul_ln78_33_fu_34266_p0 =  (sc_lv<5>) (mul_ln78_33_fu_34266_p00.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34266_p00() {
    mul_ln78_33_fu_34266_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34266_p1() {
    mul_ln78_33_fu_34266_p1 =  (sc_lv<5>) (mul_ln78_33_fu_34266_p10.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34266_p10() {
    mul_ln78_33_fu_34266_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34266_p2() {
    mul_ln78_33_fu_34266_p2 = (!mul_ln78_33_fu_34266_p0.read().is_01() || !mul_ln78_33_fu_34266_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_33_fu_34266_p0.read()) * sc_biguint<5>(mul_ln78_33_fu_34266_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41620_p0() {
    mul_ln78_340_fu_41620_p0 =  (sc_lv<5>) (zext_ln78_614_fu_41616_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41620_p1() {
    mul_ln78_340_fu_41620_p1 =  (sc_lv<5>) (zext_ln78_614_fu_41616_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41620_p2() {
    mul_ln78_340_fu_41620_p2 = (!mul_ln78_340_fu_41620_p0.read().is_01() || !mul_ln78_340_fu_41620_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_340_fu_41620_p0.read()) * sc_biguint<5>(mul_ln78_340_fu_41620_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41801_p0() {
    mul_ln78_341_fu_41801_p0 =  (sc_lv<5>) (zext_ln78_621_fu_41797_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41801_p1() {
    mul_ln78_341_fu_41801_p1 =  (sc_lv<5>) (zext_ln78_621_fu_41797_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41801_p2() {
    mul_ln78_341_fu_41801_p2 = (!mul_ln78_341_fu_41801_p0.read().is_01() || !mul_ln78_341_fu_41801_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_341_fu_41801_p0.read()) * sc_biguint<5>(mul_ln78_341_fu_41801_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41892_p0() {
    mul_ln78_342_fu_41892_p0 =  (sc_lv<5>) (zext_ln78_628_fu_41888_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41892_p1() {
    mul_ln78_342_fu_41892_p1 =  (sc_lv<5>) (zext_ln78_628_fu_41888_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41892_p2() {
    mul_ln78_342_fu_41892_p2 = (!mul_ln78_342_fu_41892_p0.read().is_01() || !mul_ln78_342_fu_41892_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_342_fu_41892_p0.read()) * sc_biguint<5>(mul_ln78_342_fu_41892_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42073_p0() {
    mul_ln78_343_fu_42073_p0 =  (sc_lv<5>) (zext_ln78_635_fu_42069_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42073_p1() {
    mul_ln78_343_fu_42073_p1 =  (sc_lv<5>) (zext_ln78_635_fu_42069_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42073_p2() {
    mul_ln78_343_fu_42073_p2 = (!mul_ln78_343_fu_42073_p0.read().is_01() || !mul_ln78_343_fu_42073_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_343_fu_42073_p0.read()) * sc_biguint<5>(mul_ln78_343_fu_42073_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42164_p0() {
    mul_ln78_344_fu_42164_p0 =  (sc_lv<5>) (zext_ln78_642_fu_42160_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42164_p1() {
    mul_ln78_344_fu_42164_p1 =  (sc_lv<5>) (zext_ln78_642_fu_42160_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42164_p2() {
    mul_ln78_344_fu_42164_p2 = (!mul_ln78_344_fu_42164_p0.read().is_01() || !mul_ln78_344_fu_42164_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_344_fu_42164_p0.read()) * sc_biguint<5>(mul_ln78_344_fu_42164_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42345_p0() {
    mul_ln78_345_fu_42345_p0 =  (sc_lv<5>) (zext_ln78_649_fu_42341_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42345_p1() {
    mul_ln78_345_fu_42345_p1 =  (sc_lv<5>) (zext_ln78_649_fu_42341_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42345_p2() {
    mul_ln78_345_fu_42345_p2 = (!mul_ln78_345_fu_42345_p0.read().is_01() || !mul_ln78_345_fu_42345_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_345_fu_42345_p0.read()) * sc_biguint<5>(mul_ln78_345_fu_42345_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42436_p0() {
    mul_ln78_346_fu_42436_p0 =  (sc_lv<5>) (zext_ln78_656_fu_42432_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42436_p1() {
    mul_ln78_346_fu_42436_p1 =  (sc_lv<5>) (zext_ln78_656_fu_42432_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42436_p2() {
    mul_ln78_346_fu_42436_p2 = (!mul_ln78_346_fu_42436_p0.read().is_01() || !mul_ln78_346_fu_42436_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_346_fu_42436_p0.read()) * sc_biguint<5>(mul_ln78_346_fu_42436_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42617_p0() {
    mul_ln78_347_fu_42617_p0 =  (sc_lv<5>) (zext_ln78_663_fu_42613_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42617_p1() {
    mul_ln78_347_fu_42617_p1 =  (sc_lv<5>) (zext_ln78_663_fu_42613_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42617_p2() {
    mul_ln78_347_fu_42617_p2 = (!mul_ln78_347_fu_42617_p0.read().is_01() || !mul_ln78_347_fu_42617_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_347_fu_42617_p0.read()) * sc_biguint<5>(mul_ln78_347_fu_42617_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42708_p0() {
    mul_ln78_348_fu_42708_p0 =  (sc_lv<5>) (zext_ln78_670_fu_42704_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42708_p1() {
    mul_ln78_348_fu_42708_p1 =  (sc_lv<5>) (zext_ln78_670_fu_42704_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42708_p2() {
    mul_ln78_348_fu_42708_p2 = (!mul_ln78_348_fu_42708_p0.read().is_01() || !mul_ln78_348_fu_42708_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_348_fu_42708_p0.read()) * sc_biguint<5>(mul_ln78_348_fu_42708_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42889_p0() {
    mul_ln78_349_fu_42889_p0 =  (sc_lv<5>) (zext_ln78_677_fu_42885_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42889_p1() {
    mul_ln78_349_fu_42889_p1 =  (sc_lv<5>) (zext_ln78_677_fu_42885_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42889_p2() {
    mul_ln78_349_fu_42889_p2 = (!mul_ln78_349_fu_42889_p0.read().is_01() || !mul_ln78_349_fu_42889_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_349_fu_42889_p0.read()) * sc_biguint<5>(mul_ln78_349_fu_42889_p1.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34447_p0() {
    mul_ln78_34_fu_34447_p0 =  (sc_lv<5>) (mul_ln78_34_fu_34447_p00.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34447_p00() {
    mul_ln78_34_fu_34447_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34447_p1() {
    mul_ln78_34_fu_34447_p1 =  (sc_lv<5>) (mul_ln78_34_fu_34447_p10.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34447_p10() {
    mul_ln78_34_fu_34447_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34447_p2() {
    mul_ln78_34_fu_34447_p2 = (!mul_ln78_34_fu_34447_p0.read().is_01() || !mul_ln78_34_fu_34447_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_34_fu_34447_p0.read()) * sc_biguint<5>(mul_ln78_34_fu_34447_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42980_p0() {
    mul_ln78_350_fu_42980_p0 =  (sc_lv<5>) (zext_ln78_684_fu_42976_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42980_p1() {
    mul_ln78_350_fu_42980_p1 =  (sc_lv<5>) (zext_ln78_684_fu_42976_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42980_p2() {
    mul_ln78_350_fu_42980_p2 = (!mul_ln78_350_fu_42980_p0.read().is_01() || !mul_ln78_350_fu_42980_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_350_fu_42980_p0.read()) * sc_biguint<5>(mul_ln78_350_fu_42980_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43161_p0() {
    mul_ln78_351_fu_43161_p0 =  (sc_lv<5>) (zext_ln78_691_fu_43157_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43161_p1() {
    mul_ln78_351_fu_43161_p1 =  (sc_lv<5>) (zext_ln78_691_fu_43157_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43161_p2() {
    mul_ln78_351_fu_43161_p2 = (!mul_ln78_351_fu_43161_p0.read().is_01() || !mul_ln78_351_fu_43161_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_351_fu_43161_p0.read()) * sc_biguint<5>(mul_ln78_351_fu_43161_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43252_p0() {
    mul_ln78_352_fu_43252_p0 =  (sc_lv<5>) (zext_ln78_698_fu_43248_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43252_p1() {
    mul_ln78_352_fu_43252_p1 =  (sc_lv<5>) (zext_ln78_698_fu_43248_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43252_p2() {
    mul_ln78_352_fu_43252_p2 = (!mul_ln78_352_fu_43252_p0.read().is_01() || !mul_ln78_352_fu_43252_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_352_fu_43252_p0.read()) * sc_biguint<5>(mul_ln78_352_fu_43252_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43433_p0() {
    mul_ln78_353_fu_43433_p0 =  (sc_lv<5>) (zext_ln78_705_fu_43429_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43433_p1() {
    mul_ln78_353_fu_43433_p1 =  (sc_lv<5>) (zext_ln78_705_fu_43429_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43433_p2() {
    mul_ln78_353_fu_43433_p2 = (!mul_ln78_353_fu_43433_p0.read().is_01() || !mul_ln78_353_fu_43433_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_353_fu_43433_p0.read()) * sc_biguint<5>(mul_ln78_353_fu_43433_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43524_p0() {
    mul_ln78_354_fu_43524_p0 =  (sc_lv<5>) (zext_ln78_712_fu_43520_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43524_p1() {
    mul_ln78_354_fu_43524_p1 =  (sc_lv<5>) (zext_ln78_712_fu_43520_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43524_p2() {
    mul_ln78_354_fu_43524_p2 = (!mul_ln78_354_fu_43524_p0.read().is_01() || !mul_ln78_354_fu_43524_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_354_fu_43524_p0.read()) * sc_biguint<5>(mul_ln78_354_fu_43524_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43705_p0() {
    mul_ln78_355_fu_43705_p0 =  (sc_lv<5>) (zext_ln78_719_fu_43701_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43705_p1() {
    mul_ln78_355_fu_43705_p1 =  (sc_lv<5>) (zext_ln78_719_fu_43701_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43705_p2() {
    mul_ln78_355_fu_43705_p2 = (!mul_ln78_355_fu_43705_p0.read().is_01() || !mul_ln78_355_fu_43705_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_355_fu_43705_p0.read()) * sc_biguint<5>(mul_ln78_355_fu_43705_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43796_p0() {
    mul_ln78_356_fu_43796_p0 =  (sc_lv<5>) (zext_ln78_726_fu_43792_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43796_p1() {
    mul_ln78_356_fu_43796_p1 =  (sc_lv<5>) (zext_ln78_726_fu_43792_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43796_p2() {
    mul_ln78_356_fu_43796_p2 = (!mul_ln78_356_fu_43796_p0.read().is_01() || !mul_ln78_356_fu_43796_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_356_fu_43796_p0.read()) * sc_biguint<5>(mul_ln78_356_fu_43796_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43977_p0() {
    mul_ln78_357_fu_43977_p0 =  (sc_lv<5>) (zext_ln78_733_fu_43973_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43977_p1() {
    mul_ln78_357_fu_43977_p1 =  (sc_lv<5>) (zext_ln78_733_fu_43973_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43977_p2() {
    mul_ln78_357_fu_43977_p2 = (!mul_ln78_357_fu_43977_p0.read().is_01() || !mul_ln78_357_fu_43977_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_357_fu_43977_p0.read()) * sc_biguint<5>(mul_ln78_357_fu_43977_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44068_p0() {
    mul_ln78_358_fu_44068_p0 =  (sc_lv<5>) (zext_ln78_740_fu_44064_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44068_p1() {
    mul_ln78_358_fu_44068_p1 =  (sc_lv<5>) (zext_ln78_740_fu_44064_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44068_p2() {
    mul_ln78_358_fu_44068_p2 = (!mul_ln78_358_fu_44068_p0.read().is_01() || !mul_ln78_358_fu_44068_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_358_fu_44068_p0.read()) * sc_biguint<5>(mul_ln78_358_fu_44068_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44249_p0() {
    mul_ln78_359_fu_44249_p0 =  (sc_lv<5>) (zext_ln78_747_fu_44245_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44249_p1() {
    mul_ln78_359_fu_44249_p1 =  (sc_lv<5>) (zext_ln78_747_fu_44245_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44249_p2() {
    mul_ln78_359_fu_44249_p2 = (!mul_ln78_359_fu_44249_p0.read().is_01() || !mul_ln78_359_fu_44249_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_359_fu_44249_p0.read()) * sc_biguint<5>(mul_ln78_359_fu_44249_p1.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34538_p0() {
    mul_ln78_35_fu_34538_p0 =  (sc_lv<5>) (mul_ln78_35_fu_34538_p00.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34538_p00() {
    mul_ln78_35_fu_34538_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34538_p1() {
    mul_ln78_35_fu_34538_p1 =  (sc_lv<5>) (mul_ln78_35_fu_34538_p10.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34538_p10() {
    mul_ln78_35_fu_34538_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34538_p2() {
    mul_ln78_35_fu_34538_p2 = (!mul_ln78_35_fu_34538_p0.read().is_01() || !mul_ln78_35_fu_34538_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_35_fu_34538_p0.read()) * sc_biguint<5>(mul_ln78_35_fu_34538_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44340_p0() {
    mul_ln78_360_fu_44340_p0 =  (sc_lv<5>) (zext_ln78_754_fu_44336_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44340_p1() {
    mul_ln78_360_fu_44340_p1 =  (sc_lv<5>) (zext_ln78_754_fu_44336_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44340_p2() {
    mul_ln78_360_fu_44340_p2 = (!mul_ln78_360_fu_44340_p0.read().is_01() || !mul_ln78_360_fu_44340_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_360_fu_44340_p0.read()) * sc_biguint<5>(mul_ln78_360_fu_44340_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44521_p0() {
    mul_ln78_361_fu_44521_p0 =  (sc_lv<5>) (zext_ln78_761_fu_44517_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44521_p1() {
    mul_ln78_361_fu_44521_p1 =  (sc_lv<5>) (zext_ln78_761_fu_44517_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44521_p2() {
    mul_ln78_361_fu_44521_p2 = (!mul_ln78_361_fu_44521_p0.read().is_01() || !mul_ln78_361_fu_44521_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_361_fu_44521_p0.read()) * sc_biguint<5>(mul_ln78_361_fu_44521_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44612_p0() {
    mul_ln78_362_fu_44612_p0 =  (sc_lv<5>) (zext_ln78_768_fu_44608_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44612_p1() {
    mul_ln78_362_fu_44612_p1 =  (sc_lv<5>) (zext_ln78_768_fu_44608_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44612_p2() {
    mul_ln78_362_fu_44612_p2 = (!mul_ln78_362_fu_44612_p0.read().is_01() || !mul_ln78_362_fu_44612_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_362_fu_44612_p0.read()) * sc_biguint<5>(mul_ln78_362_fu_44612_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44793_p0() {
    mul_ln78_363_fu_44793_p0 =  (sc_lv<5>) (zext_ln78_775_fu_44789_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44793_p1() {
    mul_ln78_363_fu_44793_p1 =  (sc_lv<5>) (zext_ln78_775_fu_44789_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44793_p2() {
    mul_ln78_363_fu_44793_p2 = (!mul_ln78_363_fu_44793_p0.read().is_01() || !mul_ln78_363_fu_44793_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_363_fu_44793_p0.read()) * sc_biguint<5>(mul_ln78_363_fu_44793_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44884_p0() {
    mul_ln78_364_fu_44884_p0 =  (sc_lv<5>) (zext_ln78_782_fu_44880_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44884_p1() {
    mul_ln78_364_fu_44884_p1 =  (sc_lv<5>) (zext_ln78_782_fu_44880_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44884_p2() {
    mul_ln78_364_fu_44884_p2 = (!mul_ln78_364_fu_44884_p0.read().is_01() || !mul_ln78_364_fu_44884_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_364_fu_44884_p0.read()) * sc_biguint<5>(mul_ln78_364_fu_44884_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45065_p0() {
    mul_ln78_365_fu_45065_p0 =  (sc_lv<5>) (zext_ln78_789_fu_45061_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45065_p1() {
    mul_ln78_365_fu_45065_p1 =  (sc_lv<5>) (zext_ln78_789_fu_45061_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45065_p2() {
    mul_ln78_365_fu_45065_p2 = (!mul_ln78_365_fu_45065_p0.read().is_01() || !mul_ln78_365_fu_45065_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_365_fu_45065_p0.read()) * sc_biguint<5>(mul_ln78_365_fu_45065_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45156_p0() {
    mul_ln78_366_fu_45156_p0 =  (sc_lv<5>) (zext_ln78_796_fu_45152_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45156_p1() {
    mul_ln78_366_fu_45156_p1 =  (sc_lv<5>) (zext_ln78_796_fu_45152_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45156_p2() {
    mul_ln78_366_fu_45156_p2 = (!mul_ln78_366_fu_45156_p0.read().is_01() || !mul_ln78_366_fu_45156_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_366_fu_45156_p0.read()) * sc_biguint<5>(mul_ln78_366_fu_45156_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45337_p0() {
    mul_ln78_367_fu_45337_p0 =  (sc_lv<5>) (zext_ln78_803_fu_45333_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45337_p1() {
    mul_ln78_367_fu_45337_p1 =  (sc_lv<5>) (zext_ln78_803_fu_45333_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45337_p2() {
    mul_ln78_367_fu_45337_p2 = (!mul_ln78_367_fu_45337_p0.read().is_01() || !mul_ln78_367_fu_45337_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_367_fu_45337_p0.read()) * sc_biguint<5>(mul_ln78_367_fu_45337_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45428_p0() {
    mul_ln78_368_fu_45428_p0 =  (sc_lv<5>) (zext_ln78_810_fu_45424_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45428_p1() {
    mul_ln78_368_fu_45428_p1 =  (sc_lv<5>) (zext_ln78_810_fu_45424_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45428_p2() {
    mul_ln78_368_fu_45428_p2 = (!mul_ln78_368_fu_45428_p0.read().is_01() || !mul_ln78_368_fu_45428_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_368_fu_45428_p0.read()) * sc_biguint<5>(mul_ln78_368_fu_45428_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45609_p0() {
    mul_ln78_369_fu_45609_p0 =  (sc_lv<5>) (zext_ln78_817_fu_45605_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45609_p1() {
    mul_ln78_369_fu_45609_p1 =  (sc_lv<5>) (zext_ln78_817_fu_45605_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45609_p2() {
    mul_ln78_369_fu_45609_p2 = (!mul_ln78_369_fu_45609_p0.read().is_01() || !mul_ln78_369_fu_45609_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_369_fu_45609_p0.read()) * sc_biguint<5>(mul_ln78_369_fu_45609_p1.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34729_p0() {
    mul_ln78_36_fu_34729_p0 =  (sc_lv<5>) (mul_ln78_36_fu_34729_p00.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34729_p00() {
    mul_ln78_36_fu_34729_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34729_p1() {
    mul_ln78_36_fu_34729_p1 =  (sc_lv<5>) (mul_ln78_36_fu_34729_p10.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34729_p10() {
    mul_ln78_36_fu_34729_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34729_p2() {
    mul_ln78_36_fu_34729_p2 = (!mul_ln78_36_fu_34729_p0.read().is_01() || !mul_ln78_36_fu_34729_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_36_fu_34729_p0.read()) * sc_biguint<5>(mul_ln78_36_fu_34729_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45700_p0() {
    mul_ln78_370_fu_45700_p0 =  (sc_lv<5>) (zext_ln78_824_fu_45696_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45700_p1() {
    mul_ln78_370_fu_45700_p1 =  (sc_lv<5>) (zext_ln78_824_fu_45696_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45700_p2() {
    mul_ln78_370_fu_45700_p2 = (!mul_ln78_370_fu_45700_p0.read().is_01() || !mul_ln78_370_fu_45700_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_370_fu_45700_p0.read()) * sc_biguint<5>(mul_ln78_370_fu_45700_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45881_p0() {
    mul_ln78_371_fu_45881_p0 =  (sc_lv<5>) (zext_ln78_831_fu_45877_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45881_p1() {
    mul_ln78_371_fu_45881_p1 =  (sc_lv<5>) (zext_ln78_831_fu_45877_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45881_p2() {
    mul_ln78_371_fu_45881_p2 = (!mul_ln78_371_fu_45881_p0.read().is_01() || !mul_ln78_371_fu_45881_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_371_fu_45881_p0.read()) * sc_biguint<5>(mul_ln78_371_fu_45881_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45972_p0() {
    mul_ln78_372_fu_45972_p0 =  (sc_lv<5>) (zext_ln78_838_fu_45968_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45972_p1() {
    mul_ln78_372_fu_45972_p1 =  (sc_lv<5>) (zext_ln78_838_fu_45968_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45972_p2() {
    mul_ln78_372_fu_45972_p2 = (!mul_ln78_372_fu_45972_p0.read().is_01() || !mul_ln78_372_fu_45972_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_372_fu_45972_p0.read()) * sc_biguint<5>(mul_ln78_372_fu_45972_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46153_p0() {
    mul_ln78_373_fu_46153_p0 =  (sc_lv<5>) (zext_ln78_845_fu_46149_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46153_p1() {
    mul_ln78_373_fu_46153_p1 =  (sc_lv<5>) (zext_ln78_845_fu_46149_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46153_p2() {
    mul_ln78_373_fu_46153_p2 = (!mul_ln78_373_fu_46153_p0.read().is_01() || !mul_ln78_373_fu_46153_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_373_fu_46153_p0.read()) * sc_biguint<5>(mul_ln78_373_fu_46153_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46244_p0() {
    mul_ln78_374_fu_46244_p0 =  (sc_lv<5>) (zext_ln78_852_fu_46240_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46244_p1() {
    mul_ln78_374_fu_46244_p1 =  (sc_lv<5>) (zext_ln78_852_fu_46240_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46244_p2() {
    mul_ln78_374_fu_46244_p2 = (!mul_ln78_374_fu_46244_p0.read().is_01() || !mul_ln78_374_fu_46244_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_374_fu_46244_p0.read()) * sc_biguint<5>(mul_ln78_374_fu_46244_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46425_p0() {
    mul_ln78_375_fu_46425_p0 =  (sc_lv<5>) (zext_ln78_859_fu_46421_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46425_p1() {
    mul_ln78_375_fu_46425_p1 =  (sc_lv<5>) (zext_ln78_859_fu_46421_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46425_p2() {
    mul_ln78_375_fu_46425_p2 = (!mul_ln78_375_fu_46425_p0.read().is_01() || !mul_ln78_375_fu_46425_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_375_fu_46425_p0.read()) * sc_biguint<5>(mul_ln78_375_fu_46425_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46516_p0() {
    mul_ln78_376_fu_46516_p0 =  (sc_lv<5>) (zext_ln78_866_fu_46512_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46516_p1() {
    mul_ln78_376_fu_46516_p1 =  (sc_lv<5>) (zext_ln78_866_fu_46512_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46516_p2() {
    mul_ln78_376_fu_46516_p2 = (!mul_ln78_376_fu_46516_p0.read().is_01() || !mul_ln78_376_fu_46516_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_376_fu_46516_p0.read()) * sc_biguint<5>(mul_ln78_376_fu_46516_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46697_p0() {
    mul_ln78_377_fu_46697_p0 =  (sc_lv<5>) (zext_ln78_873_fu_46693_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46697_p1() {
    mul_ln78_377_fu_46697_p1 =  (sc_lv<5>) (zext_ln78_873_fu_46693_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46697_p2() {
    mul_ln78_377_fu_46697_p2 = (!mul_ln78_377_fu_46697_p0.read().is_01() || !mul_ln78_377_fu_46697_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_377_fu_46697_p0.read()) * sc_biguint<5>(mul_ln78_377_fu_46697_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46788_p0() {
    mul_ln78_378_fu_46788_p0 =  (sc_lv<5>) (zext_ln78_880_fu_46784_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46788_p1() {
    mul_ln78_378_fu_46788_p1 =  (sc_lv<5>) (zext_ln78_880_fu_46784_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46788_p2() {
    mul_ln78_378_fu_46788_p2 = (!mul_ln78_378_fu_46788_p0.read().is_01() || !mul_ln78_378_fu_46788_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_378_fu_46788_p0.read()) * sc_biguint<5>(mul_ln78_378_fu_46788_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46969_p0() {
    mul_ln78_379_fu_46969_p0 =  (sc_lv<5>) (zext_ln78_887_fu_46965_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46969_p1() {
    mul_ln78_379_fu_46969_p1 =  (sc_lv<5>) (zext_ln78_887_fu_46965_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46969_p2() {
    mul_ln78_379_fu_46969_p2 = (!mul_ln78_379_fu_46969_p0.read().is_01() || !mul_ln78_379_fu_46969_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_379_fu_46969_p0.read()) * sc_biguint<5>(mul_ln78_379_fu_46969_p1.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34810_p0() {
    mul_ln78_37_fu_34810_p0 =  (sc_lv<5>) (mul_ln78_37_fu_34810_p00.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34810_p00() {
    mul_ln78_37_fu_34810_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34810_p1() {
    mul_ln78_37_fu_34810_p1 =  (sc_lv<5>) (mul_ln78_37_fu_34810_p10.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34810_p10() {
    mul_ln78_37_fu_34810_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34810_p2() {
    mul_ln78_37_fu_34810_p2 = (!mul_ln78_37_fu_34810_p0.read().is_01() || !mul_ln78_37_fu_34810_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_37_fu_34810_p0.read()) * sc_biguint<5>(mul_ln78_37_fu_34810_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47060_p0() {
    mul_ln78_380_fu_47060_p0 =  (sc_lv<5>) (zext_ln78_894_fu_47056_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47060_p1() {
    mul_ln78_380_fu_47060_p1 =  (sc_lv<5>) (zext_ln78_894_fu_47056_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47060_p2() {
    mul_ln78_380_fu_47060_p2 = (!mul_ln78_380_fu_47060_p0.read().is_01() || !mul_ln78_380_fu_47060_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_380_fu_47060_p0.read()) * sc_biguint<5>(mul_ln78_380_fu_47060_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47255_p0() {
    mul_ln78_381_fu_47255_p0 =  (sc_lv<5>) (zext_ln78_901_fu_47251_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47255_p1() {
    mul_ln78_381_fu_47255_p1 =  (sc_lv<5>) (zext_ln78_901_fu_47251_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47255_p2() {
    mul_ln78_381_fu_47255_p2 = (!mul_ln78_381_fu_47255_p0.read().is_01() || !mul_ln78_381_fu_47255_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_381_fu_47255_p0.read()) * sc_biguint<5>(mul_ln78_381_fu_47255_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47360_p0() {
    mul_ln78_382_fu_47360_p0 =  (sc_lv<5>) (zext_ln78_908_fu_47356_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47360_p1() {
    mul_ln78_382_fu_47360_p1 =  (sc_lv<5>) (zext_ln78_908_fu_47356_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47360_p2() {
    mul_ln78_382_fu_47360_p2 = (!mul_ln78_382_fu_47360_p0.read().is_01() || !mul_ln78_382_fu_47360_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_382_fu_47360_p0.read()) * sc_biguint<5>(mul_ln78_382_fu_47360_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47541_p0() {
    mul_ln78_383_fu_47541_p0 =  (sc_lv<5>) (zext_ln78_915_fu_47537_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47541_p1() {
    mul_ln78_383_fu_47541_p1 =  (sc_lv<5>) (zext_ln78_915_fu_47537_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47541_p2() {
    mul_ln78_383_fu_47541_p2 = (!mul_ln78_383_fu_47541_p0.read().is_01() || !mul_ln78_383_fu_47541_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_383_fu_47541_p0.read()) * sc_biguint<5>(mul_ln78_383_fu_47541_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47618_p0() {
    mul_ln78_384_fu_47618_p0 =  (sc_lv<5>) (zext_ln78_922_fu_47614_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47618_p1() {
    mul_ln78_384_fu_47618_p1 =  (sc_lv<5>) (zext_ln78_922_fu_47614_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47618_p2() {
    mul_ln78_384_fu_47618_p2 = (!mul_ln78_384_fu_47618_p0.read().is_01() || !mul_ln78_384_fu_47618_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_384_fu_47618_p0.read()) * sc_biguint<5>(mul_ln78_384_fu_47618_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47785_p0() {
    mul_ln78_385_fu_47785_p0 =  (sc_lv<5>) (zext_ln78_929_fu_47781_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47785_p1() {
    mul_ln78_385_fu_47785_p1 =  (sc_lv<5>) (zext_ln78_929_fu_47781_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47785_p2() {
    mul_ln78_385_fu_47785_p2 = (!mul_ln78_385_fu_47785_p0.read().is_01() || !mul_ln78_385_fu_47785_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_385_fu_47785_p0.read()) * sc_biguint<5>(mul_ln78_385_fu_47785_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47876_p0() {
    mul_ln78_386_fu_47876_p0 =  (sc_lv<5>) (zext_ln78_936_fu_47872_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47876_p1() {
    mul_ln78_386_fu_47876_p1 =  (sc_lv<5>) (zext_ln78_936_fu_47872_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47876_p2() {
    mul_ln78_386_fu_47876_p2 = (!mul_ln78_386_fu_47876_p0.read().is_01() || !mul_ln78_386_fu_47876_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_386_fu_47876_p0.read()) * sc_biguint<5>(mul_ln78_386_fu_47876_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48057_p0() {
    mul_ln78_387_fu_48057_p0 =  (sc_lv<5>) (zext_ln78_943_fu_48053_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48057_p1() {
    mul_ln78_387_fu_48057_p1 =  (sc_lv<5>) (zext_ln78_943_fu_48053_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48057_p2() {
    mul_ln78_387_fu_48057_p2 = (!mul_ln78_387_fu_48057_p0.read().is_01() || !mul_ln78_387_fu_48057_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_387_fu_48057_p0.read()) * sc_biguint<5>(mul_ln78_387_fu_48057_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48148_p0() {
    mul_ln78_388_fu_48148_p0 =  (sc_lv<5>) (zext_ln78_950_fu_48144_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48148_p1() {
    mul_ln78_388_fu_48148_p1 =  (sc_lv<5>) (zext_ln78_950_fu_48144_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48148_p2() {
    mul_ln78_388_fu_48148_p2 = (!mul_ln78_388_fu_48148_p0.read().is_01() || !mul_ln78_388_fu_48148_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_388_fu_48148_p0.read()) * sc_biguint<5>(mul_ln78_388_fu_48148_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48329_p0() {
    mul_ln78_389_fu_48329_p0 =  (sc_lv<5>) (zext_ln78_957_fu_48325_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48329_p1() {
    mul_ln78_389_fu_48329_p1 =  (sc_lv<5>) (zext_ln78_957_fu_48325_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48329_p2() {
    mul_ln78_389_fu_48329_p2 = (!mul_ln78_389_fu_48329_p0.read().is_01() || !mul_ln78_389_fu_48329_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_389_fu_48329_p0.read()) * sc_biguint<5>(mul_ln78_389_fu_48329_p1.read());
}

void HLS_accel::thread_mul_ln78_38_fu_35001_p0() {
    mul_ln78_38_fu_35001_p0 =  (sc_lv<5>) (mul_ln78_38_fu_35001_p00.read());
}

void HLS_accel::thread_mul_ln78_38_fu_35001_p00() {
    mul_ln78_38_fu_35001_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_38_fu_35001_p1() {
    mul_ln78_38_fu_35001_p1 =  (sc_lv<5>) (mul_ln78_38_fu_35001_p10.read());
}

void HLS_accel::thread_mul_ln78_38_fu_35001_p10() {
    mul_ln78_38_fu_35001_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_38_fu_35001_p2() {
    mul_ln78_38_fu_35001_p2 = (!mul_ln78_38_fu_35001_p0.read().is_01() || !mul_ln78_38_fu_35001_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_38_fu_35001_p0.read()) * sc_biguint<5>(mul_ln78_38_fu_35001_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48420_p0() {
    mul_ln78_390_fu_48420_p0 =  (sc_lv<5>) (zext_ln78_964_fu_48416_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48420_p1() {
    mul_ln78_390_fu_48420_p1 =  (sc_lv<5>) (zext_ln78_964_fu_48416_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48420_p2() {
    mul_ln78_390_fu_48420_p2 = (!mul_ln78_390_fu_48420_p0.read().is_01() || !mul_ln78_390_fu_48420_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_390_fu_48420_p0.read()) * sc_biguint<5>(mul_ln78_390_fu_48420_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48601_p0() {
    mul_ln78_391_fu_48601_p0 =  (sc_lv<5>) (zext_ln78_971_fu_48597_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48601_p1() {
    mul_ln78_391_fu_48601_p1 =  (sc_lv<5>) (zext_ln78_971_fu_48597_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48601_p2() {
    mul_ln78_391_fu_48601_p2 = (!mul_ln78_391_fu_48601_p0.read().is_01() || !mul_ln78_391_fu_48601_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_391_fu_48601_p0.read()) * sc_biguint<5>(mul_ln78_391_fu_48601_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48702_p0() {
    mul_ln78_392_fu_48702_p0 =  (sc_lv<5>) (zext_ln78_978_fu_48698_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48702_p1() {
    mul_ln78_392_fu_48702_p1 =  (sc_lv<5>) (zext_ln78_978_fu_48698_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48702_p2() {
    mul_ln78_392_fu_48702_p2 = (!mul_ln78_392_fu_48702_p0.read().is_01() || !mul_ln78_392_fu_48702_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_392_fu_48702_p0.read()) * sc_biguint<5>(mul_ln78_392_fu_48702_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48873_p0() {
    mul_ln78_393_fu_48873_p0 =  (sc_lv<5>) (zext_ln78_985_fu_48869_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48873_p1() {
    mul_ln78_393_fu_48873_p1 =  (sc_lv<5>) (zext_ln78_985_fu_48869_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48873_p2() {
    mul_ln78_393_fu_48873_p2 = (!mul_ln78_393_fu_48873_p0.read().is_01() || !mul_ln78_393_fu_48873_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_393_fu_48873_p0.read()) * sc_biguint<5>(mul_ln78_393_fu_48873_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48964_p0() {
    mul_ln78_394_fu_48964_p0 =  (sc_lv<5>) (zext_ln78_992_fu_48960_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48964_p1() {
    mul_ln78_394_fu_48964_p1 =  (sc_lv<5>) (zext_ln78_992_fu_48960_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48964_p2() {
    mul_ln78_394_fu_48964_p2 = (!mul_ln78_394_fu_48964_p0.read().is_01() || !mul_ln78_394_fu_48964_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_394_fu_48964_p0.read()) * sc_biguint<5>(mul_ln78_394_fu_48964_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49145_p0() {
    mul_ln78_395_fu_49145_p0 =  (sc_lv<5>) (zext_ln78_999_fu_49141_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49145_p1() {
    mul_ln78_395_fu_49145_p1 =  (sc_lv<5>) (zext_ln78_999_fu_49141_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49145_p2() {
    mul_ln78_395_fu_49145_p2 = (!mul_ln78_395_fu_49145_p0.read().is_01() || !mul_ln78_395_fu_49145_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_395_fu_49145_p0.read()) * sc_biguint<5>(mul_ln78_395_fu_49145_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49236_p0() {
    mul_ln78_396_fu_49236_p0 =  (sc_lv<5>) (zext_ln78_1006_fu_49232_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49236_p1() {
    mul_ln78_396_fu_49236_p1 =  (sc_lv<5>) (zext_ln78_1006_fu_49232_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49236_p2() {
    mul_ln78_396_fu_49236_p2 = (!mul_ln78_396_fu_49236_p0.read().is_01() || !mul_ln78_396_fu_49236_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_396_fu_49236_p0.read()) * sc_biguint<5>(mul_ln78_396_fu_49236_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49417_p0() {
    mul_ln78_397_fu_49417_p0 =  (sc_lv<5>) (zext_ln78_1013_fu_49413_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49417_p1() {
    mul_ln78_397_fu_49417_p1 =  (sc_lv<5>) (zext_ln78_1013_fu_49413_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49417_p2() {
    mul_ln78_397_fu_49417_p2 = (!mul_ln78_397_fu_49417_p0.read().is_01() || !mul_ln78_397_fu_49417_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_397_fu_49417_p0.read()) * sc_biguint<5>(mul_ln78_397_fu_49417_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49508_p0() {
    mul_ln78_398_fu_49508_p0 =  (sc_lv<5>) (zext_ln78_1020_fu_49504_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49508_p1() {
    mul_ln78_398_fu_49508_p1 =  (sc_lv<5>) (zext_ln78_1020_fu_49504_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49508_p2() {
    mul_ln78_398_fu_49508_p2 = (!mul_ln78_398_fu_49508_p0.read().is_01() || !mul_ln78_398_fu_49508_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_398_fu_49508_p0.read()) * sc_biguint<5>(mul_ln78_398_fu_49508_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49689_p0() {
    mul_ln78_399_fu_49689_p0 =  (sc_lv<5>) (zext_ln78_1027_fu_49685_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49689_p1() {
    mul_ln78_399_fu_49689_p1 =  (sc_lv<5>) (zext_ln78_1027_fu_49685_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49689_p2() {
    mul_ln78_399_fu_49689_p2 = (!mul_ln78_399_fu_49689_p0.read().is_01() || !mul_ln78_399_fu_49689_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_399_fu_49689_p0.read()) * sc_biguint<5>(mul_ln78_399_fu_49689_p1.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35092_p0() {
    mul_ln78_39_fu_35092_p0 =  (sc_lv<5>) (mul_ln78_39_fu_35092_p00.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35092_p00() {
    mul_ln78_39_fu_35092_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35092_p1() {
    mul_ln78_39_fu_35092_p1 =  (sc_lv<5>) (mul_ln78_39_fu_35092_p10.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35092_p10() {
    mul_ln78_39_fu_35092_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35092_p2() {
    mul_ln78_39_fu_35092_p2 = (!mul_ln78_39_fu_35092_p0.read().is_01() || !mul_ln78_39_fu_35092_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_39_fu_35092_p0.read()) * sc_biguint<5>(mul_ln78_39_fu_35092_p1.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30516_p0() {
    mul_ln78_3_fu_30516_p0 =  (sc_lv<5>) (mul_ln78_3_fu_30516_p00.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30516_p00() {
    mul_ln78_3_fu_30516_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30516_p1() {
    mul_ln78_3_fu_30516_p1 =  (sc_lv<5>) (mul_ln78_3_fu_30516_p10.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30516_p10() {
    mul_ln78_3_fu_30516_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30516_p2() {
    mul_ln78_3_fu_30516_p2 = (!mul_ln78_3_fu_30516_p0.read().is_01() || !mul_ln78_3_fu_30516_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_3_fu_30516_p0.read()) * sc_biguint<5>(mul_ln78_3_fu_30516_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49780_p0() {
    mul_ln78_400_fu_49780_p0 =  (sc_lv<5>) (zext_ln78_1034_fu_49776_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49780_p1() {
    mul_ln78_400_fu_49780_p1 =  (sc_lv<5>) (zext_ln78_1034_fu_49776_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49780_p2() {
    mul_ln78_400_fu_49780_p2 = (!mul_ln78_400_fu_49780_p0.read().is_01() || !mul_ln78_400_fu_49780_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_400_fu_49780_p0.read()) * sc_biguint<5>(mul_ln78_400_fu_49780_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49971_p0() {
    mul_ln78_401_fu_49971_p0 =  (sc_lv<5>) (zext_ln78_1041_fu_49967_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49971_p1() {
    mul_ln78_401_fu_49971_p1 =  (sc_lv<5>) (zext_ln78_1041_fu_49967_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49971_p2() {
    mul_ln78_401_fu_49971_p2 = (!mul_ln78_401_fu_49971_p0.read().is_01() || !mul_ln78_401_fu_49971_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_401_fu_49971_p0.read()) * sc_biguint<5>(mul_ln78_401_fu_49971_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50062_p0() {
    mul_ln78_402_fu_50062_p0 =  (sc_lv<5>) (zext_ln78_1048_fu_50058_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50062_p1() {
    mul_ln78_402_fu_50062_p1 =  (sc_lv<5>) (zext_ln78_1048_fu_50058_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50062_p2() {
    mul_ln78_402_fu_50062_p2 = (!mul_ln78_402_fu_50062_p0.read().is_01() || !mul_ln78_402_fu_50062_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_402_fu_50062_p0.read()) * sc_biguint<5>(mul_ln78_402_fu_50062_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50233_p0() {
    mul_ln78_403_fu_50233_p0 =  (sc_lv<5>) (zext_ln78_1055_fu_50229_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50233_p1() {
    mul_ln78_403_fu_50233_p1 =  (sc_lv<5>) (zext_ln78_1055_fu_50229_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50233_p2() {
    mul_ln78_403_fu_50233_p2 = (!mul_ln78_403_fu_50233_p0.read().is_01() || !mul_ln78_403_fu_50233_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_403_fu_50233_p0.read()) * sc_biguint<5>(mul_ln78_403_fu_50233_p1.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50314_p0() {
    mul_ln78_404_fu_50314_p0 =  (sc_lv<5>) (mul_ln78_404_fu_50314_p00.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50314_p00() {
    mul_ln78_404_fu_50314_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50314_p1() {
    mul_ln78_404_fu_50314_p1 =  (sc_lv<5>) (mul_ln78_404_fu_50314_p10.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50314_p10() {
    mul_ln78_404_fu_50314_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50314_p2() {
    mul_ln78_404_fu_50314_p2 = (!mul_ln78_404_fu_50314_p0.read().is_01() || !mul_ln78_404_fu_50314_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_404_fu_50314_p0.read()) * sc_biguint<5>(mul_ln78_404_fu_50314_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50324_p0() {
    mul_ln78_405_fu_50324_p0 =  (sc_lv<5>) (zext_ln78_1062_fu_50320_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50324_p1() {
    mul_ln78_405_fu_50324_p1 =  (sc_lv<5>) (zext_ln78_1062_fu_50320_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50324_p2() {
    mul_ln78_405_fu_50324_p2 = (!mul_ln78_405_fu_50324_p0.read().is_01() || !mul_ln78_405_fu_50324_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_405_fu_50324_p0.read()) * sc_biguint<5>(mul_ln78_405_fu_50324_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50505_p0() {
    mul_ln78_406_fu_50505_p0 =  (sc_lv<5>) (zext_ln78_1069_fu_50501_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50505_p1() {
    mul_ln78_406_fu_50505_p1 =  (sc_lv<5>) (zext_ln78_1069_fu_50501_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50505_p2() {
    mul_ln78_406_fu_50505_p2 = (!mul_ln78_406_fu_50505_p0.read().is_01() || !mul_ln78_406_fu_50505_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_406_fu_50505_p0.read()) * sc_biguint<5>(mul_ln78_406_fu_50505_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50596_p0() {
    mul_ln78_407_fu_50596_p0 =  (sc_lv<5>) (zext_ln78_1076_fu_50592_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50596_p1() {
    mul_ln78_407_fu_50596_p1 =  (sc_lv<5>) (zext_ln78_1076_fu_50592_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50596_p2() {
    mul_ln78_407_fu_50596_p2 = (!mul_ln78_407_fu_50596_p0.read().is_01() || !mul_ln78_407_fu_50596_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_407_fu_50596_p0.read()) * sc_biguint<5>(mul_ln78_407_fu_50596_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50777_p0() {
    mul_ln78_408_fu_50777_p0 =  (sc_lv<5>) (zext_ln78_1083_fu_50773_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50777_p1() {
    mul_ln78_408_fu_50777_p1 =  (sc_lv<5>) (zext_ln78_1083_fu_50773_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50777_p2() {
    mul_ln78_408_fu_50777_p2 = (!mul_ln78_408_fu_50777_p0.read().is_01() || !mul_ln78_408_fu_50777_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_408_fu_50777_p0.read()) * sc_biguint<5>(mul_ln78_408_fu_50777_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50868_p0() {
    mul_ln78_409_fu_50868_p0 =  (sc_lv<5>) (zext_ln78_1090_fu_50864_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50868_p1() {
    mul_ln78_409_fu_50868_p1 =  (sc_lv<5>) (zext_ln78_1090_fu_50864_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50868_p2() {
    mul_ln78_409_fu_50868_p2 = (!mul_ln78_409_fu_50868_p0.read().is_01() || !mul_ln78_409_fu_50868_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_409_fu_50868_p0.read()) * sc_biguint<5>(mul_ln78_409_fu_50868_p1.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35263_p0() {
    mul_ln78_40_fu_35263_p0 =  (sc_lv<5>) (mul_ln78_40_fu_35263_p00.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35263_p00() {
    mul_ln78_40_fu_35263_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35263_p1() {
    mul_ln78_40_fu_35263_p1 =  (sc_lv<5>) (mul_ln78_40_fu_35263_p10.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35263_p10() {
    mul_ln78_40_fu_35263_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35263_p2() {
    mul_ln78_40_fu_35263_p2 = (!mul_ln78_40_fu_35263_p0.read().is_01() || !mul_ln78_40_fu_35263_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_40_fu_35263_p0.read()) * sc_biguint<5>(mul_ln78_40_fu_35263_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51049_p0() {
    mul_ln78_410_fu_51049_p0 =  (sc_lv<5>) (zext_ln78_1097_fu_51045_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51049_p1() {
    mul_ln78_410_fu_51049_p1 =  (sc_lv<5>) (zext_ln78_1097_fu_51045_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51049_p2() {
    mul_ln78_410_fu_51049_p2 = (!mul_ln78_410_fu_51049_p0.read().is_01() || !mul_ln78_410_fu_51049_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_410_fu_51049_p0.read()) * sc_biguint<5>(mul_ln78_410_fu_51049_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51140_p0() {
    mul_ln78_411_fu_51140_p0 =  (sc_lv<5>) (zext_ln78_1104_fu_51136_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51140_p1() {
    mul_ln78_411_fu_51140_p1 =  (sc_lv<5>) (zext_ln78_1104_fu_51136_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51140_p2() {
    mul_ln78_411_fu_51140_p2 = (!mul_ln78_411_fu_51140_p0.read().is_01() || !mul_ln78_411_fu_51140_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_411_fu_51140_p0.read()) * sc_biguint<5>(mul_ln78_411_fu_51140_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51321_p0() {
    mul_ln78_412_fu_51321_p0 =  (sc_lv<5>) (zext_ln78_1111_fu_51317_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51321_p1() {
    mul_ln78_412_fu_51321_p1 =  (sc_lv<5>) (zext_ln78_1111_fu_51317_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51321_p2() {
    mul_ln78_412_fu_51321_p2 = (!mul_ln78_412_fu_51321_p0.read().is_01() || !mul_ln78_412_fu_51321_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_412_fu_51321_p0.read()) * sc_biguint<5>(mul_ln78_412_fu_51321_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51412_p0() {
    mul_ln78_413_fu_51412_p0 =  (sc_lv<5>) (zext_ln78_1118_fu_51408_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51412_p1() {
    mul_ln78_413_fu_51412_p1 =  (sc_lv<5>) (zext_ln78_1118_fu_51408_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51412_p2() {
    mul_ln78_413_fu_51412_p2 = (!mul_ln78_413_fu_51412_p0.read().is_01() || !mul_ln78_413_fu_51412_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_413_fu_51412_p0.read()) * sc_biguint<5>(mul_ln78_413_fu_51412_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51593_p0() {
    mul_ln78_414_fu_51593_p0 =  (sc_lv<5>) (zext_ln78_1125_fu_51589_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51593_p1() {
    mul_ln78_414_fu_51593_p1 =  (sc_lv<5>) (zext_ln78_1125_fu_51589_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51593_p2() {
    mul_ln78_414_fu_51593_p2 = (!mul_ln78_414_fu_51593_p0.read().is_01() || !mul_ln78_414_fu_51593_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_414_fu_51593_p0.read()) * sc_biguint<5>(mul_ln78_414_fu_51593_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51684_p0() {
    mul_ln78_415_fu_51684_p0 =  (sc_lv<5>) (zext_ln78_1132_fu_51680_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51684_p1() {
    mul_ln78_415_fu_51684_p1 =  (sc_lv<5>) (zext_ln78_1132_fu_51680_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51684_p2() {
    mul_ln78_415_fu_51684_p2 = (!mul_ln78_415_fu_51684_p0.read().is_01() || !mul_ln78_415_fu_51684_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_415_fu_51684_p0.read()) * sc_biguint<5>(mul_ln78_415_fu_51684_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51865_p0() {
    mul_ln78_416_fu_51865_p0 =  (sc_lv<5>) (zext_ln78_1139_fu_51861_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51865_p1() {
    mul_ln78_416_fu_51865_p1 =  (sc_lv<5>) (zext_ln78_1139_fu_51861_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51865_p2() {
    mul_ln78_416_fu_51865_p2 = (!mul_ln78_416_fu_51865_p0.read().is_01() || !mul_ln78_416_fu_51865_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_416_fu_51865_p0.read()) * sc_biguint<5>(mul_ln78_416_fu_51865_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51966_p0() {
    mul_ln78_417_fu_51966_p0 =  (sc_lv<5>) (zext_ln78_1146_fu_51962_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51966_p1() {
    mul_ln78_417_fu_51966_p1 =  (sc_lv<5>) (zext_ln78_1146_fu_51962_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51966_p2() {
    mul_ln78_417_fu_51966_p2 = (!mul_ln78_417_fu_51966_p0.read().is_01() || !mul_ln78_417_fu_51966_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_417_fu_51966_p0.read()) * sc_biguint<5>(mul_ln78_417_fu_51966_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52137_p0() {
    mul_ln78_418_fu_52137_p0 =  (sc_lv<5>) (zext_ln78_1153_fu_52133_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52137_p1() {
    mul_ln78_418_fu_52137_p1 =  (sc_lv<5>) (zext_ln78_1153_fu_52133_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52137_p2() {
    mul_ln78_418_fu_52137_p2 = (!mul_ln78_418_fu_52137_p0.read().is_01() || !mul_ln78_418_fu_52137_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_418_fu_52137_p0.read()) * sc_biguint<5>(mul_ln78_418_fu_52137_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52228_p0() {
    mul_ln78_419_fu_52228_p0 =  (sc_lv<5>) (zext_ln78_1160_fu_52224_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52228_p1() {
    mul_ln78_419_fu_52228_p1 =  (sc_lv<5>) (zext_ln78_1160_fu_52224_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52228_p2() {
    mul_ln78_419_fu_52228_p2 = (!mul_ln78_419_fu_52228_p0.read().is_01() || !mul_ln78_419_fu_52228_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_419_fu_52228_p0.read()) * sc_biguint<5>(mul_ln78_419_fu_52228_p1.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35354_p0() {
    mul_ln78_41_fu_35354_p0 =  (sc_lv<5>) (mul_ln78_41_fu_35354_p00.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35354_p00() {
    mul_ln78_41_fu_35354_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35354_p1() {
    mul_ln78_41_fu_35354_p1 =  (sc_lv<5>) (mul_ln78_41_fu_35354_p10.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35354_p10() {
    mul_ln78_41_fu_35354_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35354_p2() {
    mul_ln78_41_fu_35354_p2 = (!mul_ln78_41_fu_35354_p0.read().is_01() || !mul_ln78_41_fu_35354_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_41_fu_35354_p0.read()) * sc_biguint<5>(mul_ln78_41_fu_35354_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52409_p0() {
    mul_ln78_420_fu_52409_p0 =  (sc_lv<5>) (zext_ln78_1167_fu_52405_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52409_p1() {
    mul_ln78_420_fu_52409_p1 =  (sc_lv<5>) (zext_ln78_1167_fu_52405_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52409_p2() {
    mul_ln78_420_fu_52409_p2 = (!mul_ln78_420_fu_52409_p0.read().is_01() || !mul_ln78_420_fu_52409_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_420_fu_52409_p0.read()) * sc_biguint<5>(mul_ln78_420_fu_52409_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52500_p0() {
    mul_ln78_421_fu_52500_p0 =  (sc_lv<5>) (zext_ln78_1174_fu_52496_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52500_p1() {
    mul_ln78_421_fu_52500_p1 =  (sc_lv<5>) (zext_ln78_1174_fu_52496_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52500_p2() {
    mul_ln78_421_fu_52500_p2 = (!mul_ln78_421_fu_52500_p0.read().is_01() || !mul_ln78_421_fu_52500_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_421_fu_52500_p0.read()) * sc_biguint<5>(mul_ln78_421_fu_52500_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52681_p0() {
    mul_ln78_422_fu_52681_p0 =  (sc_lv<5>) (zext_ln78_1181_fu_52677_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52681_p1() {
    mul_ln78_422_fu_52681_p1 =  (sc_lv<5>) (zext_ln78_1181_fu_52677_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52681_p2() {
    mul_ln78_422_fu_52681_p2 = (!mul_ln78_422_fu_52681_p0.read().is_01() || !mul_ln78_422_fu_52681_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_422_fu_52681_p0.read()) * sc_biguint<5>(mul_ln78_422_fu_52681_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52772_p0() {
    mul_ln78_423_fu_52772_p0 =  (sc_lv<5>) (zext_ln78_1188_fu_52768_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52772_p1() {
    mul_ln78_423_fu_52772_p1 =  (sc_lv<5>) (zext_ln78_1188_fu_52768_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52772_p2() {
    mul_ln78_423_fu_52772_p2 = (!mul_ln78_423_fu_52772_p0.read().is_01() || !mul_ln78_423_fu_52772_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_423_fu_52772_p0.read()) * sc_biguint<5>(mul_ln78_423_fu_52772_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52953_p0() {
    mul_ln78_424_fu_52953_p0 =  (sc_lv<5>) (zext_ln78_1195_fu_52949_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52953_p1() {
    mul_ln78_424_fu_52953_p1 =  (sc_lv<5>) (zext_ln78_1195_fu_52949_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52953_p2() {
    mul_ln78_424_fu_52953_p2 = (!mul_ln78_424_fu_52953_p0.read().is_01() || !mul_ln78_424_fu_52953_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_424_fu_52953_p0.read()) * sc_biguint<5>(mul_ln78_424_fu_52953_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53044_p0() {
    mul_ln78_425_fu_53044_p0 =  (sc_lv<5>) (zext_ln78_1202_fu_53040_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53044_p1() {
    mul_ln78_425_fu_53044_p1 =  (sc_lv<5>) (zext_ln78_1202_fu_53040_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53044_p2() {
    mul_ln78_425_fu_53044_p2 = (!mul_ln78_425_fu_53044_p0.read().is_01() || !mul_ln78_425_fu_53044_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_425_fu_53044_p0.read()) * sc_biguint<5>(mul_ln78_425_fu_53044_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53225_p0() {
    mul_ln78_426_fu_53225_p0 =  (sc_lv<5>) (zext_ln78_1209_fu_53221_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53225_p1() {
    mul_ln78_426_fu_53225_p1 =  (sc_lv<5>) (zext_ln78_1209_fu_53221_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53225_p2() {
    mul_ln78_426_fu_53225_p2 = (!mul_ln78_426_fu_53225_p0.read().is_01() || !mul_ln78_426_fu_53225_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_426_fu_53225_p0.read()) * sc_biguint<5>(mul_ln78_426_fu_53225_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53326_p0() {
    mul_ln78_427_fu_53326_p0 =  (sc_lv<5>) (zext_ln78_1216_fu_53322_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53326_p1() {
    mul_ln78_427_fu_53326_p1 =  (sc_lv<5>) (zext_ln78_1216_fu_53322_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53326_p2() {
    mul_ln78_427_fu_53326_p2 = (!mul_ln78_427_fu_53326_p0.read().is_01() || !mul_ln78_427_fu_53326_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_427_fu_53326_p0.read()) * sc_biguint<5>(mul_ln78_427_fu_53326_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53497_p0() {
    mul_ln78_428_fu_53497_p0 =  (sc_lv<5>) (zext_ln78_1223_fu_53493_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53497_p1() {
    mul_ln78_428_fu_53497_p1 =  (sc_lv<5>) (zext_ln78_1223_fu_53493_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53497_p2() {
    mul_ln78_428_fu_53497_p2 = (!mul_ln78_428_fu_53497_p0.read().is_01() || !mul_ln78_428_fu_53497_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_428_fu_53497_p0.read()) * sc_biguint<5>(mul_ln78_428_fu_53497_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53588_p0() {
    mul_ln78_429_fu_53588_p0 =  (sc_lv<5>) (zext_ln78_1230_fu_53584_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53588_p1() {
    mul_ln78_429_fu_53588_p1 =  (sc_lv<5>) (zext_ln78_1230_fu_53584_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53588_p2() {
    mul_ln78_429_fu_53588_p2 = (!mul_ln78_429_fu_53588_p0.read().is_01() || !mul_ln78_429_fu_53588_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_429_fu_53588_p0.read()) * sc_biguint<5>(mul_ln78_429_fu_53588_p1.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35535_p0() {
    mul_ln78_42_fu_35535_p0 =  (sc_lv<5>) (mul_ln78_42_fu_35535_p00.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35535_p00() {
    mul_ln78_42_fu_35535_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35535_p1() {
    mul_ln78_42_fu_35535_p1 =  (sc_lv<5>) (mul_ln78_42_fu_35535_p10.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35535_p10() {
    mul_ln78_42_fu_35535_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35535_p2() {
    mul_ln78_42_fu_35535_p2 = (!mul_ln78_42_fu_35535_p0.read().is_01() || !mul_ln78_42_fu_35535_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_42_fu_35535_p0.read()) * sc_biguint<5>(mul_ln78_42_fu_35535_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53769_p0() {
    mul_ln78_430_fu_53769_p0 =  (sc_lv<5>) (zext_ln78_1237_fu_53765_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53769_p1() {
    mul_ln78_430_fu_53769_p1 =  (sc_lv<5>) (zext_ln78_1237_fu_53765_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53769_p2() {
    mul_ln78_430_fu_53769_p2 = (!mul_ln78_430_fu_53769_p0.read().is_01() || !mul_ln78_430_fu_53769_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_430_fu_53769_p0.read()) * sc_biguint<5>(mul_ln78_430_fu_53769_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53860_p0() {
    mul_ln78_431_fu_53860_p0 =  (sc_lv<5>) (zext_ln78_1244_fu_53856_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53860_p1() {
    mul_ln78_431_fu_53860_p1 =  (sc_lv<5>) (zext_ln78_1244_fu_53856_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53860_p2() {
    mul_ln78_431_fu_53860_p2 = (!mul_ln78_431_fu_53860_p0.read().is_01() || !mul_ln78_431_fu_53860_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_431_fu_53860_p0.read()) * sc_biguint<5>(mul_ln78_431_fu_53860_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_54051_p0() {
    mul_ln78_432_fu_54051_p0 =  (sc_lv<5>) (zext_ln78_1251_fu_54047_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_54051_p1() {
    mul_ln78_432_fu_54051_p1 =  (sc_lv<5>) (zext_ln78_1251_fu_54047_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_54051_p2() {
    mul_ln78_432_fu_54051_p2 = (!mul_ln78_432_fu_54051_p0.read().is_01() || !mul_ln78_432_fu_54051_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_432_fu_54051_p0.read()) * sc_biguint<5>(mul_ln78_432_fu_54051_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54132_p0() {
    mul_ln78_433_fu_54132_p0 =  (sc_lv<5>) (zext_ln78_1258_fu_54128_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54132_p1() {
    mul_ln78_433_fu_54132_p1 =  (sc_lv<5>) (zext_ln78_1258_fu_54128_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54132_p2() {
    mul_ln78_433_fu_54132_p2 = (!mul_ln78_433_fu_54132_p0.read().is_01() || !mul_ln78_433_fu_54132_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_433_fu_54132_p0.read()) * sc_biguint<5>(mul_ln78_433_fu_54132_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54313_p0() {
    mul_ln78_434_fu_54313_p0 =  (sc_lv<5>) (zext_ln78_1265_fu_54309_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54313_p1() {
    mul_ln78_434_fu_54313_p1 =  (sc_lv<5>) (zext_ln78_1265_fu_54309_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54313_p2() {
    mul_ln78_434_fu_54313_p2 = (!mul_ln78_434_fu_54313_p0.read().is_01() || !mul_ln78_434_fu_54313_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_434_fu_54313_p0.read()) * sc_biguint<5>(mul_ln78_434_fu_54313_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54404_p0() {
    mul_ln78_435_fu_54404_p0 =  (sc_lv<5>) (zext_ln78_1272_fu_54400_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54404_p1() {
    mul_ln78_435_fu_54404_p1 =  (sc_lv<5>) (zext_ln78_1272_fu_54400_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54404_p2() {
    mul_ln78_435_fu_54404_p2 = (!mul_ln78_435_fu_54404_p0.read().is_01() || !mul_ln78_435_fu_54404_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_435_fu_54404_p0.read()) * sc_biguint<5>(mul_ln78_435_fu_54404_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54595_p0() {
    mul_ln78_436_fu_54595_p0 =  (sc_lv<5>) (zext_ln78_1279_fu_54591_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54595_p1() {
    mul_ln78_436_fu_54595_p1 =  (sc_lv<5>) (zext_ln78_1279_fu_54591_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54595_p2() {
    mul_ln78_436_fu_54595_p2 = (!mul_ln78_436_fu_54595_p0.read().is_01() || !mul_ln78_436_fu_54595_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_436_fu_54595_p0.read()) * sc_biguint<5>(mul_ln78_436_fu_54595_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54676_p0() {
    mul_ln78_437_fu_54676_p0 =  (sc_lv<5>) (zext_ln78_1286_fu_54672_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54676_p1() {
    mul_ln78_437_fu_54676_p1 =  (sc_lv<5>) (zext_ln78_1286_fu_54672_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54676_p2() {
    mul_ln78_437_fu_54676_p2 = (!mul_ln78_437_fu_54676_p0.read().is_01() || !mul_ln78_437_fu_54676_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_437_fu_54676_p0.read()) * sc_biguint<5>(mul_ln78_437_fu_54676_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54857_p0() {
    mul_ln78_438_fu_54857_p0 =  (sc_lv<5>) (zext_ln78_1293_fu_54853_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54857_p1() {
    mul_ln78_438_fu_54857_p1 =  (sc_lv<5>) (zext_ln78_1293_fu_54853_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54857_p2() {
    mul_ln78_438_fu_54857_p2 = (!mul_ln78_438_fu_54857_p0.read().is_01() || !mul_ln78_438_fu_54857_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_438_fu_54857_p0.read()) * sc_biguint<5>(mul_ln78_438_fu_54857_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54948_p0() {
    mul_ln78_439_fu_54948_p0 =  (sc_lv<5>) (zext_ln78_1300_fu_54944_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54948_p1() {
    mul_ln78_439_fu_54948_p1 =  (sc_lv<5>) (zext_ln78_1300_fu_54944_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54948_p2() {
    mul_ln78_439_fu_54948_p2 = (!mul_ln78_439_fu_54948_p0.read().is_01() || !mul_ln78_439_fu_54948_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_439_fu_54948_p0.read()) * sc_biguint<5>(mul_ln78_439_fu_54948_p1.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35626_p0() {
    mul_ln78_43_fu_35626_p0 =  (sc_lv<5>) (mul_ln78_43_fu_35626_p00.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35626_p00() {
    mul_ln78_43_fu_35626_p00 = esl_zext<10,5>(reg_19510.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35626_p1() {
    mul_ln78_43_fu_35626_p1 =  (sc_lv<5>) (mul_ln78_43_fu_35626_p10.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35626_p10() {
    mul_ln78_43_fu_35626_p10 = esl_zext<10,5>(reg_19514.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35626_p2() {
    mul_ln78_43_fu_35626_p2 = (!mul_ln78_43_fu_35626_p0.read().is_01() || !mul_ln78_43_fu_35626_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_43_fu_35626_p0.read()) * sc_biguint<5>(mul_ln78_43_fu_35626_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55129_p0() {
    mul_ln78_440_fu_55129_p0 =  (sc_lv<5>) (zext_ln78_1307_fu_55125_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55129_p1() {
    mul_ln78_440_fu_55129_p1 =  (sc_lv<5>) (zext_ln78_1307_fu_55125_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55129_p2() {
    mul_ln78_440_fu_55129_p2 = (!mul_ln78_440_fu_55129_p0.read().is_01() || !mul_ln78_440_fu_55129_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_440_fu_55129_p0.read()) * sc_biguint<5>(mul_ln78_440_fu_55129_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55220_p0() {
    mul_ln78_441_fu_55220_p0 =  (sc_lv<5>) (zext_ln78_1314_fu_55216_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55220_p1() {
    mul_ln78_441_fu_55220_p1 =  (sc_lv<5>) (zext_ln78_1314_fu_55216_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55220_p2() {
    mul_ln78_441_fu_55220_p2 = (!mul_ln78_441_fu_55220_p0.read().is_01() || !mul_ln78_441_fu_55220_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_441_fu_55220_p0.read()) * sc_biguint<5>(mul_ln78_441_fu_55220_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55401_p0() {
    mul_ln78_442_fu_55401_p0 =  (sc_lv<5>) (zext_ln78_1321_fu_55397_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55401_p1() {
    mul_ln78_442_fu_55401_p1 =  (sc_lv<5>) (zext_ln78_1321_fu_55397_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55401_p2() {
    mul_ln78_442_fu_55401_p2 = (!mul_ln78_442_fu_55401_p0.read().is_01() || !mul_ln78_442_fu_55401_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_442_fu_55401_p0.read()) * sc_biguint<5>(mul_ln78_442_fu_55401_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55492_p0() {
    mul_ln78_443_fu_55492_p0 =  (sc_lv<5>) (zext_ln78_1328_fu_55488_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55492_p1() {
    mul_ln78_443_fu_55492_p1 =  (sc_lv<5>) (zext_ln78_1328_fu_55488_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55492_p2() {
    mul_ln78_443_fu_55492_p2 = (!mul_ln78_443_fu_55492_p0.read().is_01() || !mul_ln78_443_fu_55492_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_443_fu_55492_p0.read()) * sc_biguint<5>(mul_ln78_443_fu_55492_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55673_p0() {
    mul_ln78_444_fu_55673_p0 =  (sc_lv<5>) (zext_ln78_1335_fu_55669_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55673_p1() {
    mul_ln78_444_fu_55673_p1 =  (sc_lv<5>) (zext_ln78_1335_fu_55669_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55673_p2() {
    mul_ln78_444_fu_55673_p2 = (!mul_ln78_444_fu_55673_p0.read().is_01() || !mul_ln78_444_fu_55673_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_444_fu_55673_p0.read()) * sc_biguint<5>(mul_ln78_444_fu_55673_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55764_p0() {
    mul_ln78_445_fu_55764_p0 =  (sc_lv<5>) (zext_ln78_1342_fu_55760_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55764_p1() {
    mul_ln78_445_fu_55764_p1 =  (sc_lv<5>) (zext_ln78_1342_fu_55760_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55764_p2() {
    mul_ln78_445_fu_55764_p2 = (!mul_ln78_445_fu_55764_p0.read().is_01() || !mul_ln78_445_fu_55764_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_445_fu_55764_p0.read()) * sc_biguint<5>(mul_ln78_445_fu_55764_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55955_p0() {
    mul_ln78_446_fu_55955_p0 =  (sc_lv<5>) (zext_ln78_1349_fu_55951_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55955_p1() {
    mul_ln78_446_fu_55955_p1 =  (sc_lv<5>) (zext_ln78_1349_fu_55951_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55955_p2() {
    mul_ln78_446_fu_55955_p2 = (!mul_ln78_446_fu_55955_p0.read().is_01() || !mul_ln78_446_fu_55955_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_446_fu_55955_p0.read()) * sc_biguint<5>(mul_ln78_446_fu_55955_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_56036_p0() {
    mul_ln78_447_fu_56036_p0 =  (sc_lv<5>) (zext_ln78_1356_fu_56032_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_56036_p1() {
    mul_ln78_447_fu_56036_p1 =  (sc_lv<5>) (zext_ln78_1356_fu_56032_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_56036_p2() {
    mul_ln78_447_fu_56036_p2 = (!mul_ln78_447_fu_56036_p0.read().is_01() || !mul_ln78_447_fu_56036_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_447_fu_56036_p0.read()) * sc_biguint<5>(mul_ln78_447_fu_56036_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56217_p0() {
    mul_ln78_448_fu_56217_p0 =  (sc_lv<5>) (zext_ln78_1363_fu_56213_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56217_p1() {
    mul_ln78_448_fu_56217_p1 =  (sc_lv<5>) (zext_ln78_1363_fu_56213_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56217_p2() {
    mul_ln78_448_fu_56217_p2 = (!mul_ln78_448_fu_56217_p0.read().is_01() || !mul_ln78_448_fu_56217_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_448_fu_56217_p0.read()) * sc_biguint<5>(mul_ln78_448_fu_56217_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56308_p0() {
    mul_ln78_449_fu_56308_p0 =  (sc_lv<5>) (zext_ln78_1370_fu_56304_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56308_p1() {
    mul_ln78_449_fu_56308_p1 =  (sc_lv<5>) (zext_ln78_1370_fu_56304_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56308_p2() {
    mul_ln78_449_fu_56308_p2 = (!mul_ln78_449_fu_56308_p0.read().is_01() || !mul_ln78_449_fu_56308_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_449_fu_56308_p0.read()) * sc_biguint<5>(mul_ln78_449_fu_56308_p1.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35817_p0() {
    mul_ln78_44_fu_35817_p0 =  (sc_lv<5>) (mul_ln78_44_fu_35817_p00.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35817_p00() {
    mul_ln78_44_fu_35817_p00 = esl_zext<10,5>(reg_19411.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35817_p1() {
    mul_ln78_44_fu_35817_p1 =  (sc_lv<5>) (mul_ln78_44_fu_35817_p10.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35817_p10() {
    mul_ln78_44_fu_35817_p10 = esl_zext<10,5>(reg_19415.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35817_p2() {
    mul_ln78_44_fu_35817_p2 = (!mul_ln78_44_fu_35817_p0.read().is_01() || !mul_ln78_44_fu_35817_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_44_fu_35817_p0.read()) * sc_biguint<5>(mul_ln78_44_fu_35817_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56489_p0() {
    mul_ln78_450_fu_56489_p0 =  (sc_lv<5>) (zext_ln78_1377_fu_56485_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56489_p1() {
    mul_ln78_450_fu_56489_p1 =  (sc_lv<5>) (zext_ln78_1377_fu_56485_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56489_p2() {
    mul_ln78_450_fu_56489_p2 = (!mul_ln78_450_fu_56489_p0.read().is_01() || !mul_ln78_450_fu_56489_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_450_fu_56489_p0.read()) * sc_biguint<5>(mul_ln78_450_fu_56489_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56580_p0() {
    mul_ln78_451_fu_56580_p0 =  (sc_lv<5>) (zext_ln78_1384_fu_56576_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56580_p1() {
    mul_ln78_451_fu_56580_p1 =  (sc_lv<5>) (zext_ln78_1384_fu_56576_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56580_p2() {
    mul_ln78_451_fu_56580_p2 = (!mul_ln78_451_fu_56580_p0.read().is_01() || !mul_ln78_451_fu_56580_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_451_fu_56580_p0.read()) * sc_biguint<5>(mul_ln78_451_fu_56580_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56761_p0() {
    mul_ln78_452_fu_56761_p0 =  (sc_lv<5>) (zext_ln78_1391_fu_56757_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56761_p1() {
    mul_ln78_452_fu_56761_p1 =  (sc_lv<5>) (zext_ln78_1391_fu_56757_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56761_p2() {
    mul_ln78_452_fu_56761_p2 = (!mul_ln78_452_fu_56761_p0.read().is_01() || !mul_ln78_452_fu_56761_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_452_fu_56761_p0.read()) * sc_biguint<5>(mul_ln78_452_fu_56761_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56852_p0() {
    mul_ln78_453_fu_56852_p0 =  (sc_lv<5>) (zext_ln78_1398_fu_56848_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56852_p1() {
    mul_ln78_453_fu_56852_p1 =  (sc_lv<5>) (zext_ln78_1398_fu_56848_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56852_p2() {
    mul_ln78_453_fu_56852_p2 = (!mul_ln78_453_fu_56852_p0.read().is_01() || !mul_ln78_453_fu_56852_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_453_fu_56852_p0.read()) * sc_biguint<5>(mul_ln78_453_fu_56852_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_57033_p0() {
    mul_ln78_454_fu_57033_p0 =  (sc_lv<5>) (zext_ln78_1405_fu_57029_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_57033_p1() {
    mul_ln78_454_fu_57033_p1 =  (sc_lv<5>) (zext_ln78_1405_fu_57029_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_57033_p2() {
    mul_ln78_454_fu_57033_p2 = (!mul_ln78_454_fu_57033_p0.read().is_01() || !mul_ln78_454_fu_57033_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_454_fu_57033_p0.read()) * sc_biguint<5>(mul_ln78_454_fu_57033_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57124_p0() {
    mul_ln78_455_fu_57124_p0 =  (sc_lv<5>) (zext_ln78_1412_fu_57120_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57124_p1() {
    mul_ln78_455_fu_57124_p1 =  (sc_lv<5>) (zext_ln78_1412_fu_57120_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57124_p2() {
    mul_ln78_455_fu_57124_p2 = (!mul_ln78_455_fu_57124_p0.read().is_01() || !mul_ln78_455_fu_57124_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_455_fu_57124_p0.read()) * sc_biguint<5>(mul_ln78_455_fu_57124_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57305_p0() {
    mul_ln78_456_fu_57305_p0 =  (sc_lv<5>) (zext_ln78_1419_fu_57301_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57305_p1() {
    mul_ln78_456_fu_57305_p1 =  (sc_lv<5>) (zext_ln78_1419_fu_57301_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57305_p2() {
    mul_ln78_456_fu_57305_p2 = (!mul_ln78_456_fu_57305_p0.read().is_01() || !mul_ln78_456_fu_57305_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_456_fu_57305_p0.read()) * sc_biguint<5>(mul_ln78_456_fu_57305_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57396_p0() {
    mul_ln78_457_fu_57396_p0 =  (sc_lv<5>) (zext_ln78_1426_fu_57392_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57396_p1() {
    mul_ln78_457_fu_57396_p1 =  (sc_lv<5>) (zext_ln78_1426_fu_57392_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57396_p2() {
    mul_ln78_457_fu_57396_p2 = (!mul_ln78_457_fu_57396_p0.read().is_01() || !mul_ln78_457_fu_57396_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_457_fu_57396_p0.read()) * sc_biguint<5>(mul_ln78_457_fu_57396_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57577_p0() {
    mul_ln78_458_fu_57577_p0 =  (sc_lv<5>) (zext_ln78_1433_fu_57573_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57577_p1() {
    mul_ln78_458_fu_57577_p1 =  (sc_lv<5>) (zext_ln78_1433_fu_57573_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57577_p2() {
    mul_ln78_458_fu_57577_p2 = (!mul_ln78_458_fu_57577_p0.read().is_01() || !mul_ln78_458_fu_57577_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_458_fu_57577_p0.read()) * sc_biguint<5>(mul_ln78_458_fu_57577_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57668_p0() {
    mul_ln78_459_fu_57668_p0 =  (sc_lv<5>) (zext_ln78_1440_fu_57664_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57668_p1() {
    mul_ln78_459_fu_57668_p1 =  (sc_lv<5>) (zext_ln78_1440_fu_57664_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57668_p2() {
    mul_ln78_459_fu_57668_p2 = (!mul_ln78_459_fu_57668_p0.read().is_01() || !mul_ln78_459_fu_57668_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_459_fu_57668_p0.read()) * sc_biguint<5>(mul_ln78_459_fu_57668_p1.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35898_p0() {
    mul_ln78_45_fu_35898_p0 =  (sc_lv<5>) (mul_ln78_45_fu_35898_p00.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35898_p00() {
    mul_ln78_45_fu_35898_p00 = esl_zext<10,5>(reg_19444.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35898_p1() {
    mul_ln78_45_fu_35898_p1 =  (sc_lv<5>) (mul_ln78_45_fu_35898_p10.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35898_p10() {
    mul_ln78_45_fu_35898_p10 = esl_zext<10,5>(reg_19448.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35898_p2() {
    mul_ln78_45_fu_35898_p2 = (!mul_ln78_45_fu_35898_p0.read().is_01() || !mul_ln78_45_fu_35898_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_45_fu_35898_p0.read()) * sc_biguint<5>(mul_ln78_45_fu_35898_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57849_p0() {
    mul_ln78_460_fu_57849_p0 =  (sc_lv<5>) (zext_ln78_1447_fu_57845_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57849_p1() {
    mul_ln78_460_fu_57849_p1 =  (sc_lv<5>) (zext_ln78_1447_fu_57845_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57849_p2() {
    mul_ln78_460_fu_57849_p2 = (!mul_ln78_460_fu_57849_p0.read().is_01() || !mul_ln78_460_fu_57849_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_460_fu_57849_p0.read()) * sc_biguint<5>(mul_ln78_460_fu_57849_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57940_p0() {
    mul_ln78_461_fu_57940_p0 =  (sc_lv<5>) (zext_ln78_1454_fu_57936_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57940_p1() {
    mul_ln78_461_fu_57940_p1 =  (sc_lv<5>) (zext_ln78_1454_fu_57936_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57940_p2() {
    mul_ln78_461_fu_57940_p2 = (!mul_ln78_461_fu_57940_p0.read().is_01() || !mul_ln78_461_fu_57940_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_461_fu_57940_p0.read()) * sc_biguint<5>(mul_ln78_461_fu_57940_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58131_p0() {
    mul_ln78_462_fu_58131_p0 =  (sc_lv<5>) (zext_ln78_1461_fu_58127_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58131_p1() {
    mul_ln78_462_fu_58131_p1 =  (sc_lv<5>) (zext_ln78_1461_fu_58127_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58131_p2() {
    mul_ln78_462_fu_58131_p2 = (!mul_ln78_462_fu_58131_p0.read().is_01() || !mul_ln78_462_fu_58131_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_462_fu_58131_p0.read()) * sc_biguint<5>(mul_ln78_462_fu_58131_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58212_p0() {
    mul_ln78_463_fu_58212_p0 =  (sc_lv<5>) (zext_ln78_1468_fu_58208_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58212_p1() {
    mul_ln78_463_fu_58212_p1 =  (sc_lv<5>) (zext_ln78_1468_fu_58208_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58212_p2() {
    mul_ln78_463_fu_58212_p2 = (!mul_ln78_463_fu_58212_p0.read().is_01() || !mul_ln78_463_fu_58212_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_463_fu_58212_p0.read()) * sc_biguint<5>(mul_ln78_463_fu_58212_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58393_p0() {
    mul_ln78_464_fu_58393_p0 =  (sc_lv<5>) (zext_ln78_1475_fu_58389_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58393_p1() {
    mul_ln78_464_fu_58393_p1 =  (sc_lv<5>) (zext_ln78_1475_fu_58389_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58393_p2() {
    mul_ln78_464_fu_58393_p2 = (!mul_ln78_464_fu_58393_p0.read().is_01() || !mul_ln78_464_fu_58393_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_464_fu_58393_p0.read()) * sc_biguint<5>(mul_ln78_464_fu_58393_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58484_p0() {
    mul_ln78_465_fu_58484_p0 =  (sc_lv<5>) (zext_ln78_1482_fu_58480_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58484_p1() {
    mul_ln78_465_fu_58484_p1 =  (sc_lv<5>) (zext_ln78_1482_fu_58480_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58484_p2() {
    mul_ln78_465_fu_58484_p2 = (!mul_ln78_465_fu_58484_p0.read().is_01() || !mul_ln78_465_fu_58484_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_465_fu_58484_p0.read()) * sc_biguint<5>(mul_ln78_465_fu_58484_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58665_p0() {
    mul_ln78_466_fu_58665_p0 =  (sc_lv<5>) (zext_ln78_1489_fu_58661_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58665_p1() {
    mul_ln78_466_fu_58665_p1 =  (sc_lv<5>) (zext_ln78_1489_fu_58661_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58665_p2() {
    mul_ln78_466_fu_58665_p2 = (!mul_ln78_466_fu_58665_p0.read().is_01() || !mul_ln78_466_fu_58665_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_466_fu_58665_p0.read()) * sc_biguint<5>(mul_ln78_466_fu_58665_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58756_p0() {
    mul_ln78_467_fu_58756_p0 =  (sc_lv<5>) (zext_ln78_1496_fu_58752_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58756_p1() {
    mul_ln78_467_fu_58756_p1 =  (sc_lv<5>) (zext_ln78_1496_fu_58752_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58756_p2() {
    mul_ln78_467_fu_58756_p2 = (!mul_ln78_467_fu_58756_p0.read().is_01() || !mul_ln78_467_fu_58756_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_467_fu_58756_p0.read()) * sc_biguint<5>(mul_ln78_467_fu_58756_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58937_p0() {
    mul_ln78_468_fu_58937_p0 =  (sc_lv<5>) (zext_ln78_1503_fu_58933_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58937_p1() {
    mul_ln78_468_fu_58937_p1 =  (sc_lv<5>) (zext_ln78_1503_fu_58933_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58937_p2() {
    mul_ln78_468_fu_58937_p2 = (!mul_ln78_468_fu_58937_p0.read().is_01() || !mul_ln78_468_fu_58937_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_468_fu_58937_p0.read()) * sc_biguint<5>(mul_ln78_468_fu_58937_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_59028_p0() {
    mul_ln78_469_fu_59028_p0 =  (sc_lv<5>) (zext_ln78_1510_fu_59024_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_59028_p1() {
    mul_ln78_469_fu_59028_p1 =  (sc_lv<5>) (zext_ln78_1510_fu_59024_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_59028_p2() {
    mul_ln78_469_fu_59028_p2 = (!mul_ln78_469_fu_59028_p0.read().is_01() || !mul_ln78_469_fu_59028_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_469_fu_59028_p0.read()) * sc_biguint<5>(mul_ln78_469_fu_59028_p1.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36079_p0() {
    mul_ln78_46_fu_36079_p0 =  (sc_lv<5>) (mul_ln78_46_fu_36079_p00.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36079_p00() {
    mul_ln78_46_fu_36079_p00 = esl_zext<10,5>(reg_19498.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36079_p1() {
    mul_ln78_46_fu_36079_p1 =  (sc_lv<5>) (mul_ln78_46_fu_36079_p10.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36079_p10() {
    mul_ln78_46_fu_36079_p10 = esl_zext<10,5>(reg_19502.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36079_p2() {
    mul_ln78_46_fu_36079_p2 = (!mul_ln78_46_fu_36079_p0.read().is_01() || !mul_ln78_46_fu_36079_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_46_fu_36079_p0.read()) * sc_biguint<5>(mul_ln78_46_fu_36079_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59209_p0() {
    mul_ln78_470_fu_59209_p0 =  (sc_lv<5>) (zext_ln78_1517_fu_59205_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59209_p1() {
    mul_ln78_470_fu_59209_p1 =  (sc_lv<5>) (zext_ln78_1517_fu_59205_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59209_p2() {
    mul_ln78_470_fu_59209_p2 = (!mul_ln78_470_fu_59209_p0.read().is_01() || !mul_ln78_470_fu_59209_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_470_fu_59209_p0.read()) * sc_biguint<5>(mul_ln78_470_fu_59209_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59300_p0() {
    mul_ln78_471_fu_59300_p0 =  (sc_lv<5>) (zext_ln78_1524_fu_59296_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59300_p1() {
    mul_ln78_471_fu_59300_p1 =  (sc_lv<5>) (zext_ln78_1524_fu_59296_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59300_p2() {
    mul_ln78_471_fu_59300_p2 = (!mul_ln78_471_fu_59300_p0.read().is_01() || !mul_ln78_471_fu_59300_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_471_fu_59300_p0.read()) * sc_biguint<5>(mul_ln78_471_fu_59300_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59481_p0() {
    mul_ln78_472_fu_59481_p0 =  (sc_lv<5>) (zext_ln78_1531_fu_59477_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59481_p1() {
    mul_ln78_472_fu_59481_p1 =  (sc_lv<5>) (zext_ln78_1531_fu_59477_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59481_p2() {
    mul_ln78_472_fu_59481_p2 = (!mul_ln78_472_fu_59481_p0.read().is_01() || !mul_ln78_472_fu_59481_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_472_fu_59481_p0.read()) * sc_biguint<5>(mul_ln78_472_fu_59481_p1.read());
}

void HLS_accel::thread_mul_ln78_473_fu_59572_p0() {
    mul_ln78_473_fu_59572_p0 =  (sc_lv<5>) (zext_ln78_1538_fu_59568_p1.read());
}

void HLS_accel::thread_mul_ln78_473_fu_59572_p1() {
    mul_ln78_473_fu_59572_p1 =  (sc_lv<5>) (zext_ln78_1538_fu_59568_p1.read());
}

void HLS_accel::thread_mul_ln78_473_fu_59572_p2() {
    mul_ln78_473_fu_59572_p2 = (!mul_ln78_473_fu_59572_p0.read().is_01() || !mul_ln78_473_fu_59572_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_473_fu_59572_p0.read()) * sc_biguint<5>(mul_ln78_473_fu_59572_p1.read());
}

}

