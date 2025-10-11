#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_mul_ln78_213_fu_58704_p2() {
    mul_ln78_213_fu_58704_p2 = (!mul_ln78_213_fu_58704_p0.read().is_01() || !mul_ln78_213_fu_58704_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_213_fu_58704_p0.read()) * sc_biguint<5>(mul_ln78_213_fu_58704_p1.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58885_p0() {
    mul_ln78_214_fu_58885_p0 =  (sc_lv<5>) (mul_ln78_214_fu_58885_p00.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58885_p00() {
    mul_ln78_214_fu_58885_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58885_p1() {
    mul_ln78_214_fu_58885_p1 =  (sc_lv<5>) (mul_ln78_214_fu_58885_p10.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58885_p10() {
    mul_ln78_214_fu_58885_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_214_fu_58885_p2() {
    mul_ln78_214_fu_58885_p2 = (!mul_ln78_214_fu_58885_p0.read().is_01() || !mul_ln78_214_fu_58885_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_214_fu_58885_p0.read()) * sc_biguint<5>(mul_ln78_214_fu_58885_p1.read());
}

void HLS_accel::thread_mul_ln78_215_fu_58976_p0() {
    mul_ln78_215_fu_58976_p0 =  (sc_lv<5>) (mul_ln78_215_fu_58976_p00.read());
}

void HLS_accel::thread_mul_ln78_215_fu_58976_p00() {
    mul_ln78_215_fu_58976_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_215_fu_58976_p1() {
    mul_ln78_215_fu_58976_p1 =  (sc_lv<5>) (mul_ln78_215_fu_58976_p10.read());
}

void HLS_accel::thread_mul_ln78_215_fu_58976_p10() {
    mul_ln78_215_fu_58976_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_215_fu_58976_p2() {
    mul_ln78_215_fu_58976_p2 = (!mul_ln78_215_fu_58976_p0.read().is_01() || !mul_ln78_215_fu_58976_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_215_fu_58976_p0.read()) * sc_biguint<5>(mul_ln78_215_fu_58976_p1.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59157_p0() {
    mul_ln78_216_fu_59157_p0 =  (sc_lv<5>) (mul_ln78_216_fu_59157_p00.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59157_p00() {
    mul_ln78_216_fu_59157_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59157_p1() {
    mul_ln78_216_fu_59157_p1 =  (sc_lv<5>) (mul_ln78_216_fu_59157_p10.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59157_p10() {
    mul_ln78_216_fu_59157_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_216_fu_59157_p2() {
    mul_ln78_216_fu_59157_p2 = (!mul_ln78_216_fu_59157_p0.read().is_01() || !mul_ln78_216_fu_59157_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_216_fu_59157_p0.read()) * sc_biguint<5>(mul_ln78_216_fu_59157_p1.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59248_p0() {
    mul_ln78_217_fu_59248_p0 =  (sc_lv<5>) (mul_ln78_217_fu_59248_p00.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59248_p00() {
    mul_ln78_217_fu_59248_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59248_p1() {
    mul_ln78_217_fu_59248_p1 =  (sc_lv<5>) (mul_ln78_217_fu_59248_p10.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59248_p10() {
    mul_ln78_217_fu_59248_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_217_fu_59248_p2() {
    mul_ln78_217_fu_59248_p2 = (!mul_ln78_217_fu_59248_p0.read().is_01() || !mul_ln78_217_fu_59248_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_217_fu_59248_p0.read()) * sc_biguint<5>(mul_ln78_217_fu_59248_p1.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59429_p0() {
    mul_ln78_218_fu_59429_p0 =  (sc_lv<5>) (mul_ln78_218_fu_59429_p00.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59429_p00() {
    mul_ln78_218_fu_59429_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59429_p1() {
    mul_ln78_218_fu_59429_p1 =  (sc_lv<5>) (mul_ln78_218_fu_59429_p10.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59429_p10() {
    mul_ln78_218_fu_59429_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_218_fu_59429_p2() {
    mul_ln78_218_fu_59429_p2 = (!mul_ln78_218_fu_59429_p0.read().is_01() || !mul_ln78_218_fu_59429_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_218_fu_59429_p0.read()) * sc_biguint<5>(mul_ln78_218_fu_59429_p1.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59520_p0() {
    mul_ln78_219_fu_59520_p0 =  (sc_lv<5>) (mul_ln78_219_fu_59520_p00.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59520_p00() {
    mul_ln78_219_fu_59520_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59520_p1() {
    mul_ln78_219_fu_59520_p1 =  (sc_lv<5>) (mul_ln78_219_fu_59520_p10.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59520_p10() {
    mul_ln78_219_fu_59520_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_219_fu_59520_p2() {
    mul_ln78_219_fu_59520_p2 = (!mul_ln78_219_fu_59520_p0.read().is_01() || !mul_ln78_219_fu_59520_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_219_fu_59520_p0.read()) * sc_biguint<5>(mul_ln78_219_fu_59520_p1.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32592_p0() {
    mul_ln78_21_fu_32592_p0 =  (sc_lv<5>) (mul_ln78_21_fu_32592_p00.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32592_p00() {
    mul_ln78_21_fu_32592_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32592_p1() {
    mul_ln78_21_fu_32592_p1 =  (sc_lv<5>) (mul_ln78_21_fu_32592_p10.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32592_p10() {
    mul_ln78_21_fu_32592_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_21_fu_32592_p2() {
    mul_ln78_21_fu_32592_p2 = (!mul_ln78_21_fu_32592_p0.read().is_01() || !mul_ln78_21_fu_32592_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_21_fu_32592_p0.read()) * sc_biguint<5>(mul_ln78_21_fu_32592_p1.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59701_p0() {
    mul_ln78_220_fu_59701_p0 =  (sc_lv<5>) (mul_ln78_220_fu_59701_p00.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59701_p00() {
    mul_ln78_220_fu_59701_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59701_p1() {
    mul_ln78_220_fu_59701_p1 =  (sc_lv<5>) (mul_ln78_220_fu_59701_p10.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59701_p10() {
    mul_ln78_220_fu_59701_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_220_fu_59701_p2() {
    mul_ln78_220_fu_59701_p2 = (!mul_ln78_220_fu_59701_p0.read().is_01() || !mul_ln78_220_fu_59701_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_220_fu_59701_p0.read()) * sc_biguint<5>(mul_ln78_220_fu_59701_p1.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59792_p0() {
    mul_ln78_221_fu_59792_p0 =  (sc_lv<5>) (mul_ln78_221_fu_59792_p00.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59792_p00() {
    mul_ln78_221_fu_59792_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59792_p1() {
    mul_ln78_221_fu_59792_p1 =  (sc_lv<5>) (mul_ln78_221_fu_59792_p10.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59792_p10() {
    mul_ln78_221_fu_59792_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_221_fu_59792_p2() {
    mul_ln78_221_fu_59792_p2 = (!mul_ln78_221_fu_59792_p0.read().is_01() || !mul_ln78_221_fu_59792_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_221_fu_59792_p0.read()) * sc_biguint<5>(mul_ln78_221_fu_59792_p1.read());
}

void HLS_accel::thread_mul_ln78_222_fu_59973_p0() {
    mul_ln78_222_fu_59973_p0 =  (sc_lv<5>) (mul_ln78_222_fu_59973_p00.read());
}

void HLS_accel::thread_mul_ln78_222_fu_59973_p00() {
    mul_ln78_222_fu_59973_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_222_fu_59973_p1() {
    mul_ln78_222_fu_59973_p1 =  (sc_lv<5>) (mul_ln78_222_fu_59973_p10.read());
}

void HLS_accel::thread_mul_ln78_222_fu_59973_p10() {
    mul_ln78_222_fu_59973_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_222_fu_59973_p2() {
    mul_ln78_222_fu_59973_p2 = (!mul_ln78_222_fu_59973_p0.read().is_01() || !mul_ln78_222_fu_59973_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_222_fu_59973_p0.read()) * sc_biguint<5>(mul_ln78_222_fu_59973_p1.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60064_p0() {
    mul_ln78_223_fu_60064_p0 =  (sc_lv<5>) (mul_ln78_223_fu_60064_p00.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60064_p00() {
    mul_ln78_223_fu_60064_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60064_p1() {
    mul_ln78_223_fu_60064_p1 =  (sc_lv<5>) (mul_ln78_223_fu_60064_p10.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60064_p10() {
    mul_ln78_223_fu_60064_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_223_fu_60064_p2() {
    mul_ln78_223_fu_60064_p2 = (!mul_ln78_223_fu_60064_p0.read().is_01() || !mul_ln78_223_fu_60064_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_223_fu_60064_p0.read()) * sc_biguint<5>(mul_ln78_223_fu_60064_p1.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60245_p0() {
    mul_ln78_224_fu_60245_p0 =  (sc_lv<5>) (mul_ln78_224_fu_60245_p00.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60245_p00() {
    mul_ln78_224_fu_60245_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60245_p1() {
    mul_ln78_224_fu_60245_p1 =  (sc_lv<5>) (mul_ln78_224_fu_60245_p10.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60245_p10() {
    mul_ln78_224_fu_60245_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_224_fu_60245_p2() {
    mul_ln78_224_fu_60245_p2 = (!mul_ln78_224_fu_60245_p0.read().is_01() || !mul_ln78_224_fu_60245_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_224_fu_60245_p0.read()) * sc_biguint<5>(mul_ln78_224_fu_60245_p1.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60336_p0() {
    mul_ln78_225_fu_60336_p0 =  (sc_lv<5>) (mul_ln78_225_fu_60336_p00.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60336_p00() {
    mul_ln78_225_fu_60336_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60336_p1() {
    mul_ln78_225_fu_60336_p1 =  (sc_lv<5>) (mul_ln78_225_fu_60336_p10.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60336_p10() {
    mul_ln78_225_fu_60336_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_225_fu_60336_p2() {
    mul_ln78_225_fu_60336_p2 = (!mul_ln78_225_fu_60336_p0.read().is_01() || !mul_ln78_225_fu_60336_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_225_fu_60336_p0.read()) * sc_biguint<5>(mul_ln78_225_fu_60336_p1.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60517_p0() {
    mul_ln78_226_fu_60517_p0 =  (sc_lv<5>) (mul_ln78_226_fu_60517_p00.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60517_p00() {
    mul_ln78_226_fu_60517_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60517_p1() {
    mul_ln78_226_fu_60517_p1 =  (sc_lv<5>) (mul_ln78_226_fu_60517_p10.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60517_p10() {
    mul_ln78_226_fu_60517_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_226_fu_60517_p2() {
    mul_ln78_226_fu_60517_p2 = (!mul_ln78_226_fu_60517_p0.read().is_01() || !mul_ln78_226_fu_60517_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_226_fu_60517_p0.read()) * sc_biguint<5>(mul_ln78_226_fu_60517_p1.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60608_p0() {
    mul_ln78_227_fu_60608_p0 =  (sc_lv<5>) (mul_ln78_227_fu_60608_p00.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60608_p00() {
    mul_ln78_227_fu_60608_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60608_p1() {
    mul_ln78_227_fu_60608_p1 =  (sc_lv<5>) (mul_ln78_227_fu_60608_p10.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60608_p10() {
    mul_ln78_227_fu_60608_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_227_fu_60608_p2() {
    mul_ln78_227_fu_60608_p2 = (!mul_ln78_227_fu_60608_p0.read().is_01() || !mul_ln78_227_fu_60608_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_227_fu_60608_p0.read()) * sc_biguint<5>(mul_ln78_227_fu_60608_p1.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60789_p0() {
    mul_ln78_228_fu_60789_p0 =  (sc_lv<5>) (mul_ln78_228_fu_60789_p00.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60789_p00() {
    mul_ln78_228_fu_60789_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60789_p1() {
    mul_ln78_228_fu_60789_p1 =  (sc_lv<5>) (mul_ln78_228_fu_60789_p10.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60789_p10() {
    mul_ln78_228_fu_60789_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_228_fu_60789_p2() {
    mul_ln78_228_fu_60789_p2 = (!mul_ln78_228_fu_60789_p0.read().is_01() || !mul_ln78_228_fu_60789_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_228_fu_60789_p0.read()) * sc_biguint<5>(mul_ln78_228_fu_60789_p1.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60880_p0() {
    mul_ln78_229_fu_60880_p0 =  (sc_lv<5>) (mul_ln78_229_fu_60880_p00.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60880_p00() {
    mul_ln78_229_fu_60880_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60880_p1() {
    mul_ln78_229_fu_60880_p1 =  (sc_lv<5>) (mul_ln78_229_fu_60880_p10.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60880_p10() {
    mul_ln78_229_fu_60880_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_229_fu_60880_p2() {
    mul_ln78_229_fu_60880_p2 = (!mul_ln78_229_fu_60880_p0.read().is_01() || !mul_ln78_229_fu_60880_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_229_fu_60880_p0.read()) * sc_biguint<5>(mul_ln78_229_fu_60880_p1.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32773_p0() {
    mul_ln78_22_fu_32773_p0 =  (sc_lv<5>) (mul_ln78_22_fu_32773_p00.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32773_p00() {
    mul_ln78_22_fu_32773_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32773_p1() {
    mul_ln78_22_fu_32773_p1 =  (sc_lv<5>) (mul_ln78_22_fu_32773_p10.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32773_p10() {
    mul_ln78_22_fu_32773_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_22_fu_32773_p2() {
    mul_ln78_22_fu_32773_p2 = (!mul_ln78_22_fu_32773_p0.read().is_01() || !mul_ln78_22_fu_32773_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_22_fu_32773_p0.read()) * sc_biguint<5>(mul_ln78_22_fu_32773_p1.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61061_p0() {
    mul_ln78_230_fu_61061_p0 =  (sc_lv<5>) (mul_ln78_230_fu_61061_p00.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61061_p00() {
    mul_ln78_230_fu_61061_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61061_p1() {
    mul_ln78_230_fu_61061_p1 =  (sc_lv<5>) (mul_ln78_230_fu_61061_p10.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61061_p10() {
    mul_ln78_230_fu_61061_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_230_fu_61061_p2() {
    mul_ln78_230_fu_61061_p2 = (!mul_ln78_230_fu_61061_p0.read().is_01() || !mul_ln78_230_fu_61061_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_230_fu_61061_p0.read()) * sc_biguint<5>(mul_ln78_230_fu_61061_p1.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61152_p0() {
    mul_ln78_231_fu_61152_p0 =  (sc_lv<5>) (mul_ln78_231_fu_61152_p00.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61152_p00() {
    mul_ln78_231_fu_61152_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61152_p1() {
    mul_ln78_231_fu_61152_p1 =  (sc_lv<5>) (mul_ln78_231_fu_61152_p10.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61152_p10() {
    mul_ln78_231_fu_61152_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_231_fu_61152_p2() {
    mul_ln78_231_fu_61152_p2 = (!mul_ln78_231_fu_61152_p0.read().is_01() || !mul_ln78_231_fu_61152_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_231_fu_61152_p0.read()) * sc_biguint<5>(mul_ln78_231_fu_61152_p1.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61333_p0() {
    mul_ln78_232_fu_61333_p0 =  (sc_lv<5>) (mul_ln78_232_fu_61333_p00.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61333_p00() {
    mul_ln78_232_fu_61333_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61333_p1() {
    mul_ln78_232_fu_61333_p1 =  (sc_lv<5>) (mul_ln78_232_fu_61333_p10.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61333_p10() {
    mul_ln78_232_fu_61333_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_232_fu_61333_p2() {
    mul_ln78_232_fu_61333_p2 = (!mul_ln78_232_fu_61333_p0.read().is_01() || !mul_ln78_232_fu_61333_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_232_fu_61333_p0.read()) * sc_biguint<5>(mul_ln78_232_fu_61333_p1.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61424_p0() {
    mul_ln78_233_fu_61424_p0 =  (sc_lv<5>) (mul_ln78_233_fu_61424_p00.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61424_p00() {
    mul_ln78_233_fu_61424_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61424_p1() {
    mul_ln78_233_fu_61424_p1 =  (sc_lv<5>) (mul_ln78_233_fu_61424_p10.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61424_p10() {
    mul_ln78_233_fu_61424_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_233_fu_61424_p2() {
    mul_ln78_233_fu_61424_p2 = (!mul_ln78_233_fu_61424_p0.read().is_01() || !mul_ln78_233_fu_61424_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_233_fu_61424_p0.read()) * sc_biguint<5>(mul_ln78_233_fu_61424_p1.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61605_p0() {
    mul_ln78_234_fu_61605_p0 =  (sc_lv<5>) (mul_ln78_234_fu_61605_p00.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61605_p00() {
    mul_ln78_234_fu_61605_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61605_p1() {
    mul_ln78_234_fu_61605_p1 =  (sc_lv<5>) (mul_ln78_234_fu_61605_p10.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61605_p10() {
    mul_ln78_234_fu_61605_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_234_fu_61605_p2() {
    mul_ln78_234_fu_61605_p2 = (!mul_ln78_234_fu_61605_p0.read().is_01() || !mul_ln78_234_fu_61605_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_234_fu_61605_p0.read()) * sc_biguint<5>(mul_ln78_234_fu_61605_p1.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61696_p0() {
    mul_ln78_235_fu_61696_p0 =  (sc_lv<5>) (mul_ln78_235_fu_61696_p00.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61696_p00() {
    mul_ln78_235_fu_61696_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61696_p1() {
    mul_ln78_235_fu_61696_p1 =  (sc_lv<5>) (mul_ln78_235_fu_61696_p10.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61696_p10() {
    mul_ln78_235_fu_61696_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_235_fu_61696_p2() {
    mul_ln78_235_fu_61696_p2 = (!mul_ln78_235_fu_61696_p0.read().is_01() || !mul_ln78_235_fu_61696_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_235_fu_61696_p0.read()) * sc_biguint<5>(mul_ln78_235_fu_61696_p1.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61877_p0() {
    mul_ln78_236_fu_61877_p0 =  (sc_lv<5>) (mul_ln78_236_fu_61877_p00.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61877_p00() {
    mul_ln78_236_fu_61877_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61877_p1() {
    mul_ln78_236_fu_61877_p1 =  (sc_lv<5>) (mul_ln78_236_fu_61877_p10.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61877_p10() {
    mul_ln78_236_fu_61877_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_236_fu_61877_p2() {
    mul_ln78_236_fu_61877_p2 = (!mul_ln78_236_fu_61877_p0.read().is_01() || !mul_ln78_236_fu_61877_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_236_fu_61877_p0.read()) * sc_biguint<5>(mul_ln78_236_fu_61877_p1.read());
}

void HLS_accel::thread_mul_ln78_237_fu_61968_p0() {
    mul_ln78_237_fu_61968_p0 =  (sc_lv<5>) (mul_ln78_237_fu_61968_p00.read());
}

void HLS_accel::thread_mul_ln78_237_fu_61968_p00() {
    mul_ln78_237_fu_61968_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_237_fu_61968_p1() {
    mul_ln78_237_fu_61968_p1 =  (sc_lv<5>) (mul_ln78_237_fu_61968_p10.read());
}

void HLS_accel::thread_mul_ln78_237_fu_61968_p10() {
    mul_ln78_237_fu_61968_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_237_fu_61968_p2() {
    mul_ln78_237_fu_61968_p2 = (!mul_ln78_237_fu_61968_p0.read().is_01() || !mul_ln78_237_fu_61968_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_237_fu_61968_p0.read()) * sc_biguint<5>(mul_ln78_237_fu_61968_p1.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62149_p0() {
    mul_ln78_238_fu_62149_p0 =  (sc_lv<5>) (mul_ln78_238_fu_62149_p00.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62149_p00() {
    mul_ln78_238_fu_62149_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62149_p1() {
    mul_ln78_238_fu_62149_p1 =  (sc_lv<5>) (mul_ln78_238_fu_62149_p10.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62149_p10() {
    mul_ln78_238_fu_62149_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_238_fu_62149_p2() {
    mul_ln78_238_fu_62149_p2 = (!mul_ln78_238_fu_62149_p0.read().is_01() || !mul_ln78_238_fu_62149_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_238_fu_62149_p0.read()) * sc_biguint<5>(mul_ln78_238_fu_62149_p1.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62240_p0() {
    mul_ln78_239_fu_62240_p0 =  (sc_lv<5>) (mul_ln78_239_fu_62240_p00.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62240_p00() {
    mul_ln78_239_fu_62240_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62240_p1() {
    mul_ln78_239_fu_62240_p1 =  (sc_lv<5>) (mul_ln78_239_fu_62240_p10.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62240_p10() {
    mul_ln78_239_fu_62240_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_239_fu_62240_p2() {
    mul_ln78_239_fu_62240_p2 = (!mul_ln78_239_fu_62240_p0.read().is_01() || !mul_ln78_239_fu_62240_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_239_fu_62240_p0.read()) * sc_biguint<5>(mul_ln78_239_fu_62240_p1.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32864_p0() {
    mul_ln78_23_fu_32864_p0 =  (sc_lv<5>) (mul_ln78_23_fu_32864_p00.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32864_p00() {
    mul_ln78_23_fu_32864_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32864_p1() {
    mul_ln78_23_fu_32864_p1 =  (sc_lv<5>) (mul_ln78_23_fu_32864_p10.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32864_p10() {
    mul_ln78_23_fu_32864_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_23_fu_32864_p2() {
    mul_ln78_23_fu_32864_p2 = (!mul_ln78_23_fu_32864_p0.read().is_01() || !mul_ln78_23_fu_32864_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_23_fu_32864_p0.read()) * sc_biguint<5>(mul_ln78_23_fu_32864_p1.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62421_p0() {
    mul_ln78_240_fu_62421_p0 =  (sc_lv<5>) (mul_ln78_240_fu_62421_p00.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62421_p00() {
    mul_ln78_240_fu_62421_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62421_p1() {
    mul_ln78_240_fu_62421_p1 =  (sc_lv<5>) (mul_ln78_240_fu_62421_p10.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62421_p10() {
    mul_ln78_240_fu_62421_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_240_fu_62421_p2() {
    mul_ln78_240_fu_62421_p2 = (!mul_ln78_240_fu_62421_p0.read().is_01() || !mul_ln78_240_fu_62421_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_240_fu_62421_p0.read()) * sc_biguint<5>(mul_ln78_240_fu_62421_p1.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62512_p0() {
    mul_ln78_241_fu_62512_p0 =  (sc_lv<5>) (mul_ln78_241_fu_62512_p00.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62512_p00() {
    mul_ln78_241_fu_62512_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62512_p1() {
    mul_ln78_241_fu_62512_p1 =  (sc_lv<5>) (mul_ln78_241_fu_62512_p10.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62512_p10() {
    mul_ln78_241_fu_62512_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_241_fu_62512_p2() {
    mul_ln78_241_fu_62512_p2 = (!mul_ln78_241_fu_62512_p0.read().is_01() || !mul_ln78_241_fu_62512_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_241_fu_62512_p0.read()) * sc_biguint<5>(mul_ln78_241_fu_62512_p1.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62693_p0() {
    mul_ln78_242_fu_62693_p0 =  (sc_lv<5>) (mul_ln78_242_fu_62693_p00.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62693_p00() {
    mul_ln78_242_fu_62693_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62693_p1() {
    mul_ln78_242_fu_62693_p1 =  (sc_lv<5>) (mul_ln78_242_fu_62693_p10.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62693_p10() {
    mul_ln78_242_fu_62693_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_242_fu_62693_p2() {
    mul_ln78_242_fu_62693_p2 = (!mul_ln78_242_fu_62693_p0.read().is_01() || !mul_ln78_242_fu_62693_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_242_fu_62693_p0.read()) * sc_biguint<5>(mul_ln78_242_fu_62693_p1.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62784_p0() {
    mul_ln78_243_fu_62784_p0 =  (sc_lv<5>) (mul_ln78_243_fu_62784_p00.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62784_p00() {
    mul_ln78_243_fu_62784_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62784_p1() {
    mul_ln78_243_fu_62784_p1 =  (sc_lv<5>) (mul_ln78_243_fu_62784_p10.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62784_p10() {
    mul_ln78_243_fu_62784_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_243_fu_62784_p2() {
    mul_ln78_243_fu_62784_p2 = (!mul_ln78_243_fu_62784_p0.read().is_01() || !mul_ln78_243_fu_62784_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_243_fu_62784_p0.read()) * sc_biguint<5>(mul_ln78_243_fu_62784_p1.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62965_p0() {
    mul_ln78_244_fu_62965_p0 =  (sc_lv<5>) (mul_ln78_244_fu_62965_p00.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62965_p00() {
    mul_ln78_244_fu_62965_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62965_p1() {
    mul_ln78_244_fu_62965_p1 =  (sc_lv<5>) (mul_ln78_244_fu_62965_p10.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62965_p10() {
    mul_ln78_244_fu_62965_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_244_fu_62965_p2() {
    mul_ln78_244_fu_62965_p2 = (!mul_ln78_244_fu_62965_p0.read().is_01() || !mul_ln78_244_fu_62965_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_244_fu_62965_p0.read()) * sc_biguint<5>(mul_ln78_244_fu_62965_p1.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63056_p0() {
    mul_ln78_245_fu_63056_p0 =  (sc_lv<5>) (mul_ln78_245_fu_63056_p00.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63056_p00() {
    mul_ln78_245_fu_63056_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63056_p1() {
    mul_ln78_245_fu_63056_p1 =  (sc_lv<5>) (mul_ln78_245_fu_63056_p10.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63056_p10() {
    mul_ln78_245_fu_63056_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_245_fu_63056_p2() {
    mul_ln78_245_fu_63056_p2 = (!mul_ln78_245_fu_63056_p0.read().is_01() || !mul_ln78_245_fu_63056_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_245_fu_63056_p0.read()) * sc_biguint<5>(mul_ln78_245_fu_63056_p1.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63237_p0() {
    mul_ln78_246_fu_63237_p0 =  (sc_lv<5>) (mul_ln78_246_fu_63237_p00.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63237_p00() {
    mul_ln78_246_fu_63237_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63237_p1() {
    mul_ln78_246_fu_63237_p1 =  (sc_lv<5>) (mul_ln78_246_fu_63237_p10.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63237_p10() {
    mul_ln78_246_fu_63237_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_246_fu_63237_p2() {
    mul_ln78_246_fu_63237_p2 = (!mul_ln78_246_fu_63237_p0.read().is_01() || !mul_ln78_246_fu_63237_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_246_fu_63237_p0.read()) * sc_biguint<5>(mul_ln78_246_fu_63237_p1.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63298_p0() {
    mul_ln78_247_fu_63298_p0 =  (sc_lv<5>) (mul_ln78_247_fu_63298_p00.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63298_p00() {
    mul_ln78_247_fu_63298_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63298_p1() {
    mul_ln78_247_fu_63298_p1 =  (sc_lv<5>) (mul_ln78_247_fu_63298_p10.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63298_p10() {
    mul_ln78_247_fu_63298_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_247_fu_63298_p2() {
    mul_ln78_247_fu_63298_p2 = (!mul_ln78_247_fu_63298_p0.read().is_01() || !mul_ln78_247_fu_63298_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_247_fu_63298_p0.read()) * sc_biguint<5>(mul_ln78_247_fu_63298_p1.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63419_p0() {
    mul_ln78_248_fu_63419_p0 =  (sc_lv<5>) (mul_ln78_248_fu_63419_p00.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63419_p00() {
    mul_ln78_248_fu_63419_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63419_p1() {
    mul_ln78_248_fu_63419_p1 =  (sc_lv<5>) (mul_ln78_248_fu_63419_p10.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63419_p10() {
    mul_ln78_248_fu_63419_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_248_fu_63419_p2() {
    mul_ln78_248_fu_63419_p2 = (!mul_ln78_248_fu_63419_p0.read().is_01() || !mul_ln78_248_fu_63419_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_248_fu_63419_p0.read()) * sc_biguint<5>(mul_ln78_248_fu_63419_p1.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63480_p0() {
    mul_ln78_249_fu_63480_p0 =  (sc_lv<5>) (mul_ln78_249_fu_63480_p00.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63480_p00() {
    mul_ln78_249_fu_63480_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63480_p1() {
    mul_ln78_249_fu_63480_p1 =  (sc_lv<5>) (mul_ln78_249_fu_63480_p10.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63480_p10() {
    mul_ln78_249_fu_63480_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_249_fu_63480_p2() {
    mul_ln78_249_fu_63480_p2 = (!mul_ln78_249_fu_63480_p0.read().is_01() || !mul_ln78_249_fu_63480_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_249_fu_63480_p0.read()) * sc_biguint<5>(mul_ln78_249_fu_63480_p1.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33045_p0() {
    mul_ln78_24_fu_33045_p0 =  (sc_lv<5>) (mul_ln78_24_fu_33045_p00.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33045_p00() {
    mul_ln78_24_fu_33045_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33045_p1() {
    mul_ln78_24_fu_33045_p1 =  (sc_lv<5>) (mul_ln78_24_fu_33045_p10.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33045_p10() {
    mul_ln78_24_fu_33045_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_24_fu_33045_p2() {
    mul_ln78_24_fu_33045_p2 = (!mul_ln78_24_fu_33045_p0.read().is_01() || !mul_ln78_24_fu_33045_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_24_fu_33045_p0.read()) * sc_biguint<5>(mul_ln78_24_fu_33045_p1.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63601_p0() {
    mul_ln78_250_fu_63601_p0 =  (sc_lv<5>) (mul_ln78_250_fu_63601_p00.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63601_p00() {
    mul_ln78_250_fu_63601_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63601_p1() {
    mul_ln78_250_fu_63601_p1 =  (sc_lv<5>) (mul_ln78_250_fu_63601_p10.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63601_p10() {
    mul_ln78_250_fu_63601_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_250_fu_63601_p2() {
    mul_ln78_250_fu_63601_p2 = (!mul_ln78_250_fu_63601_p0.read().is_01() || !mul_ln78_250_fu_63601_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_250_fu_63601_p0.read()) * sc_biguint<5>(mul_ln78_250_fu_63601_p1.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63643_p0() {
    mul_ln78_251_fu_63643_p0 =  (sc_lv<5>) (mul_ln78_251_fu_63643_p00.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63643_p00() {
    mul_ln78_251_fu_63643_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63643_p1() {
    mul_ln78_251_fu_63643_p1 =  (sc_lv<5>) (mul_ln78_251_fu_63643_p10.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63643_p10() {
    mul_ln78_251_fu_63643_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_251_fu_63643_p2() {
    mul_ln78_251_fu_63643_p2 = (!mul_ln78_251_fu_63643_p0.read().is_01() || !mul_ln78_251_fu_63643_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_251_fu_63643_p0.read()) * sc_biguint<5>(mul_ln78_251_fu_63643_p1.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63745_p0() {
    mul_ln78_252_fu_63745_p0 =  (sc_lv<5>) (mul_ln78_252_fu_63745_p00.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63745_p00() {
    mul_ln78_252_fu_63745_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63745_p1() {
    mul_ln78_252_fu_63745_p1 =  (sc_lv<5>) (mul_ln78_252_fu_63745_p10.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63745_p10() {
    mul_ln78_252_fu_63745_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_252_fu_63745_p2() {
    mul_ln78_252_fu_63745_p2 = (!mul_ln78_252_fu_63745_p0.read().is_01() || !mul_ln78_252_fu_63745_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_252_fu_63745_p0.read()) * sc_biguint<5>(mul_ln78_252_fu_63745_p1.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63787_p0() {
    mul_ln78_253_fu_63787_p0 =  (sc_lv<5>) (mul_ln78_253_fu_63787_p00.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63787_p00() {
    mul_ln78_253_fu_63787_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63787_p1() {
    mul_ln78_253_fu_63787_p1 =  (sc_lv<5>) (mul_ln78_253_fu_63787_p10.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63787_p10() {
    mul_ln78_253_fu_63787_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_253_fu_63787_p2() {
    mul_ln78_253_fu_63787_p2 = (!mul_ln78_253_fu_63787_p0.read().is_01() || !mul_ln78_253_fu_63787_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_253_fu_63787_p0.read()) * sc_biguint<5>(mul_ln78_253_fu_63787_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30292_p0() {
    mul_ln78_254_fu_30292_p0 =  (sc_lv<5>) (zext_ln78_12_fu_30288_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30292_p1() {
    mul_ln78_254_fu_30292_p1 =  (sc_lv<5>) (zext_ln78_12_fu_30288_p1.read());
}

void HLS_accel::thread_mul_ln78_254_fu_30292_p2() {
    mul_ln78_254_fu_30292_p2 = (!mul_ln78_254_fu_30292_p0.read().is_01() || !mul_ln78_254_fu_30292_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_254_fu_30292_p0.read()) * sc_biguint<5>(mul_ln78_254_fu_30292_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30403_p0() {
    mul_ln78_255_fu_30403_p0 =  (sc_lv<5>) (zext_ln78_19_fu_30399_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30403_p1() {
    mul_ln78_255_fu_30403_p1 =  (sc_lv<5>) (zext_ln78_19_fu_30399_p1.read());
}

void HLS_accel::thread_mul_ln78_255_fu_30403_p2() {
    mul_ln78_255_fu_30403_p2 = (!mul_ln78_255_fu_30403_p0.read().is_01() || !mul_ln78_255_fu_30403_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_255_fu_30403_p0.read()) * sc_biguint<5>(mul_ln78_255_fu_30403_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30484_p0() {
    mul_ln78_256_fu_30484_p0 =  (sc_lv<5>) (zext_ln78_26_fu_30480_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30484_p1() {
    mul_ln78_256_fu_30484_p1 =  (sc_lv<5>) (zext_ln78_26_fu_30480_p1.read());
}

void HLS_accel::thread_mul_ln78_256_fu_30484_p2() {
    mul_ln78_256_fu_30484_p2 = (!mul_ln78_256_fu_30484_p0.read().is_01() || !mul_ln78_256_fu_30484_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_256_fu_30484_p0.read()) * sc_biguint<5>(mul_ln78_256_fu_30484_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30595_p0() {
    mul_ln78_257_fu_30595_p0 =  (sc_lv<5>) (zext_ln78_33_fu_30591_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30595_p1() {
    mul_ln78_257_fu_30595_p1 =  (sc_lv<5>) (zext_ln78_33_fu_30591_p1.read());
}

void HLS_accel::thread_mul_ln78_257_fu_30595_p2() {
    mul_ln78_257_fu_30595_p2 = (!mul_ln78_257_fu_30595_p0.read().is_01() || !mul_ln78_257_fu_30595_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_257_fu_30595_p0.read()) * sc_biguint<5>(mul_ln78_257_fu_30595_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30676_p0() {
    mul_ln78_258_fu_30676_p0 =  (sc_lv<5>) (zext_ln78_40_fu_30672_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30676_p1() {
    mul_ln78_258_fu_30676_p1 =  (sc_lv<5>) (zext_ln78_40_fu_30672_p1.read());
}

void HLS_accel::thread_mul_ln78_258_fu_30676_p2() {
    mul_ln78_258_fu_30676_p2 = (!mul_ln78_258_fu_30676_p0.read().is_01() || !mul_ln78_258_fu_30676_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_258_fu_30676_p0.read()) * sc_biguint<5>(mul_ln78_258_fu_30676_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30787_p0() {
    mul_ln78_259_fu_30787_p0 =  (sc_lv<5>) (zext_ln78_47_fu_30783_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30787_p1() {
    mul_ln78_259_fu_30787_p1 =  (sc_lv<5>) (zext_ln78_47_fu_30783_p1.read());
}

void HLS_accel::thread_mul_ln78_259_fu_30787_p2() {
    mul_ln78_259_fu_30787_p2 = (!mul_ln78_259_fu_30787_p0.read().is_01() || !mul_ln78_259_fu_30787_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_259_fu_30787_p0.read()) * sc_biguint<5>(mul_ln78_259_fu_30787_p1.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33136_p0() {
    mul_ln78_25_fu_33136_p0 =  (sc_lv<5>) (mul_ln78_25_fu_33136_p00.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33136_p00() {
    mul_ln78_25_fu_33136_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33136_p1() {
    mul_ln78_25_fu_33136_p1 =  (sc_lv<5>) (mul_ln78_25_fu_33136_p10.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33136_p10() {
    mul_ln78_25_fu_33136_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_25_fu_33136_p2() {
    mul_ln78_25_fu_33136_p2 = (!mul_ln78_25_fu_33136_p0.read().is_01() || !mul_ln78_25_fu_33136_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_25_fu_33136_p0.read()) * sc_biguint<5>(mul_ln78_25_fu_33136_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30868_p0() {
    mul_ln78_260_fu_30868_p0 =  (sc_lv<5>) (zext_ln78_54_fu_30864_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30868_p1() {
    mul_ln78_260_fu_30868_p1 =  (sc_lv<5>) (zext_ln78_54_fu_30864_p1.read());
}

void HLS_accel::thread_mul_ln78_260_fu_30868_p2() {
    mul_ln78_260_fu_30868_p2 = (!mul_ln78_260_fu_30868_p0.read().is_01() || !mul_ln78_260_fu_30868_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_260_fu_30868_p0.read()) * sc_biguint<5>(mul_ln78_260_fu_30868_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_30979_p0() {
    mul_ln78_261_fu_30979_p0 =  (sc_lv<5>) (zext_ln78_61_fu_30975_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_30979_p1() {
    mul_ln78_261_fu_30979_p1 =  (sc_lv<5>) (zext_ln78_61_fu_30975_p1.read());
}

void HLS_accel::thread_mul_ln78_261_fu_30979_p2() {
    mul_ln78_261_fu_30979_p2 = (!mul_ln78_261_fu_30979_p0.read().is_01() || !mul_ln78_261_fu_30979_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_261_fu_30979_p0.read()) * sc_biguint<5>(mul_ln78_261_fu_30979_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31060_p0() {
    mul_ln78_262_fu_31060_p0 =  (sc_lv<5>) (zext_ln78_68_fu_31056_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31060_p1() {
    mul_ln78_262_fu_31060_p1 =  (sc_lv<5>) (zext_ln78_68_fu_31056_p1.read());
}

void HLS_accel::thread_mul_ln78_262_fu_31060_p2() {
    mul_ln78_262_fu_31060_p2 = (!mul_ln78_262_fu_31060_p0.read().is_01() || !mul_ln78_262_fu_31060_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_262_fu_31060_p0.read()) * sc_biguint<5>(mul_ln78_262_fu_31060_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31171_p0() {
    mul_ln78_263_fu_31171_p0 =  (sc_lv<5>) (zext_ln78_75_fu_31167_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31171_p1() {
    mul_ln78_263_fu_31171_p1 =  (sc_lv<5>) (zext_ln78_75_fu_31167_p1.read());
}

void HLS_accel::thread_mul_ln78_263_fu_31171_p2() {
    mul_ln78_263_fu_31171_p2 = (!mul_ln78_263_fu_31171_p0.read().is_01() || !mul_ln78_263_fu_31171_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_263_fu_31171_p0.read()) * sc_biguint<5>(mul_ln78_263_fu_31171_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31252_p0() {
    mul_ln78_264_fu_31252_p0 =  (sc_lv<5>) (zext_ln78_82_fu_31248_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31252_p1() {
    mul_ln78_264_fu_31252_p1 =  (sc_lv<5>) (zext_ln78_82_fu_31248_p1.read());
}

void HLS_accel::thread_mul_ln78_264_fu_31252_p2() {
    mul_ln78_264_fu_31252_p2 = (!mul_ln78_264_fu_31252_p0.read().is_01() || !mul_ln78_264_fu_31252_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_264_fu_31252_p0.read()) * sc_biguint<5>(mul_ln78_264_fu_31252_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31423_p0() {
    mul_ln78_265_fu_31423_p0 =  (sc_lv<5>) (zext_ln78_89_fu_31419_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31423_p1() {
    mul_ln78_265_fu_31423_p1 =  (sc_lv<5>) (zext_ln78_89_fu_31419_p1.read());
}

void HLS_accel::thread_mul_ln78_265_fu_31423_p2() {
    mul_ln78_265_fu_31423_p2 = (!mul_ln78_265_fu_31423_p0.read().is_01() || !mul_ln78_265_fu_31423_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_265_fu_31423_p0.read()) * sc_biguint<5>(mul_ln78_265_fu_31423_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31514_p0() {
    mul_ln78_266_fu_31514_p0 =  (sc_lv<5>) (zext_ln78_96_fu_31510_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31514_p1() {
    mul_ln78_266_fu_31514_p1 =  (sc_lv<5>) (zext_ln78_96_fu_31510_p1.read());
}

void HLS_accel::thread_mul_ln78_266_fu_31514_p2() {
    mul_ln78_266_fu_31514_p2 = (!mul_ln78_266_fu_31514_p0.read().is_01() || !mul_ln78_266_fu_31514_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_266_fu_31514_p0.read()) * sc_biguint<5>(mul_ln78_266_fu_31514_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31695_p0() {
    mul_ln78_267_fu_31695_p0 =  (sc_lv<5>) (zext_ln78_103_fu_31691_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31695_p1() {
    mul_ln78_267_fu_31695_p1 =  (sc_lv<5>) (zext_ln78_103_fu_31691_p1.read());
}

void HLS_accel::thread_mul_ln78_267_fu_31695_p2() {
    mul_ln78_267_fu_31695_p2 = (!mul_ln78_267_fu_31695_p0.read().is_01() || !mul_ln78_267_fu_31695_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_267_fu_31695_p0.read()) * sc_biguint<5>(mul_ln78_267_fu_31695_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31786_p0() {
    mul_ln78_268_fu_31786_p0 =  (sc_lv<5>) (zext_ln78_110_fu_31782_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31786_p1() {
    mul_ln78_268_fu_31786_p1 =  (sc_lv<5>) (zext_ln78_110_fu_31782_p1.read());
}

void HLS_accel::thread_mul_ln78_268_fu_31786_p2() {
    mul_ln78_268_fu_31786_p2 = (!mul_ln78_268_fu_31786_p0.read().is_01() || !mul_ln78_268_fu_31786_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_268_fu_31786_p0.read()) * sc_biguint<5>(mul_ln78_268_fu_31786_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_31967_p0() {
    mul_ln78_269_fu_31967_p0 =  (sc_lv<5>) (zext_ln78_117_fu_31963_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_31967_p1() {
    mul_ln78_269_fu_31967_p1 =  (sc_lv<5>) (zext_ln78_117_fu_31963_p1.read());
}

void HLS_accel::thread_mul_ln78_269_fu_31967_p2() {
    mul_ln78_269_fu_31967_p2 = (!mul_ln78_269_fu_31967_p0.read().is_01() || !mul_ln78_269_fu_31967_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_269_fu_31967_p0.read()) * sc_biguint<5>(mul_ln78_269_fu_31967_p1.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33317_p0() {
    mul_ln78_26_fu_33317_p0 =  (sc_lv<5>) (mul_ln78_26_fu_33317_p00.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33317_p00() {
    mul_ln78_26_fu_33317_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33317_p1() {
    mul_ln78_26_fu_33317_p1 =  (sc_lv<5>) (mul_ln78_26_fu_33317_p10.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33317_p10() {
    mul_ln78_26_fu_33317_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_26_fu_33317_p2() {
    mul_ln78_26_fu_33317_p2 = (!mul_ln78_26_fu_33317_p0.read().is_01() || !mul_ln78_26_fu_33317_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_26_fu_33317_p0.read()) * sc_biguint<5>(mul_ln78_26_fu_33317_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32058_p0() {
    mul_ln78_270_fu_32058_p0 =  (sc_lv<5>) (zext_ln78_124_fu_32054_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32058_p1() {
    mul_ln78_270_fu_32058_p1 =  (sc_lv<5>) (zext_ln78_124_fu_32054_p1.read());
}

void HLS_accel::thread_mul_ln78_270_fu_32058_p2() {
    mul_ln78_270_fu_32058_p2 = (!mul_ln78_270_fu_32058_p0.read().is_01() || !mul_ln78_270_fu_32058_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_270_fu_32058_p0.read()) * sc_biguint<5>(mul_ln78_270_fu_32058_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32239_p0() {
    mul_ln78_271_fu_32239_p0 =  (sc_lv<5>) (zext_ln78_131_fu_32235_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32239_p1() {
    mul_ln78_271_fu_32239_p1 =  (sc_lv<5>) (zext_ln78_131_fu_32235_p1.read());
}

void HLS_accel::thread_mul_ln78_271_fu_32239_p2() {
    mul_ln78_271_fu_32239_p2 = (!mul_ln78_271_fu_32239_p0.read().is_01() || !mul_ln78_271_fu_32239_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_271_fu_32239_p0.read()) * sc_biguint<5>(mul_ln78_271_fu_32239_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32330_p0() {
    mul_ln78_272_fu_32330_p0 =  (sc_lv<5>) (zext_ln78_138_fu_32326_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32330_p1() {
    mul_ln78_272_fu_32330_p1 =  (sc_lv<5>) (zext_ln78_138_fu_32326_p1.read());
}

void HLS_accel::thread_mul_ln78_272_fu_32330_p2() {
    mul_ln78_272_fu_32330_p2 = (!mul_ln78_272_fu_32330_p0.read().is_01() || !mul_ln78_272_fu_32330_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_272_fu_32330_p0.read()) * sc_biguint<5>(mul_ln78_272_fu_32330_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32511_p0() {
    mul_ln78_273_fu_32511_p0 =  (sc_lv<5>) (zext_ln78_145_fu_32507_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32511_p1() {
    mul_ln78_273_fu_32511_p1 =  (sc_lv<5>) (zext_ln78_145_fu_32507_p1.read());
}

void HLS_accel::thread_mul_ln78_273_fu_32511_p2() {
    mul_ln78_273_fu_32511_p2 = (!mul_ln78_273_fu_32511_p0.read().is_01() || !mul_ln78_273_fu_32511_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_273_fu_32511_p0.read()) * sc_biguint<5>(mul_ln78_273_fu_32511_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32602_p0() {
    mul_ln78_274_fu_32602_p0 =  (sc_lv<5>) (zext_ln78_152_fu_32598_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32602_p1() {
    mul_ln78_274_fu_32602_p1 =  (sc_lv<5>) (zext_ln78_152_fu_32598_p1.read());
}

void HLS_accel::thread_mul_ln78_274_fu_32602_p2() {
    mul_ln78_274_fu_32602_p2 = (!mul_ln78_274_fu_32602_p0.read().is_01() || !mul_ln78_274_fu_32602_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_274_fu_32602_p0.read()) * sc_biguint<5>(mul_ln78_274_fu_32602_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32783_p0() {
    mul_ln78_275_fu_32783_p0 =  (sc_lv<5>) (zext_ln78_159_fu_32779_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32783_p1() {
    mul_ln78_275_fu_32783_p1 =  (sc_lv<5>) (zext_ln78_159_fu_32779_p1.read());
}

void HLS_accel::thread_mul_ln78_275_fu_32783_p2() {
    mul_ln78_275_fu_32783_p2 = (!mul_ln78_275_fu_32783_p0.read().is_01() || !mul_ln78_275_fu_32783_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_275_fu_32783_p0.read()) * sc_biguint<5>(mul_ln78_275_fu_32783_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32874_p0() {
    mul_ln78_276_fu_32874_p0 =  (sc_lv<5>) (zext_ln78_166_fu_32870_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32874_p1() {
    mul_ln78_276_fu_32874_p1 =  (sc_lv<5>) (zext_ln78_166_fu_32870_p1.read());
}

void HLS_accel::thread_mul_ln78_276_fu_32874_p2() {
    mul_ln78_276_fu_32874_p2 = (!mul_ln78_276_fu_32874_p0.read().is_01() || !mul_ln78_276_fu_32874_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_276_fu_32874_p0.read()) * sc_biguint<5>(mul_ln78_276_fu_32874_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33055_p0() {
    mul_ln78_277_fu_33055_p0 =  (sc_lv<5>) (zext_ln78_173_fu_33051_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33055_p1() {
    mul_ln78_277_fu_33055_p1 =  (sc_lv<5>) (zext_ln78_173_fu_33051_p1.read());
}

void HLS_accel::thread_mul_ln78_277_fu_33055_p2() {
    mul_ln78_277_fu_33055_p2 = (!mul_ln78_277_fu_33055_p0.read().is_01() || !mul_ln78_277_fu_33055_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_277_fu_33055_p0.read()) * sc_biguint<5>(mul_ln78_277_fu_33055_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33146_p0() {
    mul_ln78_278_fu_33146_p0 =  (sc_lv<5>) (zext_ln78_180_fu_33142_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33146_p1() {
    mul_ln78_278_fu_33146_p1 =  (sc_lv<5>) (zext_ln78_180_fu_33142_p1.read());
}

void HLS_accel::thread_mul_ln78_278_fu_33146_p2() {
    mul_ln78_278_fu_33146_p2 = (!mul_ln78_278_fu_33146_p0.read().is_01() || !mul_ln78_278_fu_33146_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_278_fu_33146_p0.read()) * sc_biguint<5>(mul_ln78_278_fu_33146_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33327_p0() {
    mul_ln78_279_fu_33327_p0 =  (sc_lv<5>) (zext_ln78_187_fu_33323_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33327_p1() {
    mul_ln78_279_fu_33327_p1 =  (sc_lv<5>) (zext_ln78_187_fu_33323_p1.read());
}

void HLS_accel::thread_mul_ln78_279_fu_33327_p2() {
    mul_ln78_279_fu_33327_p2 = (!mul_ln78_279_fu_33327_p0.read().is_01() || !mul_ln78_279_fu_33327_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_279_fu_33327_p0.read()) * sc_biguint<5>(mul_ln78_279_fu_33327_p1.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33408_p0() {
    mul_ln78_27_fu_33408_p0 =  (sc_lv<5>) (mul_ln78_27_fu_33408_p00.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33408_p00() {
    mul_ln78_27_fu_33408_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33408_p1() {
    mul_ln78_27_fu_33408_p1 =  (sc_lv<5>) (mul_ln78_27_fu_33408_p10.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33408_p10() {
    mul_ln78_27_fu_33408_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_27_fu_33408_p2() {
    mul_ln78_27_fu_33408_p2 = (!mul_ln78_27_fu_33408_p0.read().is_01() || !mul_ln78_27_fu_33408_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_27_fu_33408_p0.read()) * sc_biguint<5>(mul_ln78_27_fu_33408_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33418_p0() {
    mul_ln78_280_fu_33418_p0 =  (sc_lv<5>) (zext_ln78_194_fu_33414_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33418_p1() {
    mul_ln78_280_fu_33418_p1 =  (sc_lv<5>) (zext_ln78_194_fu_33414_p1.read());
}

void HLS_accel::thread_mul_ln78_280_fu_33418_p2() {
    mul_ln78_280_fu_33418_p2 = (!mul_ln78_280_fu_33418_p0.read().is_01() || !mul_ln78_280_fu_33418_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_280_fu_33418_p0.read()) * sc_biguint<5>(mul_ln78_280_fu_33418_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33599_p0() {
    mul_ln78_281_fu_33599_p0 =  (sc_lv<5>) (zext_ln78_201_fu_33595_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33599_p1() {
    mul_ln78_281_fu_33599_p1 =  (sc_lv<5>) (zext_ln78_201_fu_33595_p1.read());
}

void HLS_accel::thread_mul_ln78_281_fu_33599_p2() {
    mul_ln78_281_fu_33599_p2 = (!mul_ln78_281_fu_33599_p0.read().is_01() || !mul_ln78_281_fu_33599_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_281_fu_33599_p0.read()) * sc_biguint<5>(mul_ln78_281_fu_33599_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33690_p0() {
    mul_ln78_282_fu_33690_p0 =  (sc_lv<5>) (zext_ln78_208_fu_33686_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33690_p1() {
    mul_ln78_282_fu_33690_p1 =  (sc_lv<5>) (zext_ln78_208_fu_33686_p1.read());
}

void HLS_accel::thread_mul_ln78_282_fu_33690_p2() {
    mul_ln78_282_fu_33690_p2 = (!mul_ln78_282_fu_33690_p0.read().is_01() || !mul_ln78_282_fu_33690_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_282_fu_33690_p0.read()) * sc_biguint<5>(mul_ln78_282_fu_33690_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33871_p0() {
    mul_ln78_283_fu_33871_p0 =  (sc_lv<5>) (zext_ln78_215_fu_33867_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33871_p1() {
    mul_ln78_283_fu_33871_p1 =  (sc_lv<5>) (zext_ln78_215_fu_33867_p1.read());
}

void HLS_accel::thread_mul_ln78_283_fu_33871_p2() {
    mul_ln78_283_fu_33871_p2 = (!mul_ln78_283_fu_33871_p0.read().is_01() || !mul_ln78_283_fu_33871_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_283_fu_33871_p0.read()) * sc_biguint<5>(mul_ln78_283_fu_33871_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_33962_p0() {
    mul_ln78_284_fu_33962_p0 =  (sc_lv<5>) (zext_ln78_222_fu_33958_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_33962_p1() {
    mul_ln78_284_fu_33962_p1 =  (sc_lv<5>) (zext_ln78_222_fu_33958_p1.read());
}

void HLS_accel::thread_mul_ln78_284_fu_33962_p2() {
    mul_ln78_284_fu_33962_p2 = (!mul_ln78_284_fu_33962_p0.read().is_01() || !mul_ln78_284_fu_33962_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_284_fu_33962_p0.read()) * sc_biguint<5>(mul_ln78_284_fu_33962_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34143_p0() {
    mul_ln78_285_fu_34143_p0 =  (sc_lv<5>) (zext_ln78_229_fu_34139_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34143_p1() {
    mul_ln78_285_fu_34143_p1 =  (sc_lv<5>) (zext_ln78_229_fu_34139_p1.read());
}

void HLS_accel::thread_mul_ln78_285_fu_34143_p2() {
    mul_ln78_285_fu_34143_p2 = (!mul_ln78_285_fu_34143_p0.read().is_01() || !mul_ln78_285_fu_34143_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_285_fu_34143_p0.read()) * sc_biguint<5>(mul_ln78_285_fu_34143_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34234_p0() {
    mul_ln78_286_fu_34234_p0 =  (sc_lv<5>) (zext_ln78_236_fu_34230_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34234_p1() {
    mul_ln78_286_fu_34234_p1 =  (sc_lv<5>) (zext_ln78_236_fu_34230_p1.read());
}

void HLS_accel::thread_mul_ln78_286_fu_34234_p2() {
    mul_ln78_286_fu_34234_p2 = (!mul_ln78_286_fu_34234_p0.read().is_01() || !mul_ln78_286_fu_34234_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_286_fu_34234_p0.read()) * sc_biguint<5>(mul_ln78_286_fu_34234_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34415_p0() {
    mul_ln78_287_fu_34415_p0 =  (sc_lv<5>) (zext_ln78_243_fu_34411_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34415_p1() {
    mul_ln78_287_fu_34415_p1 =  (sc_lv<5>) (zext_ln78_243_fu_34411_p1.read());
}

void HLS_accel::thread_mul_ln78_287_fu_34415_p2() {
    mul_ln78_287_fu_34415_p2 = (!mul_ln78_287_fu_34415_p0.read().is_01() || !mul_ln78_287_fu_34415_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_287_fu_34415_p0.read()) * sc_biguint<5>(mul_ln78_287_fu_34415_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34506_p0() {
    mul_ln78_288_fu_34506_p0 =  (sc_lv<5>) (zext_ln78_250_fu_34502_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34506_p1() {
    mul_ln78_288_fu_34506_p1 =  (sc_lv<5>) (zext_ln78_250_fu_34502_p1.read());
}

void HLS_accel::thread_mul_ln78_288_fu_34506_p2() {
    mul_ln78_288_fu_34506_p2 = (!mul_ln78_288_fu_34506_p0.read().is_01() || !mul_ln78_288_fu_34506_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_288_fu_34506_p0.read()) * sc_biguint<5>(mul_ln78_288_fu_34506_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34687_p0() {
    mul_ln78_289_fu_34687_p0 =  (sc_lv<5>) (zext_ln78_257_fu_34683_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34687_p1() {
    mul_ln78_289_fu_34687_p1 =  (sc_lv<5>) (zext_ln78_257_fu_34683_p1.read());
}

void HLS_accel::thread_mul_ln78_289_fu_34687_p2() {
    mul_ln78_289_fu_34687_p2 = (!mul_ln78_289_fu_34687_p0.read().is_01() || !mul_ln78_289_fu_34687_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_289_fu_34687_p0.read()) * sc_biguint<5>(mul_ln78_289_fu_34687_p1.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33589_p0() {
    mul_ln78_28_fu_33589_p0 =  (sc_lv<5>) (mul_ln78_28_fu_33589_p00.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33589_p00() {
    mul_ln78_28_fu_33589_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33589_p1() {
    mul_ln78_28_fu_33589_p1 =  (sc_lv<5>) (mul_ln78_28_fu_33589_p10.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33589_p10() {
    mul_ln78_28_fu_33589_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_28_fu_33589_p2() {
    mul_ln78_28_fu_33589_p2 = (!mul_ln78_28_fu_33589_p0.read().is_01() || !mul_ln78_28_fu_33589_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_28_fu_33589_p0.read()) * sc_biguint<5>(mul_ln78_28_fu_33589_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34778_p0() {
    mul_ln78_290_fu_34778_p0 =  (sc_lv<5>) (zext_ln78_264_fu_34774_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34778_p1() {
    mul_ln78_290_fu_34778_p1 =  (sc_lv<5>) (zext_ln78_264_fu_34774_p1.read());
}

void HLS_accel::thread_mul_ln78_290_fu_34778_p2() {
    mul_ln78_290_fu_34778_p2 = (!mul_ln78_290_fu_34778_p0.read().is_01() || !mul_ln78_290_fu_34778_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_290_fu_34778_p0.read()) * sc_biguint<5>(mul_ln78_290_fu_34778_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_34959_p0() {
    mul_ln78_291_fu_34959_p0 =  (sc_lv<5>) (zext_ln78_271_fu_34955_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_34959_p1() {
    mul_ln78_291_fu_34959_p1 =  (sc_lv<5>) (zext_ln78_271_fu_34955_p1.read());
}

void HLS_accel::thread_mul_ln78_291_fu_34959_p2() {
    mul_ln78_291_fu_34959_p2 = (!mul_ln78_291_fu_34959_p0.read().is_01() || !mul_ln78_291_fu_34959_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_291_fu_34959_p0.read()) * sc_biguint<5>(mul_ln78_291_fu_34959_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35050_p0() {
    mul_ln78_292_fu_35050_p0 =  (sc_lv<5>) (zext_ln78_278_fu_35046_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35050_p1() {
    mul_ln78_292_fu_35050_p1 =  (sc_lv<5>) (zext_ln78_278_fu_35046_p1.read());
}

void HLS_accel::thread_mul_ln78_292_fu_35050_p2() {
    mul_ln78_292_fu_35050_p2 = (!mul_ln78_292_fu_35050_p0.read().is_01() || !mul_ln78_292_fu_35050_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_292_fu_35050_p0.read()) * sc_biguint<5>(mul_ln78_292_fu_35050_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35231_p0() {
    mul_ln78_293_fu_35231_p0 =  (sc_lv<5>) (zext_ln78_285_fu_35227_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35231_p1() {
    mul_ln78_293_fu_35231_p1 =  (sc_lv<5>) (zext_ln78_285_fu_35227_p1.read());
}

void HLS_accel::thread_mul_ln78_293_fu_35231_p2() {
    mul_ln78_293_fu_35231_p2 = (!mul_ln78_293_fu_35231_p0.read().is_01() || !mul_ln78_293_fu_35231_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_293_fu_35231_p0.read()) * sc_biguint<5>(mul_ln78_293_fu_35231_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35322_p0() {
    mul_ln78_294_fu_35322_p0 =  (sc_lv<5>) (zext_ln78_292_fu_35318_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35322_p1() {
    mul_ln78_294_fu_35322_p1 =  (sc_lv<5>) (zext_ln78_292_fu_35318_p1.read());
}

void HLS_accel::thread_mul_ln78_294_fu_35322_p2() {
    mul_ln78_294_fu_35322_p2 = (!mul_ln78_294_fu_35322_p0.read().is_01() || !mul_ln78_294_fu_35322_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_294_fu_35322_p0.read()) * sc_biguint<5>(mul_ln78_294_fu_35322_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35503_p0() {
    mul_ln78_295_fu_35503_p0 =  (sc_lv<5>) (zext_ln78_299_fu_35499_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35503_p1() {
    mul_ln78_295_fu_35503_p1 =  (sc_lv<5>) (zext_ln78_299_fu_35499_p1.read());
}

void HLS_accel::thread_mul_ln78_295_fu_35503_p2() {
    mul_ln78_295_fu_35503_p2 = (!mul_ln78_295_fu_35503_p0.read().is_01() || !mul_ln78_295_fu_35503_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_295_fu_35503_p0.read()) * sc_biguint<5>(mul_ln78_295_fu_35503_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35594_p0() {
    mul_ln78_296_fu_35594_p0 =  (sc_lv<5>) (zext_ln78_306_fu_35590_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35594_p1() {
    mul_ln78_296_fu_35594_p1 =  (sc_lv<5>) (zext_ln78_306_fu_35590_p1.read());
}

void HLS_accel::thread_mul_ln78_296_fu_35594_p2() {
    mul_ln78_296_fu_35594_p2 = (!mul_ln78_296_fu_35594_p0.read().is_01() || !mul_ln78_296_fu_35594_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_296_fu_35594_p0.read()) * sc_biguint<5>(mul_ln78_296_fu_35594_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35775_p0() {
    mul_ln78_297_fu_35775_p0 =  (sc_lv<5>) (zext_ln78_313_fu_35771_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35775_p1() {
    mul_ln78_297_fu_35775_p1 =  (sc_lv<5>) (zext_ln78_313_fu_35771_p1.read());
}

void HLS_accel::thread_mul_ln78_297_fu_35775_p2() {
    mul_ln78_297_fu_35775_p2 = (!mul_ln78_297_fu_35775_p0.read().is_01() || !mul_ln78_297_fu_35775_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_297_fu_35775_p0.read()) * sc_biguint<5>(mul_ln78_297_fu_35775_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35866_p0() {
    mul_ln78_298_fu_35866_p0 =  (sc_lv<5>) (zext_ln78_320_fu_35862_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35866_p1() {
    mul_ln78_298_fu_35866_p1 =  (sc_lv<5>) (zext_ln78_320_fu_35862_p1.read());
}

void HLS_accel::thread_mul_ln78_298_fu_35866_p2() {
    mul_ln78_298_fu_35866_p2 = (!mul_ln78_298_fu_35866_p0.read().is_01() || !mul_ln78_298_fu_35866_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_298_fu_35866_p0.read()) * sc_biguint<5>(mul_ln78_298_fu_35866_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36047_p0() {
    mul_ln78_299_fu_36047_p0 =  (sc_lv<5>) (zext_ln78_327_fu_36043_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36047_p1() {
    mul_ln78_299_fu_36047_p1 =  (sc_lv<5>) (zext_ln78_327_fu_36043_p1.read());
}

void HLS_accel::thread_mul_ln78_299_fu_36047_p2() {
    mul_ln78_299_fu_36047_p2 = (!mul_ln78_299_fu_36047_p0.read().is_01() || !mul_ln78_299_fu_36047_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_299_fu_36047_p0.read()) * sc_biguint<5>(mul_ln78_299_fu_36047_p1.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33680_p0() {
    mul_ln78_29_fu_33680_p0 =  (sc_lv<5>) (mul_ln78_29_fu_33680_p00.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33680_p00() {
    mul_ln78_29_fu_33680_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33680_p1() {
    mul_ln78_29_fu_33680_p1 =  (sc_lv<5>) (mul_ln78_29_fu_33680_p10.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33680_p10() {
    mul_ln78_29_fu_33680_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_29_fu_33680_p2() {
    mul_ln78_29_fu_33680_p2 = (!mul_ln78_29_fu_33680_p0.read().is_01() || !mul_ln78_29_fu_33680_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_29_fu_33680_p0.read()) * sc_biguint<5>(mul_ln78_29_fu_33680_p1.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30393_p0() {
    mul_ln78_2_fu_30393_p0 =  (sc_lv<5>) (mul_ln78_2_fu_30393_p00.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30393_p00() {
    mul_ln78_2_fu_30393_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30393_p1() {
    mul_ln78_2_fu_30393_p1 =  (sc_lv<5>) (mul_ln78_2_fu_30393_p10.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30393_p10() {
    mul_ln78_2_fu_30393_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_2_fu_30393_p2() {
    mul_ln78_2_fu_30393_p2 = (!mul_ln78_2_fu_30393_p0.read().is_01() || !mul_ln78_2_fu_30393_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_2_fu_30393_p0.read()) * sc_biguint<5>(mul_ln78_2_fu_30393_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36138_p0() {
    mul_ln78_300_fu_36138_p0 =  (sc_lv<5>) (zext_ln78_334_fu_36134_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36138_p1() {
    mul_ln78_300_fu_36138_p1 =  (sc_lv<5>) (zext_ln78_334_fu_36134_p1.read());
}

void HLS_accel::thread_mul_ln78_300_fu_36138_p2() {
    mul_ln78_300_fu_36138_p2 = (!mul_ln78_300_fu_36138_p0.read().is_01() || !mul_ln78_300_fu_36138_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_300_fu_36138_p0.read()) * sc_biguint<5>(mul_ln78_300_fu_36138_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36319_p0() {
    mul_ln78_301_fu_36319_p0 =  (sc_lv<5>) (zext_ln78_341_fu_36315_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36319_p1() {
    mul_ln78_301_fu_36319_p1 =  (sc_lv<5>) (zext_ln78_341_fu_36315_p1.read());
}

void HLS_accel::thread_mul_ln78_301_fu_36319_p2() {
    mul_ln78_301_fu_36319_p2 = (!mul_ln78_301_fu_36319_p0.read().is_01() || !mul_ln78_301_fu_36319_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_301_fu_36319_p0.read()) * sc_biguint<5>(mul_ln78_301_fu_36319_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36410_p0() {
    mul_ln78_302_fu_36410_p0 =  (sc_lv<5>) (zext_ln78_348_fu_36406_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36410_p1() {
    mul_ln78_302_fu_36410_p1 =  (sc_lv<5>) (zext_ln78_348_fu_36406_p1.read());
}

void HLS_accel::thread_mul_ln78_302_fu_36410_p2() {
    mul_ln78_302_fu_36410_p2 = (!mul_ln78_302_fu_36410_p0.read().is_01() || !mul_ln78_302_fu_36410_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_302_fu_36410_p0.read()) * sc_biguint<5>(mul_ln78_302_fu_36410_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36591_p0() {
    mul_ln78_303_fu_36591_p0 =  (sc_lv<5>) (zext_ln78_355_fu_36587_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36591_p1() {
    mul_ln78_303_fu_36591_p1 =  (sc_lv<5>) (zext_ln78_355_fu_36587_p1.read());
}

void HLS_accel::thread_mul_ln78_303_fu_36591_p2() {
    mul_ln78_303_fu_36591_p2 = (!mul_ln78_303_fu_36591_p0.read().is_01() || !mul_ln78_303_fu_36591_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_303_fu_36591_p0.read()) * sc_biguint<5>(mul_ln78_303_fu_36591_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36682_p0() {
    mul_ln78_304_fu_36682_p0 =  (sc_lv<5>) (zext_ln78_362_fu_36678_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36682_p1() {
    mul_ln78_304_fu_36682_p1 =  (sc_lv<5>) (zext_ln78_362_fu_36678_p1.read());
}

void HLS_accel::thread_mul_ln78_304_fu_36682_p2() {
    mul_ln78_304_fu_36682_p2 = (!mul_ln78_304_fu_36682_p0.read().is_01() || !mul_ln78_304_fu_36682_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_304_fu_36682_p0.read()) * sc_biguint<5>(mul_ln78_304_fu_36682_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36863_p0() {
    mul_ln78_305_fu_36863_p0 =  (sc_lv<5>) (zext_ln78_369_fu_36859_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36863_p1() {
    mul_ln78_305_fu_36863_p1 =  (sc_lv<5>) (zext_ln78_369_fu_36859_p1.read());
}

void HLS_accel::thread_mul_ln78_305_fu_36863_p2() {
    mul_ln78_305_fu_36863_p2 = (!mul_ln78_305_fu_36863_p0.read().is_01() || !mul_ln78_305_fu_36863_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_305_fu_36863_p0.read()) * sc_biguint<5>(mul_ln78_305_fu_36863_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36954_p0() {
    mul_ln78_306_fu_36954_p0 =  (sc_lv<5>) (zext_ln78_376_fu_36950_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36954_p1() {
    mul_ln78_306_fu_36954_p1 =  (sc_lv<5>) (zext_ln78_376_fu_36950_p1.read());
}

void HLS_accel::thread_mul_ln78_306_fu_36954_p2() {
    mul_ln78_306_fu_36954_p2 = (!mul_ln78_306_fu_36954_p0.read().is_01() || !mul_ln78_306_fu_36954_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_306_fu_36954_p0.read()) * sc_biguint<5>(mul_ln78_306_fu_36954_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37135_p0() {
    mul_ln78_307_fu_37135_p0 =  (sc_lv<5>) (zext_ln78_383_fu_37131_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37135_p1() {
    mul_ln78_307_fu_37135_p1 =  (sc_lv<5>) (zext_ln78_383_fu_37131_p1.read());
}

void HLS_accel::thread_mul_ln78_307_fu_37135_p2() {
    mul_ln78_307_fu_37135_p2 = (!mul_ln78_307_fu_37135_p0.read().is_01() || !mul_ln78_307_fu_37135_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_307_fu_37135_p0.read()) * sc_biguint<5>(mul_ln78_307_fu_37135_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37226_p0() {
    mul_ln78_308_fu_37226_p0 =  (sc_lv<5>) (zext_ln78_390_fu_37222_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37226_p1() {
    mul_ln78_308_fu_37226_p1 =  (sc_lv<5>) (zext_ln78_390_fu_37222_p1.read());
}

void HLS_accel::thread_mul_ln78_308_fu_37226_p2() {
    mul_ln78_308_fu_37226_p2 = (!mul_ln78_308_fu_37226_p0.read().is_01() || !mul_ln78_308_fu_37226_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_308_fu_37226_p0.read()) * sc_biguint<5>(mul_ln78_308_fu_37226_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37407_p0() {
    mul_ln78_309_fu_37407_p0 =  (sc_lv<5>) (zext_ln78_397_fu_37403_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37407_p1() {
    mul_ln78_309_fu_37407_p1 =  (sc_lv<5>) (zext_ln78_397_fu_37403_p1.read());
}

void HLS_accel::thread_mul_ln78_309_fu_37407_p2() {
    mul_ln78_309_fu_37407_p2 = (!mul_ln78_309_fu_37407_p0.read().is_01() || !mul_ln78_309_fu_37407_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_309_fu_37407_p0.read()) * sc_biguint<5>(mul_ln78_309_fu_37407_p1.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33861_p0() {
    mul_ln78_30_fu_33861_p0 =  (sc_lv<5>) (mul_ln78_30_fu_33861_p00.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33861_p00() {
    mul_ln78_30_fu_33861_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33861_p1() {
    mul_ln78_30_fu_33861_p1 =  (sc_lv<5>) (mul_ln78_30_fu_33861_p10.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33861_p10() {
    mul_ln78_30_fu_33861_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_30_fu_33861_p2() {
    mul_ln78_30_fu_33861_p2 = (!mul_ln78_30_fu_33861_p0.read().is_01() || !mul_ln78_30_fu_33861_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_30_fu_33861_p0.read()) * sc_biguint<5>(mul_ln78_30_fu_33861_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37498_p0() {
    mul_ln78_310_fu_37498_p0 =  (sc_lv<5>) (zext_ln78_404_fu_37494_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37498_p1() {
    mul_ln78_310_fu_37498_p1 =  (sc_lv<5>) (zext_ln78_404_fu_37494_p1.read());
}

void HLS_accel::thread_mul_ln78_310_fu_37498_p2() {
    mul_ln78_310_fu_37498_p2 = (!mul_ln78_310_fu_37498_p0.read().is_01() || !mul_ln78_310_fu_37498_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_310_fu_37498_p0.read()) * sc_biguint<5>(mul_ln78_310_fu_37498_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37679_p0() {
    mul_ln78_311_fu_37679_p0 =  (sc_lv<5>) (zext_ln78_411_fu_37675_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37679_p1() {
    mul_ln78_311_fu_37679_p1 =  (sc_lv<5>) (zext_ln78_411_fu_37675_p1.read());
}

void HLS_accel::thread_mul_ln78_311_fu_37679_p2() {
    mul_ln78_311_fu_37679_p2 = (!mul_ln78_311_fu_37679_p0.read().is_01() || !mul_ln78_311_fu_37679_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_311_fu_37679_p0.read()) * sc_biguint<5>(mul_ln78_311_fu_37679_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37770_p0() {
    mul_ln78_312_fu_37770_p0 =  (sc_lv<5>) (zext_ln78_418_fu_37766_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37770_p1() {
    mul_ln78_312_fu_37770_p1 =  (sc_lv<5>) (zext_ln78_418_fu_37766_p1.read());
}

void HLS_accel::thread_mul_ln78_312_fu_37770_p2() {
    mul_ln78_312_fu_37770_p2 = (!mul_ln78_312_fu_37770_p0.read().is_01() || !mul_ln78_312_fu_37770_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_312_fu_37770_p0.read()) * sc_biguint<5>(mul_ln78_312_fu_37770_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37951_p0() {
    mul_ln78_313_fu_37951_p0 =  (sc_lv<5>) (zext_ln78_425_fu_37947_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37951_p1() {
    mul_ln78_313_fu_37951_p1 =  (sc_lv<5>) (zext_ln78_425_fu_37947_p1.read());
}

void HLS_accel::thread_mul_ln78_313_fu_37951_p2() {
    mul_ln78_313_fu_37951_p2 = (!mul_ln78_313_fu_37951_p0.read().is_01() || !mul_ln78_313_fu_37951_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_313_fu_37951_p0.read()) * sc_biguint<5>(mul_ln78_313_fu_37951_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38042_p0() {
    mul_ln78_314_fu_38042_p0 =  (sc_lv<5>) (zext_ln78_432_fu_38038_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38042_p1() {
    mul_ln78_314_fu_38042_p1 =  (sc_lv<5>) (zext_ln78_432_fu_38038_p1.read());
}

void HLS_accel::thread_mul_ln78_314_fu_38042_p2() {
    mul_ln78_314_fu_38042_p2 = (!mul_ln78_314_fu_38042_p0.read().is_01() || !mul_ln78_314_fu_38042_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_314_fu_38042_p0.read()) * sc_biguint<5>(mul_ln78_314_fu_38042_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38223_p0() {
    mul_ln78_315_fu_38223_p0 =  (sc_lv<5>) (zext_ln78_439_fu_38219_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38223_p1() {
    mul_ln78_315_fu_38223_p1 =  (sc_lv<5>) (zext_ln78_439_fu_38219_p1.read());
}

void HLS_accel::thread_mul_ln78_315_fu_38223_p2() {
    mul_ln78_315_fu_38223_p2 = (!mul_ln78_315_fu_38223_p0.read().is_01() || !mul_ln78_315_fu_38223_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_315_fu_38223_p0.read()) * sc_biguint<5>(mul_ln78_315_fu_38223_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38314_p0() {
    mul_ln78_316_fu_38314_p0 =  (sc_lv<5>) (zext_ln78_446_fu_38310_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38314_p1() {
    mul_ln78_316_fu_38314_p1 =  (sc_lv<5>) (zext_ln78_446_fu_38310_p1.read());
}

void HLS_accel::thread_mul_ln78_316_fu_38314_p2() {
    mul_ln78_316_fu_38314_p2 = (!mul_ln78_316_fu_38314_p0.read().is_01() || !mul_ln78_316_fu_38314_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_316_fu_38314_p0.read()) * sc_biguint<5>(mul_ln78_316_fu_38314_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38495_p0() {
    mul_ln78_317_fu_38495_p0 =  (sc_lv<5>) (zext_ln78_453_fu_38491_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38495_p1() {
    mul_ln78_317_fu_38495_p1 =  (sc_lv<5>) (zext_ln78_453_fu_38491_p1.read());
}

void HLS_accel::thread_mul_ln78_317_fu_38495_p2() {
    mul_ln78_317_fu_38495_p2 = (!mul_ln78_317_fu_38495_p0.read().is_01() || !mul_ln78_317_fu_38495_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_317_fu_38495_p0.read()) * sc_biguint<5>(mul_ln78_317_fu_38495_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38586_p0() {
    mul_ln78_318_fu_38586_p0 =  (sc_lv<5>) (zext_ln78_460_fu_38582_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38586_p1() {
    mul_ln78_318_fu_38586_p1 =  (sc_lv<5>) (zext_ln78_460_fu_38582_p1.read());
}

void HLS_accel::thread_mul_ln78_318_fu_38586_p2() {
    mul_ln78_318_fu_38586_p2 = (!mul_ln78_318_fu_38586_p0.read().is_01() || !mul_ln78_318_fu_38586_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_318_fu_38586_p0.read()) * sc_biguint<5>(mul_ln78_318_fu_38586_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38767_p0() {
    mul_ln78_319_fu_38767_p0 =  (sc_lv<5>) (zext_ln78_467_fu_38763_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38767_p1() {
    mul_ln78_319_fu_38767_p1 =  (sc_lv<5>) (zext_ln78_467_fu_38763_p1.read());
}

void HLS_accel::thread_mul_ln78_319_fu_38767_p2() {
    mul_ln78_319_fu_38767_p2 = (!mul_ln78_319_fu_38767_p0.read().is_01() || !mul_ln78_319_fu_38767_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_319_fu_38767_p0.read()) * sc_biguint<5>(mul_ln78_319_fu_38767_p1.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33952_p0() {
    mul_ln78_31_fu_33952_p0 =  (sc_lv<5>) (mul_ln78_31_fu_33952_p00.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33952_p00() {
    mul_ln78_31_fu_33952_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33952_p1() {
    mul_ln78_31_fu_33952_p1 =  (sc_lv<5>) (mul_ln78_31_fu_33952_p10.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33952_p10() {
    mul_ln78_31_fu_33952_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_31_fu_33952_p2() {
    mul_ln78_31_fu_33952_p2 = (!mul_ln78_31_fu_33952_p0.read().is_01() || !mul_ln78_31_fu_33952_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_31_fu_33952_p0.read()) * sc_biguint<5>(mul_ln78_31_fu_33952_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38858_p0() {
    mul_ln78_320_fu_38858_p0 =  (sc_lv<5>) (zext_ln78_474_fu_38854_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38858_p1() {
    mul_ln78_320_fu_38858_p1 =  (sc_lv<5>) (zext_ln78_474_fu_38854_p1.read());
}

void HLS_accel::thread_mul_ln78_320_fu_38858_p2() {
    mul_ln78_320_fu_38858_p2 = (!mul_ln78_320_fu_38858_p0.read().is_01() || !mul_ln78_320_fu_38858_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_320_fu_38858_p0.read()) * sc_biguint<5>(mul_ln78_320_fu_38858_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39039_p0() {
    mul_ln78_321_fu_39039_p0 =  (sc_lv<5>) (zext_ln78_481_fu_39035_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39039_p1() {
    mul_ln78_321_fu_39039_p1 =  (sc_lv<5>) (zext_ln78_481_fu_39035_p1.read());
}

void HLS_accel::thread_mul_ln78_321_fu_39039_p2() {
    mul_ln78_321_fu_39039_p2 = (!mul_ln78_321_fu_39039_p0.read().is_01() || !mul_ln78_321_fu_39039_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_321_fu_39039_p0.read()) * sc_biguint<5>(mul_ln78_321_fu_39039_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39130_p0() {
    mul_ln78_322_fu_39130_p0 =  (sc_lv<5>) (zext_ln78_488_fu_39126_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39130_p1() {
    mul_ln78_322_fu_39130_p1 =  (sc_lv<5>) (zext_ln78_488_fu_39126_p1.read());
}

void HLS_accel::thread_mul_ln78_322_fu_39130_p2() {
    mul_ln78_322_fu_39130_p2 = (!mul_ln78_322_fu_39130_p0.read().is_01() || !mul_ln78_322_fu_39130_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_322_fu_39130_p0.read()) * sc_biguint<5>(mul_ln78_322_fu_39130_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39311_p0() {
    mul_ln78_323_fu_39311_p0 =  (sc_lv<5>) (zext_ln78_495_fu_39307_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39311_p1() {
    mul_ln78_323_fu_39311_p1 =  (sc_lv<5>) (zext_ln78_495_fu_39307_p1.read());
}

void HLS_accel::thread_mul_ln78_323_fu_39311_p2() {
    mul_ln78_323_fu_39311_p2 = (!mul_ln78_323_fu_39311_p0.read().is_01() || !mul_ln78_323_fu_39311_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_323_fu_39311_p0.read()) * sc_biguint<5>(mul_ln78_323_fu_39311_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39402_p0() {
    mul_ln78_324_fu_39402_p0 =  (sc_lv<5>) (zext_ln78_502_fu_39398_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39402_p1() {
    mul_ln78_324_fu_39402_p1 =  (sc_lv<5>) (zext_ln78_502_fu_39398_p1.read());
}

void HLS_accel::thread_mul_ln78_324_fu_39402_p2() {
    mul_ln78_324_fu_39402_p2 = (!mul_ln78_324_fu_39402_p0.read().is_01() || !mul_ln78_324_fu_39402_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_324_fu_39402_p0.read()) * sc_biguint<5>(mul_ln78_324_fu_39402_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39583_p0() {
    mul_ln78_325_fu_39583_p0 =  (sc_lv<5>) (zext_ln78_509_fu_39579_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39583_p1() {
    mul_ln78_325_fu_39583_p1 =  (sc_lv<5>) (zext_ln78_509_fu_39579_p1.read());
}

void HLS_accel::thread_mul_ln78_325_fu_39583_p2() {
    mul_ln78_325_fu_39583_p2 = (!mul_ln78_325_fu_39583_p0.read().is_01() || !mul_ln78_325_fu_39583_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_325_fu_39583_p0.read()) * sc_biguint<5>(mul_ln78_325_fu_39583_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39674_p0() {
    mul_ln78_326_fu_39674_p0 =  (sc_lv<5>) (zext_ln78_516_fu_39670_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39674_p1() {
    mul_ln78_326_fu_39674_p1 =  (sc_lv<5>) (zext_ln78_516_fu_39670_p1.read());
}

void HLS_accel::thread_mul_ln78_326_fu_39674_p2() {
    mul_ln78_326_fu_39674_p2 = (!mul_ln78_326_fu_39674_p0.read().is_01() || !mul_ln78_326_fu_39674_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_326_fu_39674_p0.read()) * sc_biguint<5>(mul_ln78_326_fu_39674_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39855_p0() {
    mul_ln78_327_fu_39855_p0 =  (sc_lv<5>) (zext_ln78_523_fu_39851_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39855_p1() {
    mul_ln78_327_fu_39855_p1 =  (sc_lv<5>) (zext_ln78_523_fu_39851_p1.read());
}

void HLS_accel::thread_mul_ln78_327_fu_39855_p2() {
    mul_ln78_327_fu_39855_p2 = (!mul_ln78_327_fu_39855_p0.read().is_01() || !mul_ln78_327_fu_39855_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_327_fu_39855_p0.read()) * sc_biguint<5>(mul_ln78_327_fu_39855_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39946_p0() {
    mul_ln78_328_fu_39946_p0 =  (sc_lv<5>) (zext_ln78_530_fu_39942_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39946_p1() {
    mul_ln78_328_fu_39946_p1 =  (sc_lv<5>) (zext_ln78_530_fu_39942_p1.read());
}

void HLS_accel::thread_mul_ln78_328_fu_39946_p2() {
    mul_ln78_328_fu_39946_p2 = (!mul_ln78_328_fu_39946_p0.read().is_01() || !mul_ln78_328_fu_39946_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_328_fu_39946_p0.read()) * sc_biguint<5>(mul_ln78_328_fu_39946_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40127_p0() {
    mul_ln78_329_fu_40127_p0 =  (sc_lv<5>) (zext_ln78_537_fu_40123_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40127_p1() {
    mul_ln78_329_fu_40127_p1 =  (sc_lv<5>) (zext_ln78_537_fu_40123_p1.read());
}

void HLS_accel::thread_mul_ln78_329_fu_40127_p2() {
    mul_ln78_329_fu_40127_p2 = (!mul_ln78_329_fu_40127_p0.read().is_01() || !mul_ln78_329_fu_40127_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_329_fu_40127_p0.read()) * sc_biguint<5>(mul_ln78_329_fu_40127_p1.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34133_p0() {
    mul_ln78_32_fu_34133_p0 =  (sc_lv<5>) (mul_ln78_32_fu_34133_p00.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34133_p00() {
    mul_ln78_32_fu_34133_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34133_p1() {
    mul_ln78_32_fu_34133_p1 =  (sc_lv<5>) (mul_ln78_32_fu_34133_p10.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34133_p10() {
    mul_ln78_32_fu_34133_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_32_fu_34133_p2() {
    mul_ln78_32_fu_34133_p2 = (!mul_ln78_32_fu_34133_p0.read().is_01() || !mul_ln78_32_fu_34133_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_32_fu_34133_p0.read()) * sc_biguint<5>(mul_ln78_32_fu_34133_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40218_p0() {
    mul_ln78_330_fu_40218_p0 =  (sc_lv<5>) (zext_ln78_544_fu_40214_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40218_p1() {
    mul_ln78_330_fu_40218_p1 =  (sc_lv<5>) (zext_ln78_544_fu_40214_p1.read());
}

void HLS_accel::thread_mul_ln78_330_fu_40218_p2() {
    mul_ln78_330_fu_40218_p2 = (!mul_ln78_330_fu_40218_p0.read().is_01() || !mul_ln78_330_fu_40218_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_330_fu_40218_p0.read()) * sc_biguint<5>(mul_ln78_330_fu_40218_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40399_p0() {
    mul_ln78_331_fu_40399_p0 =  (sc_lv<5>) (zext_ln78_551_fu_40395_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40399_p1() {
    mul_ln78_331_fu_40399_p1 =  (sc_lv<5>) (zext_ln78_551_fu_40395_p1.read());
}

void HLS_accel::thread_mul_ln78_331_fu_40399_p2() {
    mul_ln78_331_fu_40399_p2 = (!mul_ln78_331_fu_40399_p0.read().is_01() || !mul_ln78_331_fu_40399_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_331_fu_40399_p0.read()) * sc_biguint<5>(mul_ln78_331_fu_40399_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40490_p0() {
    mul_ln78_332_fu_40490_p0 =  (sc_lv<5>) (zext_ln78_558_fu_40486_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40490_p1() {
    mul_ln78_332_fu_40490_p1 =  (sc_lv<5>) (zext_ln78_558_fu_40486_p1.read());
}

void HLS_accel::thread_mul_ln78_332_fu_40490_p2() {
    mul_ln78_332_fu_40490_p2 = (!mul_ln78_332_fu_40490_p0.read().is_01() || !mul_ln78_332_fu_40490_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_332_fu_40490_p0.read()) * sc_biguint<5>(mul_ln78_332_fu_40490_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40681_p0() {
    mul_ln78_333_fu_40681_p0 =  (sc_lv<5>) (zext_ln78_565_fu_40677_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40681_p1() {
    mul_ln78_333_fu_40681_p1 =  (sc_lv<5>) (zext_ln78_565_fu_40677_p1.read());
}

void HLS_accel::thread_mul_ln78_333_fu_40681_p2() {
    mul_ln78_333_fu_40681_p2 = (!mul_ln78_333_fu_40681_p0.read().is_01() || !mul_ln78_333_fu_40681_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_333_fu_40681_p0.read()) * sc_biguint<5>(mul_ln78_333_fu_40681_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40762_p0() {
    mul_ln78_334_fu_40762_p0 =  (sc_lv<5>) (zext_ln78_572_fu_40758_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40762_p1() {
    mul_ln78_334_fu_40762_p1 =  (sc_lv<5>) (zext_ln78_572_fu_40758_p1.read());
}

void HLS_accel::thread_mul_ln78_334_fu_40762_p2() {
    mul_ln78_334_fu_40762_p2 = (!mul_ln78_334_fu_40762_p0.read().is_01() || !mul_ln78_334_fu_40762_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_334_fu_40762_p0.read()) * sc_biguint<5>(mul_ln78_334_fu_40762_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40943_p0() {
    mul_ln78_335_fu_40943_p0 =  (sc_lv<5>) (zext_ln78_579_fu_40939_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40943_p1() {
    mul_ln78_335_fu_40943_p1 =  (sc_lv<5>) (zext_ln78_579_fu_40939_p1.read());
}

void HLS_accel::thread_mul_ln78_335_fu_40943_p2() {
    mul_ln78_335_fu_40943_p2 = (!mul_ln78_335_fu_40943_p0.read().is_01() || !mul_ln78_335_fu_40943_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_335_fu_40943_p0.read()) * sc_biguint<5>(mul_ln78_335_fu_40943_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41034_p0() {
    mul_ln78_336_fu_41034_p0 =  (sc_lv<5>) (zext_ln78_586_fu_41030_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41034_p1() {
    mul_ln78_336_fu_41034_p1 =  (sc_lv<5>) (zext_ln78_586_fu_41030_p1.read());
}

void HLS_accel::thread_mul_ln78_336_fu_41034_p2() {
    mul_ln78_336_fu_41034_p2 = (!mul_ln78_336_fu_41034_p0.read().is_01() || !mul_ln78_336_fu_41034_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_336_fu_41034_p0.read()) * sc_biguint<5>(mul_ln78_336_fu_41034_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41215_p0() {
    mul_ln78_337_fu_41215_p0 =  (sc_lv<5>) (zext_ln78_593_fu_41211_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41215_p1() {
    mul_ln78_337_fu_41215_p1 =  (sc_lv<5>) (zext_ln78_593_fu_41211_p1.read());
}

void HLS_accel::thread_mul_ln78_337_fu_41215_p2() {
    mul_ln78_337_fu_41215_p2 = (!mul_ln78_337_fu_41215_p0.read().is_01() || !mul_ln78_337_fu_41215_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_337_fu_41215_p0.read()) * sc_biguint<5>(mul_ln78_337_fu_41215_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41306_p0() {
    mul_ln78_338_fu_41306_p0 =  (sc_lv<5>) (zext_ln78_600_fu_41302_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41306_p1() {
    mul_ln78_338_fu_41306_p1 =  (sc_lv<5>) (zext_ln78_600_fu_41302_p1.read());
}

void HLS_accel::thread_mul_ln78_338_fu_41306_p2() {
    mul_ln78_338_fu_41306_p2 = (!mul_ln78_338_fu_41306_p0.read().is_01() || !mul_ln78_338_fu_41306_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_338_fu_41306_p0.read()) * sc_biguint<5>(mul_ln78_338_fu_41306_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41487_p0() {
    mul_ln78_339_fu_41487_p0 =  (sc_lv<5>) (zext_ln78_607_fu_41483_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41487_p1() {
    mul_ln78_339_fu_41487_p1 =  (sc_lv<5>) (zext_ln78_607_fu_41483_p1.read());
}

void HLS_accel::thread_mul_ln78_339_fu_41487_p2() {
    mul_ln78_339_fu_41487_p2 = (!mul_ln78_339_fu_41487_p0.read().is_01() || !mul_ln78_339_fu_41487_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_339_fu_41487_p0.read()) * sc_biguint<5>(mul_ln78_339_fu_41487_p1.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34224_p0() {
    mul_ln78_33_fu_34224_p0 =  (sc_lv<5>) (mul_ln78_33_fu_34224_p00.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34224_p00() {
    mul_ln78_33_fu_34224_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34224_p1() {
    mul_ln78_33_fu_34224_p1 =  (sc_lv<5>) (mul_ln78_33_fu_34224_p10.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34224_p10() {
    mul_ln78_33_fu_34224_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_33_fu_34224_p2() {
    mul_ln78_33_fu_34224_p2 = (!mul_ln78_33_fu_34224_p0.read().is_01() || !mul_ln78_33_fu_34224_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_33_fu_34224_p0.read()) * sc_biguint<5>(mul_ln78_33_fu_34224_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41578_p0() {
    mul_ln78_340_fu_41578_p0 =  (sc_lv<5>) (zext_ln78_614_fu_41574_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41578_p1() {
    mul_ln78_340_fu_41578_p1 =  (sc_lv<5>) (zext_ln78_614_fu_41574_p1.read());
}

void HLS_accel::thread_mul_ln78_340_fu_41578_p2() {
    mul_ln78_340_fu_41578_p2 = (!mul_ln78_340_fu_41578_p0.read().is_01() || !mul_ln78_340_fu_41578_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_340_fu_41578_p0.read()) * sc_biguint<5>(mul_ln78_340_fu_41578_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41769_p0() {
    mul_ln78_341_fu_41769_p0 =  (sc_lv<5>) (zext_ln78_621_fu_41765_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41769_p1() {
    mul_ln78_341_fu_41769_p1 =  (sc_lv<5>) (zext_ln78_621_fu_41765_p1.read());
}

void HLS_accel::thread_mul_ln78_341_fu_41769_p2() {
    mul_ln78_341_fu_41769_p2 = (!mul_ln78_341_fu_41769_p0.read().is_01() || !mul_ln78_341_fu_41769_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_341_fu_41769_p0.read()) * sc_biguint<5>(mul_ln78_341_fu_41769_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41850_p0() {
    mul_ln78_342_fu_41850_p0 =  (sc_lv<5>) (zext_ln78_628_fu_41846_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41850_p1() {
    mul_ln78_342_fu_41850_p1 =  (sc_lv<5>) (zext_ln78_628_fu_41846_p1.read());
}

void HLS_accel::thread_mul_ln78_342_fu_41850_p2() {
    mul_ln78_342_fu_41850_p2 = (!mul_ln78_342_fu_41850_p0.read().is_01() || !mul_ln78_342_fu_41850_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_342_fu_41850_p0.read()) * sc_biguint<5>(mul_ln78_342_fu_41850_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42031_p0() {
    mul_ln78_343_fu_42031_p0 =  (sc_lv<5>) (zext_ln78_635_fu_42027_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42031_p1() {
    mul_ln78_343_fu_42031_p1 =  (sc_lv<5>) (zext_ln78_635_fu_42027_p1.read());
}

void HLS_accel::thread_mul_ln78_343_fu_42031_p2() {
    mul_ln78_343_fu_42031_p2 = (!mul_ln78_343_fu_42031_p0.read().is_01() || !mul_ln78_343_fu_42031_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_343_fu_42031_p0.read()) * sc_biguint<5>(mul_ln78_343_fu_42031_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42122_p0() {
    mul_ln78_344_fu_42122_p0 =  (sc_lv<5>) (zext_ln78_642_fu_42118_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42122_p1() {
    mul_ln78_344_fu_42122_p1 =  (sc_lv<5>) (zext_ln78_642_fu_42118_p1.read());
}

void HLS_accel::thread_mul_ln78_344_fu_42122_p2() {
    mul_ln78_344_fu_42122_p2 = (!mul_ln78_344_fu_42122_p0.read().is_01() || !mul_ln78_344_fu_42122_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_344_fu_42122_p0.read()) * sc_biguint<5>(mul_ln78_344_fu_42122_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42303_p0() {
    mul_ln78_345_fu_42303_p0 =  (sc_lv<5>) (zext_ln78_649_fu_42299_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42303_p1() {
    mul_ln78_345_fu_42303_p1 =  (sc_lv<5>) (zext_ln78_649_fu_42299_p1.read());
}

void HLS_accel::thread_mul_ln78_345_fu_42303_p2() {
    mul_ln78_345_fu_42303_p2 = (!mul_ln78_345_fu_42303_p0.read().is_01() || !mul_ln78_345_fu_42303_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_345_fu_42303_p0.read()) * sc_biguint<5>(mul_ln78_345_fu_42303_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42394_p0() {
    mul_ln78_346_fu_42394_p0 =  (sc_lv<5>) (zext_ln78_656_fu_42390_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42394_p1() {
    mul_ln78_346_fu_42394_p1 =  (sc_lv<5>) (zext_ln78_656_fu_42390_p1.read());
}

void HLS_accel::thread_mul_ln78_346_fu_42394_p2() {
    mul_ln78_346_fu_42394_p2 = (!mul_ln78_346_fu_42394_p0.read().is_01() || !mul_ln78_346_fu_42394_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_346_fu_42394_p0.read()) * sc_biguint<5>(mul_ln78_346_fu_42394_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42575_p0() {
    mul_ln78_347_fu_42575_p0 =  (sc_lv<5>) (zext_ln78_663_fu_42571_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42575_p1() {
    mul_ln78_347_fu_42575_p1 =  (sc_lv<5>) (zext_ln78_663_fu_42571_p1.read());
}

void HLS_accel::thread_mul_ln78_347_fu_42575_p2() {
    mul_ln78_347_fu_42575_p2 = (!mul_ln78_347_fu_42575_p0.read().is_01() || !mul_ln78_347_fu_42575_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_347_fu_42575_p0.read()) * sc_biguint<5>(mul_ln78_347_fu_42575_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42666_p0() {
    mul_ln78_348_fu_42666_p0 =  (sc_lv<5>) (zext_ln78_670_fu_42662_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42666_p1() {
    mul_ln78_348_fu_42666_p1 =  (sc_lv<5>) (zext_ln78_670_fu_42662_p1.read());
}

void HLS_accel::thread_mul_ln78_348_fu_42666_p2() {
    mul_ln78_348_fu_42666_p2 = (!mul_ln78_348_fu_42666_p0.read().is_01() || !mul_ln78_348_fu_42666_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_348_fu_42666_p0.read()) * sc_biguint<5>(mul_ln78_348_fu_42666_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42847_p0() {
    mul_ln78_349_fu_42847_p0 =  (sc_lv<5>) (zext_ln78_677_fu_42843_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42847_p1() {
    mul_ln78_349_fu_42847_p1 =  (sc_lv<5>) (zext_ln78_677_fu_42843_p1.read());
}

void HLS_accel::thread_mul_ln78_349_fu_42847_p2() {
    mul_ln78_349_fu_42847_p2 = (!mul_ln78_349_fu_42847_p0.read().is_01() || !mul_ln78_349_fu_42847_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_349_fu_42847_p0.read()) * sc_biguint<5>(mul_ln78_349_fu_42847_p1.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34405_p0() {
    mul_ln78_34_fu_34405_p0 =  (sc_lv<5>) (mul_ln78_34_fu_34405_p00.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34405_p00() {
    mul_ln78_34_fu_34405_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34405_p1() {
    mul_ln78_34_fu_34405_p1 =  (sc_lv<5>) (mul_ln78_34_fu_34405_p10.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34405_p10() {
    mul_ln78_34_fu_34405_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_34_fu_34405_p2() {
    mul_ln78_34_fu_34405_p2 = (!mul_ln78_34_fu_34405_p0.read().is_01() || !mul_ln78_34_fu_34405_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_34_fu_34405_p0.read()) * sc_biguint<5>(mul_ln78_34_fu_34405_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42938_p0() {
    mul_ln78_350_fu_42938_p0 =  (sc_lv<5>) (zext_ln78_684_fu_42934_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42938_p1() {
    mul_ln78_350_fu_42938_p1 =  (sc_lv<5>) (zext_ln78_684_fu_42934_p1.read());
}

void HLS_accel::thread_mul_ln78_350_fu_42938_p2() {
    mul_ln78_350_fu_42938_p2 = (!mul_ln78_350_fu_42938_p0.read().is_01() || !mul_ln78_350_fu_42938_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_350_fu_42938_p0.read()) * sc_biguint<5>(mul_ln78_350_fu_42938_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43119_p0() {
    mul_ln78_351_fu_43119_p0 =  (sc_lv<5>) (zext_ln78_691_fu_43115_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43119_p1() {
    mul_ln78_351_fu_43119_p1 =  (sc_lv<5>) (zext_ln78_691_fu_43115_p1.read());
}

void HLS_accel::thread_mul_ln78_351_fu_43119_p2() {
    mul_ln78_351_fu_43119_p2 = (!mul_ln78_351_fu_43119_p0.read().is_01() || !mul_ln78_351_fu_43119_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_351_fu_43119_p0.read()) * sc_biguint<5>(mul_ln78_351_fu_43119_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43210_p0() {
    mul_ln78_352_fu_43210_p0 =  (sc_lv<5>) (zext_ln78_698_fu_43206_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43210_p1() {
    mul_ln78_352_fu_43210_p1 =  (sc_lv<5>) (zext_ln78_698_fu_43206_p1.read());
}

void HLS_accel::thread_mul_ln78_352_fu_43210_p2() {
    mul_ln78_352_fu_43210_p2 = (!mul_ln78_352_fu_43210_p0.read().is_01() || !mul_ln78_352_fu_43210_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_352_fu_43210_p0.read()) * sc_biguint<5>(mul_ln78_352_fu_43210_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43391_p0() {
    mul_ln78_353_fu_43391_p0 =  (sc_lv<5>) (zext_ln78_705_fu_43387_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43391_p1() {
    mul_ln78_353_fu_43391_p1 =  (sc_lv<5>) (zext_ln78_705_fu_43387_p1.read());
}

void HLS_accel::thread_mul_ln78_353_fu_43391_p2() {
    mul_ln78_353_fu_43391_p2 = (!mul_ln78_353_fu_43391_p0.read().is_01() || !mul_ln78_353_fu_43391_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_353_fu_43391_p0.read()) * sc_biguint<5>(mul_ln78_353_fu_43391_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43482_p0() {
    mul_ln78_354_fu_43482_p0 =  (sc_lv<5>) (zext_ln78_712_fu_43478_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43482_p1() {
    mul_ln78_354_fu_43482_p1 =  (sc_lv<5>) (zext_ln78_712_fu_43478_p1.read());
}

void HLS_accel::thread_mul_ln78_354_fu_43482_p2() {
    mul_ln78_354_fu_43482_p2 = (!mul_ln78_354_fu_43482_p0.read().is_01() || !mul_ln78_354_fu_43482_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_354_fu_43482_p0.read()) * sc_biguint<5>(mul_ln78_354_fu_43482_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43663_p0() {
    mul_ln78_355_fu_43663_p0 =  (sc_lv<5>) (zext_ln78_719_fu_43659_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43663_p1() {
    mul_ln78_355_fu_43663_p1 =  (sc_lv<5>) (zext_ln78_719_fu_43659_p1.read());
}

void HLS_accel::thread_mul_ln78_355_fu_43663_p2() {
    mul_ln78_355_fu_43663_p2 = (!mul_ln78_355_fu_43663_p0.read().is_01() || !mul_ln78_355_fu_43663_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_355_fu_43663_p0.read()) * sc_biguint<5>(mul_ln78_355_fu_43663_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43754_p0() {
    mul_ln78_356_fu_43754_p0 =  (sc_lv<5>) (zext_ln78_726_fu_43750_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43754_p1() {
    mul_ln78_356_fu_43754_p1 =  (sc_lv<5>) (zext_ln78_726_fu_43750_p1.read());
}

void HLS_accel::thread_mul_ln78_356_fu_43754_p2() {
    mul_ln78_356_fu_43754_p2 = (!mul_ln78_356_fu_43754_p0.read().is_01() || !mul_ln78_356_fu_43754_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_356_fu_43754_p0.read()) * sc_biguint<5>(mul_ln78_356_fu_43754_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43935_p0() {
    mul_ln78_357_fu_43935_p0 =  (sc_lv<5>) (zext_ln78_733_fu_43931_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43935_p1() {
    mul_ln78_357_fu_43935_p1 =  (sc_lv<5>) (zext_ln78_733_fu_43931_p1.read());
}

void HLS_accel::thread_mul_ln78_357_fu_43935_p2() {
    mul_ln78_357_fu_43935_p2 = (!mul_ln78_357_fu_43935_p0.read().is_01() || !mul_ln78_357_fu_43935_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_357_fu_43935_p0.read()) * sc_biguint<5>(mul_ln78_357_fu_43935_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44026_p0() {
    mul_ln78_358_fu_44026_p0 =  (sc_lv<5>) (zext_ln78_740_fu_44022_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44026_p1() {
    mul_ln78_358_fu_44026_p1 =  (sc_lv<5>) (zext_ln78_740_fu_44022_p1.read());
}

void HLS_accel::thread_mul_ln78_358_fu_44026_p2() {
    mul_ln78_358_fu_44026_p2 = (!mul_ln78_358_fu_44026_p0.read().is_01() || !mul_ln78_358_fu_44026_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_358_fu_44026_p0.read()) * sc_biguint<5>(mul_ln78_358_fu_44026_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44207_p0() {
    mul_ln78_359_fu_44207_p0 =  (sc_lv<5>) (zext_ln78_747_fu_44203_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44207_p1() {
    mul_ln78_359_fu_44207_p1 =  (sc_lv<5>) (zext_ln78_747_fu_44203_p1.read());
}

void HLS_accel::thread_mul_ln78_359_fu_44207_p2() {
    mul_ln78_359_fu_44207_p2 = (!mul_ln78_359_fu_44207_p0.read().is_01() || !mul_ln78_359_fu_44207_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_359_fu_44207_p0.read()) * sc_biguint<5>(mul_ln78_359_fu_44207_p1.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34496_p0() {
    mul_ln78_35_fu_34496_p0 =  (sc_lv<5>) (mul_ln78_35_fu_34496_p00.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34496_p00() {
    mul_ln78_35_fu_34496_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34496_p1() {
    mul_ln78_35_fu_34496_p1 =  (sc_lv<5>) (mul_ln78_35_fu_34496_p10.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34496_p10() {
    mul_ln78_35_fu_34496_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_35_fu_34496_p2() {
    mul_ln78_35_fu_34496_p2 = (!mul_ln78_35_fu_34496_p0.read().is_01() || !mul_ln78_35_fu_34496_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_35_fu_34496_p0.read()) * sc_biguint<5>(mul_ln78_35_fu_34496_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44298_p0() {
    mul_ln78_360_fu_44298_p0 =  (sc_lv<5>) (zext_ln78_754_fu_44294_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44298_p1() {
    mul_ln78_360_fu_44298_p1 =  (sc_lv<5>) (zext_ln78_754_fu_44294_p1.read());
}

void HLS_accel::thread_mul_ln78_360_fu_44298_p2() {
    mul_ln78_360_fu_44298_p2 = (!mul_ln78_360_fu_44298_p0.read().is_01() || !mul_ln78_360_fu_44298_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_360_fu_44298_p0.read()) * sc_biguint<5>(mul_ln78_360_fu_44298_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44479_p0() {
    mul_ln78_361_fu_44479_p0 =  (sc_lv<5>) (zext_ln78_761_fu_44475_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44479_p1() {
    mul_ln78_361_fu_44479_p1 =  (sc_lv<5>) (zext_ln78_761_fu_44475_p1.read());
}

void HLS_accel::thread_mul_ln78_361_fu_44479_p2() {
    mul_ln78_361_fu_44479_p2 = (!mul_ln78_361_fu_44479_p0.read().is_01() || !mul_ln78_361_fu_44479_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_361_fu_44479_p0.read()) * sc_biguint<5>(mul_ln78_361_fu_44479_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44570_p0() {
    mul_ln78_362_fu_44570_p0 =  (sc_lv<5>) (zext_ln78_768_fu_44566_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44570_p1() {
    mul_ln78_362_fu_44570_p1 =  (sc_lv<5>) (zext_ln78_768_fu_44566_p1.read());
}

void HLS_accel::thread_mul_ln78_362_fu_44570_p2() {
    mul_ln78_362_fu_44570_p2 = (!mul_ln78_362_fu_44570_p0.read().is_01() || !mul_ln78_362_fu_44570_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_362_fu_44570_p0.read()) * sc_biguint<5>(mul_ln78_362_fu_44570_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44751_p0() {
    mul_ln78_363_fu_44751_p0 =  (sc_lv<5>) (zext_ln78_775_fu_44747_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44751_p1() {
    mul_ln78_363_fu_44751_p1 =  (sc_lv<5>) (zext_ln78_775_fu_44747_p1.read());
}

void HLS_accel::thread_mul_ln78_363_fu_44751_p2() {
    mul_ln78_363_fu_44751_p2 = (!mul_ln78_363_fu_44751_p0.read().is_01() || !mul_ln78_363_fu_44751_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_363_fu_44751_p0.read()) * sc_biguint<5>(mul_ln78_363_fu_44751_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44842_p0() {
    mul_ln78_364_fu_44842_p0 =  (sc_lv<5>) (zext_ln78_782_fu_44838_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44842_p1() {
    mul_ln78_364_fu_44842_p1 =  (sc_lv<5>) (zext_ln78_782_fu_44838_p1.read());
}

void HLS_accel::thread_mul_ln78_364_fu_44842_p2() {
    mul_ln78_364_fu_44842_p2 = (!mul_ln78_364_fu_44842_p0.read().is_01() || !mul_ln78_364_fu_44842_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_364_fu_44842_p0.read()) * sc_biguint<5>(mul_ln78_364_fu_44842_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45023_p0() {
    mul_ln78_365_fu_45023_p0 =  (sc_lv<5>) (zext_ln78_789_fu_45019_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45023_p1() {
    mul_ln78_365_fu_45023_p1 =  (sc_lv<5>) (zext_ln78_789_fu_45019_p1.read());
}

void HLS_accel::thread_mul_ln78_365_fu_45023_p2() {
    mul_ln78_365_fu_45023_p2 = (!mul_ln78_365_fu_45023_p0.read().is_01() || !mul_ln78_365_fu_45023_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_365_fu_45023_p0.read()) * sc_biguint<5>(mul_ln78_365_fu_45023_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45124_p0() {
    mul_ln78_366_fu_45124_p0 =  (sc_lv<5>) (zext_ln78_796_fu_45120_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45124_p1() {
    mul_ln78_366_fu_45124_p1 =  (sc_lv<5>) (zext_ln78_796_fu_45120_p1.read());
}

void HLS_accel::thread_mul_ln78_366_fu_45124_p2() {
    mul_ln78_366_fu_45124_p2 = (!mul_ln78_366_fu_45124_p0.read().is_01() || !mul_ln78_366_fu_45124_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_366_fu_45124_p0.read()) * sc_biguint<5>(mul_ln78_366_fu_45124_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45295_p0() {
    mul_ln78_367_fu_45295_p0 =  (sc_lv<5>) (zext_ln78_803_fu_45291_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45295_p1() {
    mul_ln78_367_fu_45295_p1 =  (sc_lv<5>) (zext_ln78_803_fu_45291_p1.read());
}

void HLS_accel::thread_mul_ln78_367_fu_45295_p2() {
    mul_ln78_367_fu_45295_p2 = (!mul_ln78_367_fu_45295_p0.read().is_01() || !mul_ln78_367_fu_45295_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_367_fu_45295_p0.read()) * sc_biguint<5>(mul_ln78_367_fu_45295_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45386_p0() {
    mul_ln78_368_fu_45386_p0 =  (sc_lv<5>) (zext_ln78_810_fu_45382_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45386_p1() {
    mul_ln78_368_fu_45386_p1 =  (sc_lv<5>) (zext_ln78_810_fu_45382_p1.read());
}

void HLS_accel::thread_mul_ln78_368_fu_45386_p2() {
    mul_ln78_368_fu_45386_p2 = (!mul_ln78_368_fu_45386_p0.read().is_01() || !mul_ln78_368_fu_45386_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_368_fu_45386_p0.read()) * sc_biguint<5>(mul_ln78_368_fu_45386_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45567_p0() {
    mul_ln78_369_fu_45567_p0 =  (sc_lv<5>) (zext_ln78_817_fu_45563_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45567_p1() {
    mul_ln78_369_fu_45567_p1 =  (sc_lv<5>) (zext_ln78_817_fu_45563_p1.read());
}

void HLS_accel::thread_mul_ln78_369_fu_45567_p2() {
    mul_ln78_369_fu_45567_p2 = (!mul_ln78_369_fu_45567_p0.read().is_01() || !mul_ln78_369_fu_45567_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_369_fu_45567_p0.read()) * sc_biguint<5>(mul_ln78_369_fu_45567_p1.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34677_p0() {
    mul_ln78_36_fu_34677_p0 =  (sc_lv<5>) (mul_ln78_36_fu_34677_p00.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34677_p00() {
    mul_ln78_36_fu_34677_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34677_p1() {
    mul_ln78_36_fu_34677_p1 =  (sc_lv<5>) (mul_ln78_36_fu_34677_p10.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34677_p10() {
    mul_ln78_36_fu_34677_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_36_fu_34677_p2() {
    mul_ln78_36_fu_34677_p2 = (!mul_ln78_36_fu_34677_p0.read().is_01() || !mul_ln78_36_fu_34677_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_36_fu_34677_p0.read()) * sc_biguint<5>(mul_ln78_36_fu_34677_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45658_p0() {
    mul_ln78_370_fu_45658_p0 =  (sc_lv<5>) (zext_ln78_824_fu_45654_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45658_p1() {
    mul_ln78_370_fu_45658_p1 =  (sc_lv<5>) (zext_ln78_824_fu_45654_p1.read());
}

void HLS_accel::thread_mul_ln78_370_fu_45658_p2() {
    mul_ln78_370_fu_45658_p2 = (!mul_ln78_370_fu_45658_p0.read().is_01() || !mul_ln78_370_fu_45658_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_370_fu_45658_p0.read()) * sc_biguint<5>(mul_ln78_370_fu_45658_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45839_p0() {
    mul_ln78_371_fu_45839_p0 =  (sc_lv<5>) (zext_ln78_831_fu_45835_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45839_p1() {
    mul_ln78_371_fu_45839_p1 =  (sc_lv<5>) (zext_ln78_831_fu_45835_p1.read());
}

void HLS_accel::thread_mul_ln78_371_fu_45839_p2() {
    mul_ln78_371_fu_45839_p2 = (!mul_ln78_371_fu_45839_p0.read().is_01() || !mul_ln78_371_fu_45839_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_371_fu_45839_p0.read()) * sc_biguint<5>(mul_ln78_371_fu_45839_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45930_p0() {
    mul_ln78_372_fu_45930_p0 =  (sc_lv<5>) (zext_ln78_838_fu_45926_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45930_p1() {
    mul_ln78_372_fu_45930_p1 =  (sc_lv<5>) (zext_ln78_838_fu_45926_p1.read());
}

void HLS_accel::thread_mul_ln78_372_fu_45930_p2() {
    mul_ln78_372_fu_45930_p2 = (!mul_ln78_372_fu_45930_p0.read().is_01() || !mul_ln78_372_fu_45930_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_372_fu_45930_p0.read()) * sc_biguint<5>(mul_ln78_372_fu_45930_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46111_p0() {
    mul_ln78_373_fu_46111_p0 =  (sc_lv<5>) (zext_ln78_845_fu_46107_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46111_p1() {
    mul_ln78_373_fu_46111_p1 =  (sc_lv<5>) (zext_ln78_845_fu_46107_p1.read());
}

void HLS_accel::thread_mul_ln78_373_fu_46111_p2() {
    mul_ln78_373_fu_46111_p2 = (!mul_ln78_373_fu_46111_p0.read().is_01() || !mul_ln78_373_fu_46111_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_373_fu_46111_p0.read()) * sc_biguint<5>(mul_ln78_373_fu_46111_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46202_p0() {
    mul_ln78_374_fu_46202_p0 =  (sc_lv<5>) (zext_ln78_852_fu_46198_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46202_p1() {
    mul_ln78_374_fu_46202_p1 =  (sc_lv<5>) (zext_ln78_852_fu_46198_p1.read());
}

void HLS_accel::thread_mul_ln78_374_fu_46202_p2() {
    mul_ln78_374_fu_46202_p2 = (!mul_ln78_374_fu_46202_p0.read().is_01() || !mul_ln78_374_fu_46202_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_374_fu_46202_p0.read()) * sc_biguint<5>(mul_ln78_374_fu_46202_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46383_p0() {
    mul_ln78_375_fu_46383_p0 =  (sc_lv<5>) (zext_ln78_859_fu_46379_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46383_p1() {
    mul_ln78_375_fu_46383_p1 =  (sc_lv<5>) (zext_ln78_859_fu_46379_p1.read());
}

void HLS_accel::thread_mul_ln78_375_fu_46383_p2() {
    mul_ln78_375_fu_46383_p2 = (!mul_ln78_375_fu_46383_p0.read().is_01() || !mul_ln78_375_fu_46383_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_375_fu_46383_p0.read()) * sc_biguint<5>(mul_ln78_375_fu_46383_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46474_p0() {
    mul_ln78_376_fu_46474_p0 =  (sc_lv<5>) (zext_ln78_866_fu_46470_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46474_p1() {
    mul_ln78_376_fu_46474_p1 =  (sc_lv<5>) (zext_ln78_866_fu_46470_p1.read());
}

void HLS_accel::thread_mul_ln78_376_fu_46474_p2() {
    mul_ln78_376_fu_46474_p2 = (!mul_ln78_376_fu_46474_p0.read().is_01() || !mul_ln78_376_fu_46474_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_376_fu_46474_p0.read()) * sc_biguint<5>(mul_ln78_376_fu_46474_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46655_p0() {
    mul_ln78_377_fu_46655_p0 =  (sc_lv<5>) (zext_ln78_873_fu_46651_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46655_p1() {
    mul_ln78_377_fu_46655_p1 =  (sc_lv<5>) (zext_ln78_873_fu_46651_p1.read());
}

void HLS_accel::thread_mul_ln78_377_fu_46655_p2() {
    mul_ln78_377_fu_46655_p2 = (!mul_ln78_377_fu_46655_p0.read().is_01() || !mul_ln78_377_fu_46655_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_377_fu_46655_p0.read()) * sc_biguint<5>(mul_ln78_377_fu_46655_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46746_p0() {
    mul_ln78_378_fu_46746_p0 =  (sc_lv<5>) (zext_ln78_880_fu_46742_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46746_p1() {
    mul_ln78_378_fu_46746_p1 =  (sc_lv<5>) (zext_ln78_880_fu_46742_p1.read());
}

void HLS_accel::thread_mul_ln78_378_fu_46746_p2() {
    mul_ln78_378_fu_46746_p2 = (!mul_ln78_378_fu_46746_p0.read().is_01() || !mul_ln78_378_fu_46746_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_378_fu_46746_p0.read()) * sc_biguint<5>(mul_ln78_378_fu_46746_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46927_p0() {
    mul_ln78_379_fu_46927_p0 =  (sc_lv<5>) (zext_ln78_887_fu_46923_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46927_p1() {
    mul_ln78_379_fu_46927_p1 =  (sc_lv<5>) (zext_ln78_887_fu_46923_p1.read());
}

void HLS_accel::thread_mul_ln78_379_fu_46927_p2() {
    mul_ln78_379_fu_46927_p2 = (!mul_ln78_379_fu_46927_p0.read().is_01() || !mul_ln78_379_fu_46927_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_379_fu_46927_p0.read()) * sc_biguint<5>(mul_ln78_379_fu_46927_p1.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34768_p0() {
    mul_ln78_37_fu_34768_p0 =  (sc_lv<5>) (mul_ln78_37_fu_34768_p00.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34768_p00() {
    mul_ln78_37_fu_34768_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34768_p1() {
    mul_ln78_37_fu_34768_p1 =  (sc_lv<5>) (mul_ln78_37_fu_34768_p10.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34768_p10() {
    mul_ln78_37_fu_34768_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_37_fu_34768_p2() {
    mul_ln78_37_fu_34768_p2 = (!mul_ln78_37_fu_34768_p0.read().is_01() || !mul_ln78_37_fu_34768_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_37_fu_34768_p0.read()) * sc_biguint<5>(mul_ln78_37_fu_34768_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47018_p0() {
    mul_ln78_380_fu_47018_p0 =  (sc_lv<5>) (zext_ln78_894_fu_47014_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47018_p1() {
    mul_ln78_380_fu_47018_p1 =  (sc_lv<5>) (zext_ln78_894_fu_47014_p1.read());
}

void HLS_accel::thread_mul_ln78_380_fu_47018_p2() {
    mul_ln78_380_fu_47018_p2 = (!mul_ln78_380_fu_47018_p0.read().is_01() || !mul_ln78_380_fu_47018_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_380_fu_47018_p0.read()) * sc_biguint<5>(mul_ln78_380_fu_47018_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47199_p0() {
    mul_ln78_381_fu_47199_p0 =  (sc_lv<5>) (zext_ln78_901_fu_47195_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47199_p1() {
    mul_ln78_381_fu_47199_p1 =  (sc_lv<5>) (zext_ln78_901_fu_47195_p1.read());
}

void HLS_accel::thread_mul_ln78_381_fu_47199_p2() {
    mul_ln78_381_fu_47199_p2 = (!mul_ln78_381_fu_47199_p0.read().is_01() || !mul_ln78_381_fu_47199_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_381_fu_47199_p0.read()) * sc_biguint<5>(mul_ln78_381_fu_47199_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47290_p0() {
    mul_ln78_382_fu_47290_p0 =  (sc_lv<5>) (zext_ln78_908_fu_47286_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47290_p1() {
    mul_ln78_382_fu_47290_p1 =  (sc_lv<5>) (zext_ln78_908_fu_47286_p1.read());
}

void HLS_accel::thread_mul_ln78_382_fu_47290_p2() {
    mul_ln78_382_fu_47290_p2 = (!mul_ln78_382_fu_47290_p0.read().is_01() || !mul_ln78_382_fu_47290_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_382_fu_47290_p0.read()) * sc_biguint<5>(mul_ln78_382_fu_47290_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47471_p0() {
    mul_ln78_383_fu_47471_p0 =  (sc_lv<5>) (zext_ln78_915_fu_47467_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47471_p1() {
    mul_ln78_383_fu_47471_p1 =  (sc_lv<5>) (zext_ln78_915_fu_47467_p1.read());
}

void HLS_accel::thread_mul_ln78_383_fu_47471_p2() {
    mul_ln78_383_fu_47471_p2 = (!mul_ln78_383_fu_47471_p0.read().is_01() || !mul_ln78_383_fu_47471_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_383_fu_47471_p0.read()) * sc_biguint<5>(mul_ln78_383_fu_47471_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47562_p0() {
    mul_ln78_384_fu_47562_p0 =  (sc_lv<5>) (zext_ln78_922_fu_47558_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47562_p1() {
    mul_ln78_384_fu_47562_p1 =  (sc_lv<5>) (zext_ln78_922_fu_47558_p1.read());
}

void HLS_accel::thread_mul_ln78_384_fu_47562_p2() {
    mul_ln78_384_fu_47562_p2 = (!mul_ln78_384_fu_47562_p0.read().is_01() || !mul_ln78_384_fu_47562_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_384_fu_47562_p0.read()) * sc_biguint<5>(mul_ln78_384_fu_47562_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47743_p0() {
    mul_ln78_385_fu_47743_p0 =  (sc_lv<5>) (zext_ln78_929_fu_47739_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47743_p1() {
    mul_ln78_385_fu_47743_p1 =  (sc_lv<5>) (zext_ln78_929_fu_47739_p1.read());
}

void HLS_accel::thread_mul_ln78_385_fu_47743_p2() {
    mul_ln78_385_fu_47743_p2 = (!mul_ln78_385_fu_47743_p0.read().is_01() || !mul_ln78_385_fu_47743_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_385_fu_47743_p0.read()) * sc_biguint<5>(mul_ln78_385_fu_47743_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47834_p0() {
    mul_ln78_386_fu_47834_p0 =  (sc_lv<5>) (zext_ln78_936_fu_47830_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47834_p1() {
    mul_ln78_386_fu_47834_p1 =  (sc_lv<5>) (zext_ln78_936_fu_47830_p1.read());
}

void HLS_accel::thread_mul_ln78_386_fu_47834_p2() {
    mul_ln78_386_fu_47834_p2 = (!mul_ln78_386_fu_47834_p0.read().is_01() || !mul_ln78_386_fu_47834_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_386_fu_47834_p0.read()) * sc_biguint<5>(mul_ln78_386_fu_47834_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48015_p0() {
    mul_ln78_387_fu_48015_p0 =  (sc_lv<5>) (zext_ln78_943_fu_48011_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48015_p1() {
    mul_ln78_387_fu_48015_p1 =  (sc_lv<5>) (zext_ln78_943_fu_48011_p1.read());
}

void HLS_accel::thread_mul_ln78_387_fu_48015_p2() {
    mul_ln78_387_fu_48015_p2 = (!mul_ln78_387_fu_48015_p0.read().is_01() || !mul_ln78_387_fu_48015_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_387_fu_48015_p0.read()) * sc_biguint<5>(mul_ln78_387_fu_48015_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48106_p0() {
    mul_ln78_388_fu_48106_p0 =  (sc_lv<5>) (zext_ln78_950_fu_48102_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48106_p1() {
    mul_ln78_388_fu_48106_p1 =  (sc_lv<5>) (zext_ln78_950_fu_48102_p1.read());
}

void HLS_accel::thread_mul_ln78_388_fu_48106_p2() {
    mul_ln78_388_fu_48106_p2 = (!mul_ln78_388_fu_48106_p0.read().is_01() || !mul_ln78_388_fu_48106_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_388_fu_48106_p0.read()) * sc_biguint<5>(mul_ln78_388_fu_48106_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48287_p0() {
    mul_ln78_389_fu_48287_p0 =  (sc_lv<5>) (zext_ln78_957_fu_48283_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48287_p1() {
    mul_ln78_389_fu_48287_p1 =  (sc_lv<5>) (zext_ln78_957_fu_48283_p1.read());
}

void HLS_accel::thread_mul_ln78_389_fu_48287_p2() {
    mul_ln78_389_fu_48287_p2 = (!mul_ln78_389_fu_48287_p0.read().is_01() || !mul_ln78_389_fu_48287_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_389_fu_48287_p0.read()) * sc_biguint<5>(mul_ln78_389_fu_48287_p1.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34949_p0() {
    mul_ln78_38_fu_34949_p0 =  (sc_lv<5>) (mul_ln78_38_fu_34949_p00.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34949_p00() {
    mul_ln78_38_fu_34949_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34949_p1() {
    mul_ln78_38_fu_34949_p1 =  (sc_lv<5>) (mul_ln78_38_fu_34949_p10.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34949_p10() {
    mul_ln78_38_fu_34949_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_38_fu_34949_p2() {
    mul_ln78_38_fu_34949_p2 = (!mul_ln78_38_fu_34949_p0.read().is_01() || !mul_ln78_38_fu_34949_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_38_fu_34949_p0.read()) * sc_biguint<5>(mul_ln78_38_fu_34949_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48378_p0() {
    mul_ln78_390_fu_48378_p0 =  (sc_lv<5>) (zext_ln78_964_fu_48374_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48378_p1() {
    mul_ln78_390_fu_48378_p1 =  (sc_lv<5>) (zext_ln78_964_fu_48374_p1.read());
}

void HLS_accel::thread_mul_ln78_390_fu_48378_p2() {
    mul_ln78_390_fu_48378_p2 = (!mul_ln78_390_fu_48378_p0.read().is_01() || !mul_ln78_390_fu_48378_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_390_fu_48378_p0.read()) * sc_biguint<5>(mul_ln78_390_fu_48378_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48559_p0() {
    mul_ln78_391_fu_48559_p0 =  (sc_lv<5>) (zext_ln78_971_fu_48555_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48559_p1() {
    mul_ln78_391_fu_48559_p1 =  (sc_lv<5>) (zext_ln78_971_fu_48555_p1.read());
}

void HLS_accel::thread_mul_ln78_391_fu_48559_p2() {
    mul_ln78_391_fu_48559_p2 = (!mul_ln78_391_fu_48559_p0.read().is_01() || !mul_ln78_391_fu_48559_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_391_fu_48559_p0.read()) * sc_biguint<5>(mul_ln78_391_fu_48559_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48650_p0() {
    mul_ln78_392_fu_48650_p0 =  (sc_lv<5>) (zext_ln78_978_fu_48646_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48650_p1() {
    mul_ln78_392_fu_48650_p1 =  (sc_lv<5>) (zext_ln78_978_fu_48646_p1.read());
}

void HLS_accel::thread_mul_ln78_392_fu_48650_p2() {
    mul_ln78_392_fu_48650_p2 = (!mul_ln78_392_fu_48650_p0.read().is_01() || !mul_ln78_392_fu_48650_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_392_fu_48650_p0.read()) * sc_biguint<5>(mul_ln78_392_fu_48650_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48831_p0() {
    mul_ln78_393_fu_48831_p0 =  (sc_lv<5>) (zext_ln78_985_fu_48827_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48831_p1() {
    mul_ln78_393_fu_48831_p1 =  (sc_lv<5>) (zext_ln78_985_fu_48827_p1.read());
}

void HLS_accel::thread_mul_ln78_393_fu_48831_p2() {
    mul_ln78_393_fu_48831_p2 = (!mul_ln78_393_fu_48831_p0.read().is_01() || !mul_ln78_393_fu_48831_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_393_fu_48831_p0.read()) * sc_biguint<5>(mul_ln78_393_fu_48831_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48922_p0() {
    mul_ln78_394_fu_48922_p0 =  (sc_lv<5>) (zext_ln78_992_fu_48918_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48922_p1() {
    mul_ln78_394_fu_48922_p1 =  (sc_lv<5>) (zext_ln78_992_fu_48918_p1.read());
}

void HLS_accel::thread_mul_ln78_394_fu_48922_p2() {
    mul_ln78_394_fu_48922_p2 = (!mul_ln78_394_fu_48922_p0.read().is_01() || !mul_ln78_394_fu_48922_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_394_fu_48922_p0.read()) * sc_biguint<5>(mul_ln78_394_fu_48922_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49103_p0() {
    mul_ln78_395_fu_49103_p0 =  (sc_lv<5>) (zext_ln78_999_fu_49099_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49103_p1() {
    mul_ln78_395_fu_49103_p1 =  (sc_lv<5>) (zext_ln78_999_fu_49099_p1.read());
}

void HLS_accel::thread_mul_ln78_395_fu_49103_p2() {
    mul_ln78_395_fu_49103_p2 = (!mul_ln78_395_fu_49103_p0.read().is_01() || !mul_ln78_395_fu_49103_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_395_fu_49103_p0.read()) * sc_biguint<5>(mul_ln78_395_fu_49103_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49194_p0() {
    mul_ln78_396_fu_49194_p0 =  (sc_lv<5>) (zext_ln78_1006_fu_49190_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49194_p1() {
    mul_ln78_396_fu_49194_p1 =  (sc_lv<5>) (zext_ln78_1006_fu_49190_p1.read());
}

void HLS_accel::thread_mul_ln78_396_fu_49194_p2() {
    mul_ln78_396_fu_49194_p2 = (!mul_ln78_396_fu_49194_p0.read().is_01() || !mul_ln78_396_fu_49194_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_396_fu_49194_p0.read()) * sc_biguint<5>(mul_ln78_396_fu_49194_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49375_p0() {
    mul_ln78_397_fu_49375_p0 =  (sc_lv<5>) (zext_ln78_1013_fu_49371_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49375_p1() {
    mul_ln78_397_fu_49375_p1 =  (sc_lv<5>) (zext_ln78_1013_fu_49371_p1.read());
}

void HLS_accel::thread_mul_ln78_397_fu_49375_p2() {
    mul_ln78_397_fu_49375_p2 = (!mul_ln78_397_fu_49375_p0.read().is_01() || !mul_ln78_397_fu_49375_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_397_fu_49375_p0.read()) * sc_biguint<5>(mul_ln78_397_fu_49375_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49466_p0() {
    mul_ln78_398_fu_49466_p0 =  (sc_lv<5>) (zext_ln78_1020_fu_49462_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49466_p1() {
    mul_ln78_398_fu_49466_p1 =  (sc_lv<5>) (zext_ln78_1020_fu_49462_p1.read());
}

void HLS_accel::thread_mul_ln78_398_fu_49466_p2() {
    mul_ln78_398_fu_49466_p2 = (!mul_ln78_398_fu_49466_p0.read().is_01() || !mul_ln78_398_fu_49466_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_398_fu_49466_p0.read()) * sc_biguint<5>(mul_ln78_398_fu_49466_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49647_p0() {
    mul_ln78_399_fu_49647_p0 =  (sc_lv<5>) (zext_ln78_1027_fu_49643_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49647_p1() {
    mul_ln78_399_fu_49647_p1 =  (sc_lv<5>) (zext_ln78_1027_fu_49643_p1.read());
}

void HLS_accel::thread_mul_ln78_399_fu_49647_p2() {
    mul_ln78_399_fu_49647_p2 = (!mul_ln78_399_fu_49647_p0.read().is_01() || !mul_ln78_399_fu_49647_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_399_fu_49647_p0.read()) * sc_biguint<5>(mul_ln78_399_fu_49647_p1.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35040_p0() {
    mul_ln78_39_fu_35040_p0 =  (sc_lv<5>) (mul_ln78_39_fu_35040_p00.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35040_p00() {
    mul_ln78_39_fu_35040_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35040_p1() {
    mul_ln78_39_fu_35040_p1 =  (sc_lv<5>) (mul_ln78_39_fu_35040_p10.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35040_p10() {
    mul_ln78_39_fu_35040_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_39_fu_35040_p2() {
    mul_ln78_39_fu_35040_p2 = (!mul_ln78_39_fu_35040_p0.read().is_01() || !mul_ln78_39_fu_35040_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_39_fu_35040_p0.read()) * sc_biguint<5>(mul_ln78_39_fu_35040_p1.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30474_p0() {
    mul_ln78_3_fu_30474_p0 =  (sc_lv<5>) (mul_ln78_3_fu_30474_p00.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30474_p00() {
    mul_ln78_3_fu_30474_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30474_p1() {
    mul_ln78_3_fu_30474_p1 =  (sc_lv<5>) (mul_ln78_3_fu_30474_p10.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30474_p10() {
    mul_ln78_3_fu_30474_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_3_fu_30474_p2() {
    mul_ln78_3_fu_30474_p2 = (!mul_ln78_3_fu_30474_p0.read().is_01() || !mul_ln78_3_fu_30474_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_3_fu_30474_p0.read()) * sc_biguint<5>(mul_ln78_3_fu_30474_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49738_p0() {
    mul_ln78_400_fu_49738_p0 =  (sc_lv<5>) (zext_ln78_1034_fu_49734_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49738_p1() {
    mul_ln78_400_fu_49738_p1 =  (sc_lv<5>) (zext_ln78_1034_fu_49734_p1.read());
}

void HLS_accel::thread_mul_ln78_400_fu_49738_p2() {
    mul_ln78_400_fu_49738_p2 = (!mul_ln78_400_fu_49738_p0.read().is_01() || !mul_ln78_400_fu_49738_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_400_fu_49738_p0.read()) * sc_biguint<5>(mul_ln78_400_fu_49738_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49919_p0() {
    mul_ln78_401_fu_49919_p0 =  (sc_lv<5>) (zext_ln78_1041_fu_49915_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49919_p1() {
    mul_ln78_401_fu_49919_p1 =  (sc_lv<5>) (zext_ln78_1041_fu_49915_p1.read());
}

void HLS_accel::thread_mul_ln78_401_fu_49919_p2() {
    mul_ln78_401_fu_49919_p2 = (!mul_ln78_401_fu_49919_p0.read().is_01() || !mul_ln78_401_fu_49919_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_401_fu_49919_p0.read()) * sc_biguint<5>(mul_ln78_401_fu_49919_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50010_p0() {
    mul_ln78_402_fu_50010_p0 =  (sc_lv<5>) (zext_ln78_1048_fu_50006_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50010_p1() {
    mul_ln78_402_fu_50010_p1 =  (sc_lv<5>) (zext_ln78_1048_fu_50006_p1.read());
}

void HLS_accel::thread_mul_ln78_402_fu_50010_p2() {
    mul_ln78_402_fu_50010_p2 = (!mul_ln78_402_fu_50010_p0.read().is_01() || !mul_ln78_402_fu_50010_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_402_fu_50010_p0.read()) * sc_biguint<5>(mul_ln78_402_fu_50010_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50191_p0() {
    mul_ln78_403_fu_50191_p0 =  (sc_lv<5>) (zext_ln78_1055_fu_50187_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50191_p1() {
    mul_ln78_403_fu_50191_p1 =  (sc_lv<5>) (zext_ln78_1055_fu_50187_p1.read());
}

void HLS_accel::thread_mul_ln78_403_fu_50191_p2() {
    mul_ln78_403_fu_50191_p2 = (!mul_ln78_403_fu_50191_p0.read().is_01() || !mul_ln78_403_fu_50191_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_403_fu_50191_p0.read()) * sc_biguint<5>(mul_ln78_403_fu_50191_p1.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50272_p0() {
    mul_ln78_404_fu_50272_p0 =  (sc_lv<5>) (mul_ln78_404_fu_50272_p00.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50272_p00() {
    mul_ln78_404_fu_50272_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50272_p1() {
    mul_ln78_404_fu_50272_p1 =  (sc_lv<5>) (mul_ln78_404_fu_50272_p10.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50272_p10() {
    mul_ln78_404_fu_50272_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_404_fu_50272_p2() {
    mul_ln78_404_fu_50272_p2 = (!mul_ln78_404_fu_50272_p0.read().is_01() || !mul_ln78_404_fu_50272_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_404_fu_50272_p0.read()) * sc_biguint<5>(mul_ln78_404_fu_50272_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50282_p0() {
    mul_ln78_405_fu_50282_p0 =  (sc_lv<5>) (zext_ln78_1062_fu_50278_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50282_p1() {
    mul_ln78_405_fu_50282_p1 =  (sc_lv<5>) (zext_ln78_1062_fu_50278_p1.read());
}

void HLS_accel::thread_mul_ln78_405_fu_50282_p2() {
    mul_ln78_405_fu_50282_p2 = (!mul_ln78_405_fu_50282_p0.read().is_01() || !mul_ln78_405_fu_50282_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_405_fu_50282_p0.read()) * sc_biguint<5>(mul_ln78_405_fu_50282_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50463_p0() {
    mul_ln78_406_fu_50463_p0 =  (sc_lv<5>) (zext_ln78_1069_fu_50459_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50463_p1() {
    mul_ln78_406_fu_50463_p1 =  (sc_lv<5>) (zext_ln78_1069_fu_50459_p1.read());
}

void HLS_accel::thread_mul_ln78_406_fu_50463_p2() {
    mul_ln78_406_fu_50463_p2 = (!mul_ln78_406_fu_50463_p0.read().is_01() || !mul_ln78_406_fu_50463_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_406_fu_50463_p0.read()) * sc_biguint<5>(mul_ln78_406_fu_50463_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50554_p0() {
    mul_ln78_407_fu_50554_p0 =  (sc_lv<5>) (zext_ln78_1076_fu_50550_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50554_p1() {
    mul_ln78_407_fu_50554_p1 =  (sc_lv<5>) (zext_ln78_1076_fu_50550_p1.read());
}

void HLS_accel::thread_mul_ln78_407_fu_50554_p2() {
    mul_ln78_407_fu_50554_p2 = (!mul_ln78_407_fu_50554_p0.read().is_01() || !mul_ln78_407_fu_50554_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_407_fu_50554_p0.read()) * sc_biguint<5>(mul_ln78_407_fu_50554_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50735_p0() {
    mul_ln78_408_fu_50735_p0 =  (sc_lv<5>) (zext_ln78_1083_fu_50731_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50735_p1() {
    mul_ln78_408_fu_50735_p1 =  (sc_lv<5>) (zext_ln78_1083_fu_50731_p1.read());
}

void HLS_accel::thread_mul_ln78_408_fu_50735_p2() {
    mul_ln78_408_fu_50735_p2 = (!mul_ln78_408_fu_50735_p0.read().is_01() || !mul_ln78_408_fu_50735_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_408_fu_50735_p0.read()) * sc_biguint<5>(mul_ln78_408_fu_50735_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50826_p0() {
    mul_ln78_409_fu_50826_p0 =  (sc_lv<5>) (zext_ln78_1090_fu_50822_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50826_p1() {
    mul_ln78_409_fu_50826_p1 =  (sc_lv<5>) (zext_ln78_1090_fu_50822_p1.read());
}

void HLS_accel::thread_mul_ln78_409_fu_50826_p2() {
    mul_ln78_409_fu_50826_p2 = (!mul_ln78_409_fu_50826_p0.read().is_01() || !mul_ln78_409_fu_50826_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_409_fu_50826_p0.read()) * sc_biguint<5>(mul_ln78_409_fu_50826_p1.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35221_p0() {
    mul_ln78_40_fu_35221_p0 =  (sc_lv<5>) (mul_ln78_40_fu_35221_p00.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35221_p00() {
    mul_ln78_40_fu_35221_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35221_p1() {
    mul_ln78_40_fu_35221_p1 =  (sc_lv<5>) (mul_ln78_40_fu_35221_p10.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35221_p10() {
    mul_ln78_40_fu_35221_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_40_fu_35221_p2() {
    mul_ln78_40_fu_35221_p2 = (!mul_ln78_40_fu_35221_p0.read().is_01() || !mul_ln78_40_fu_35221_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_40_fu_35221_p0.read()) * sc_biguint<5>(mul_ln78_40_fu_35221_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51007_p0() {
    mul_ln78_410_fu_51007_p0 =  (sc_lv<5>) (zext_ln78_1097_fu_51003_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51007_p1() {
    mul_ln78_410_fu_51007_p1 =  (sc_lv<5>) (zext_ln78_1097_fu_51003_p1.read());
}

void HLS_accel::thread_mul_ln78_410_fu_51007_p2() {
    mul_ln78_410_fu_51007_p2 = (!mul_ln78_410_fu_51007_p0.read().is_01() || !mul_ln78_410_fu_51007_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_410_fu_51007_p0.read()) * sc_biguint<5>(mul_ln78_410_fu_51007_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51098_p0() {
    mul_ln78_411_fu_51098_p0 =  (sc_lv<5>) (zext_ln78_1104_fu_51094_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51098_p1() {
    mul_ln78_411_fu_51098_p1 =  (sc_lv<5>) (zext_ln78_1104_fu_51094_p1.read());
}

void HLS_accel::thread_mul_ln78_411_fu_51098_p2() {
    mul_ln78_411_fu_51098_p2 = (!mul_ln78_411_fu_51098_p0.read().is_01() || !mul_ln78_411_fu_51098_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_411_fu_51098_p0.read()) * sc_biguint<5>(mul_ln78_411_fu_51098_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51279_p0() {
    mul_ln78_412_fu_51279_p0 =  (sc_lv<5>) (zext_ln78_1111_fu_51275_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51279_p1() {
    mul_ln78_412_fu_51279_p1 =  (sc_lv<5>) (zext_ln78_1111_fu_51275_p1.read());
}

void HLS_accel::thread_mul_ln78_412_fu_51279_p2() {
    mul_ln78_412_fu_51279_p2 = (!mul_ln78_412_fu_51279_p0.read().is_01() || !mul_ln78_412_fu_51279_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_412_fu_51279_p0.read()) * sc_biguint<5>(mul_ln78_412_fu_51279_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51370_p0() {
    mul_ln78_413_fu_51370_p0 =  (sc_lv<5>) (zext_ln78_1118_fu_51366_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51370_p1() {
    mul_ln78_413_fu_51370_p1 =  (sc_lv<5>) (zext_ln78_1118_fu_51366_p1.read());
}

void HLS_accel::thread_mul_ln78_413_fu_51370_p2() {
    mul_ln78_413_fu_51370_p2 = (!mul_ln78_413_fu_51370_p0.read().is_01() || !mul_ln78_413_fu_51370_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_413_fu_51370_p0.read()) * sc_biguint<5>(mul_ln78_413_fu_51370_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51551_p0() {
    mul_ln78_414_fu_51551_p0 =  (sc_lv<5>) (zext_ln78_1125_fu_51547_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51551_p1() {
    mul_ln78_414_fu_51551_p1 =  (sc_lv<5>) (zext_ln78_1125_fu_51547_p1.read());
}

void HLS_accel::thread_mul_ln78_414_fu_51551_p2() {
    mul_ln78_414_fu_51551_p2 = (!mul_ln78_414_fu_51551_p0.read().is_01() || !mul_ln78_414_fu_51551_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_414_fu_51551_p0.read()) * sc_biguint<5>(mul_ln78_414_fu_51551_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51642_p0() {
    mul_ln78_415_fu_51642_p0 =  (sc_lv<5>) (zext_ln78_1132_fu_51638_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51642_p1() {
    mul_ln78_415_fu_51642_p1 =  (sc_lv<5>) (zext_ln78_1132_fu_51638_p1.read());
}

void HLS_accel::thread_mul_ln78_415_fu_51642_p2() {
    mul_ln78_415_fu_51642_p2 = (!mul_ln78_415_fu_51642_p0.read().is_01() || !mul_ln78_415_fu_51642_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_415_fu_51642_p0.read()) * sc_biguint<5>(mul_ln78_415_fu_51642_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51823_p0() {
    mul_ln78_416_fu_51823_p0 =  (sc_lv<5>) (zext_ln78_1139_fu_51819_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51823_p1() {
    mul_ln78_416_fu_51823_p1 =  (sc_lv<5>) (zext_ln78_1139_fu_51819_p1.read());
}

void HLS_accel::thread_mul_ln78_416_fu_51823_p2() {
    mul_ln78_416_fu_51823_p2 = (!mul_ln78_416_fu_51823_p0.read().is_01() || !mul_ln78_416_fu_51823_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_416_fu_51823_p0.read()) * sc_biguint<5>(mul_ln78_416_fu_51823_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51914_p0() {
    mul_ln78_417_fu_51914_p0 =  (sc_lv<5>) (zext_ln78_1146_fu_51910_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51914_p1() {
    mul_ln78_417_fu_51914_p1 =  (sc_lv<5>) (zext_ln78_1146_fu_51910_p1.read());
}

void HLS_accel::thread_mul_ln78_417_fu_51914_p2() {
    mul_ln78_417_fu_51914_p2 = (!mul_ln78_417_fu_51914_p0.read().is_01() || !mul_ln78_417_fu_51914_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_417_fu_51914_p0.read()) * sc_biguint<5>(mul_ln78_417_fu_51914_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52095_p0() {
    mul_ln78_418_fu_52095_p0 =  (sc_lv<5>) (zext_ln78_1153_fu_52091_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52095_p1() {
    mul_ln78_418_fu_52095_p1 =  (sc_lv<5>) (zext_ln78_1153_fu_52091_p1.read());
}

void HLS_accel::thread_mul_ln78_418_fu_52095_p2() {
    mul_ln78_418_fu_52095_p2 = (!mul_ln78_418_fu_52095_p0.read().is_01() || !mul_ln78_418_fu_52095_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_418_fu_52095_p0.read()) * sc_biguint<5>(mul_ln78_418_fu_52095_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52186_p0() {
    mul_ln78_419_fu_52186_p0 =  (sc_lv<5>) (zext_ln78_1160_fu_52182_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52186_p1() {
    mul_ln78_419_fu_52186_p1 =  (sc_lv<5>) (zext_ln78_1160_fu_52182_p1.read());
}

void HLS_accel::thread_mul_ln78_419_fu_52186_p2() {
    mul_ln78_419_fu_52186_p2 = (!mul_ln78_419_fu_52186_p0.read().is_01() || !mul_ln78_419_fu_52186_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_419_fu_52186_p0.read()) * sc_biguint<5>(mul_ln78_419_fu_52186_p1.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35312_p0() {
    mul_ln78_41_fu_35312_p0 =  (sc_lv<5>) (mul_ln78_41_fu_35312_p00.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35312_p00() {
    mul_ln78_41_fu_35312_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35312_p1() {
    mul_ln78_41_fu_35312_p1 =  (sc_lv<5>) (mul_ln78_41_fu_35312_p10.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35312_p10() {
    mul_ln78_41_fu_35312_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_41_fu_35312_p2() {
    mul_ln78_41_fu_35312_p2 = (!mul_ln78_41_fu_35312_p0.read().is_01() || !mul_ln78_41_fu_35312_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_41_fu_35312_p0.read()) * sc_biguint<5>(mul_ln78_41_fu_35312_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52367_p0() {
    mul_ln78_420_fu_52367_p0 =  (sc_lv<5>) (zext_ln78_1167_fu_52363_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52367_p1() {
    mul_ln78_420_fu_52367_p1 =  (sc_lv<5>) (zext_ln78_1167_fu_52363_p1.read());
}

void HLS_accel::thread_mul_ln78_420_fu_52367_p2() {
    mul_ln78_420_fu_52367_p2 = (!mul_ln78_420_fu_52367_p0.read().is_01() || !mul_ln78_420_fu_52367_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_420_fu_52367_p0.read()) * sc_biguint<5>(mul_ln78_420_fu_52367_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52458_p0() {
    mul_ln78_421_fu_52458_p0 =  (sc_lv<5>) (zext_ln78_1174_fu_52454_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52458_p1() {
    mul_ln78_421_fu_52458_p1 =  (sc_lv<5>) (zext_ln78_1174_fu_52454_p1.read());
}

void HLS_accel::thread_mul_ln78_421_fu_52458_p2() {
    mul_ln78_421_fu_52458_p2 = (!mul_ln78_421_fu_52458_p0.read().is_01() || !mul_ln78_421_fu_52458_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_421_fu_52458_p0.read()) * sc_biguint<5>(mul_ln78_421_fu_52458_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52639_p0() {
    mul_ln78_422_fu_52639_p0 =  (sc_lv<5>) (zext_ln78_1181_fu_52635_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52639_p1() {
    mul_ln78_422_fu_52639_p1 =  (sc_lv<5>) (zext_ln78_1181_fu_52635_p1.read());
}

void HLS_accel::thread_mul_ln78_422_fu_52639_p2() {
    mul_ln78_422_fu_52639_p2 = (!mul_ln78_422_fu_52639_p0.read().is_01() || !mul_ln78_422_fu_52639_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_422_fu_52639_p0.read()) * sc_biguint<5>(mul_ln78_422_fu_52639_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52730_p0() {
    mul_ln78_423_fu_52730_p0 =  (sc_lv<5>) (zext_ln78_1188_fu_52726_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52730_p1() {
    mul_ln78_423_fu_52730_p1 =  (sc_lv<5>) (zext_ln78_1188_fu_52726_p1.read());
}

void HLS_accel::thread_mul_ln78_423_fu_52730_p2() {
    mul_ln78_423_fu_52730_p2 = (!mul_ln78_423_fu_52730_p0.read().is_01() || !mul_ln78_423_fu_52730_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_423_fu_52730_p0.read()) * sc_biguint<5>(mul_ln78_423_fu_52730_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52911_p0() {
    mul_ln78_424_fu_52911_p0 =  (sc_lv<5>) (zext_ln78_1195_fu_52907_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52911_p1() {
    mul_ln78_424_fu_52911_p1 =  (sc_lv<5>) (zext_ln78_1195_fu_52907_p1.read());
}

void HLS_accel::thread_mul_ln78_424_fu_52911_p2() {
    mul_ln78_424_fu_52911_p2 = (!mul_ln78_424_fu_52911_p0.read().is_01() || !mul_ln78_424_fu_52911_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_424_fu_52911_p0.read()) * sc_biguint<5>(mul_ln78_424_fu_52911_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53002_p0() {
    mul_ln78_425_fu_53002_p0 =  (sc_lv<5>) (zext_ln78_1202_fu_52998_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53002_p1() {
    mul_ln78_425_fu_53002_p1 =  (sc_lv<5>) (zext_ln78_1202_fu_52998_p1.read());
}

void HLS_accel::thread_mul_ln78_425_fu_53002_p2() {
    mul_ln78_425_fu_53002_p2 = (!mul_ln78_425_fu_53002_p0.read().is_01() || !mul_ln78_425_fu_53002_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_425_fu_53002_p0.read()) * sc_biguint<5>(mul_ln78_425_fu_53002_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53183_p0() {
    mul_ln78_426_fu_53183_p0 =  (sc_lv<5>) (zext_ln78_1209_fu_53179_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53183_p1() {
    mul_ln78_426_fu_53183_p1 =  (sc_lv<5>) (zext_ln78_1209_fu_53179_p1.read());
}

void HLS_accel::thread_mul_ln78_426_fu_53183_p2() {
    mul_ln78_426_fu_53183_p2 = (!mul_ln78_426_fu_53183_p0.read().is_01() || !mul_ln78_426_fu_53183_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_426_fu_53183_p0.read()) * sc_biguint<5>(mul_ln78_426_fu_53183_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53274_p0() {
    mul_ln78_427_fu_53274_p0 =  (sc_lv<5>) (zext_ln78_1216_fu_53270_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53274_p1() {
    mul_ln78_427_fu_53274_p1 =  (sc_lv<5>) (zext_ln78_1216_fu_53270_p1.read());
}

void HLS_accel::thread_mul_ln78_427_fu_53274_p2() {
    mul_ln78_427_fu_53274_p2 = (!mul_ln78_427_fu_53274_p0.read().is_01() || !mul_ln78_427_fu_53274_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_427_fu_53274_p0.read()) * sc_biguint<5>(mul_ln78_427_fu_53274_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53455_p0() {
    mul_ln78_428_fu_53455_p0 =  (sc_lv<5>) (zext_ln78_1223_fu_53451_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53455_p1() {
    mul_ln78_428_fu_53455_p1 =  (sc_lv<5>) (zext_ln78_1223_fu_53451_p1.read());
}

void HLS_accel::thread_mul_ln78_428_fu_53455_p2() {
    mul_ln78_428_fu_53455_p2 = (!mul_ln78_428_fu_53455_p0.read().is_01() || !mul_ln78_428_fu_53455_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_428_fu_53455_p0.read()) * sc_biguint<5>(mul_ln78_428_fu_53455_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53546_p0() {
    mul_ln78_429_fu_53546_p0 =  (sc_lv<5>) (zext_ln78_1230_fu_53542_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53546_p1() {
    mul_ln78_429_fu_53546_p1 =  (sc_lv<5>) (zext_ln78_1230_fu_53542_p1.read());
}

void HLS_accel::thread_mul_ln78_429_fu_53546_p2() {
    mul_ln78_429_fu_53546_p2 = (!mul_ln78_429_fu_53546_p0.read().is_01() || !mul_ln78_429_fu_53546_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_429_fu_53546_p0.read()) * sc_biguint<5>(mul_ln78_429_fu_53546_p1.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35493_p0() {
    mul_ln78_42_fu_35493_p0 =  (sc_lv<5>) (mul_ln78_42_fu_35493_p00.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35493_p00() {
    mul_ln78_42_fu_35493_p00 = esl_zext<10,5>(reg_19495.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35493_p1() {
    mul_ln78_42_fu_35493_p1 =  (sc_lv<5>) (mul_ln78_42_fu_35493_p10.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35493_p10() {
    mul_ln78_42_fu_35493_p10 = esl_zext<10,5>(reg_19499.read());
}

void HLS_accel::thread_mul_ln78_42_fu_35493_p2() {
    mul_ln78_42_fu_35493_p2 = (!mul_ln78_42_fu_35493_p0.read().is_01() || !mul_ln78_42_fu_35493_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_42_fu_35493_p0.read()) * sc_biguint<5>(mul_ln78_42_fu_35493_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53727_p0() {
    mul_ln78_430_fu_53727_p0 =  (sc_lv<5>) (zext_ln78_1237_fu_53723_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53727_p1() {
    mul_ln78_430_fu_53727_p1 =  (sc_lv<5>) (zext_ln78_1237_fu_53723_p1.read());
}

void HLS_accel::thread_mul_ln78_430_fu_53727_p2() {
    mul_ln78_430_fu_53727_p2 = (!mul_ln78_430_fu_53727_p0.read().is_01() || !mul_ln78_430_fu_53727_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_430_fu_53727_p0.read()) * sc_biguint<5>(mul_ln78_430_fu_53727_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53818_p0() {
    mul_ln78_431_fu_53818_p0 =  (sc_lv<5>) (zext_ln78_1244_fu_53814_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53818_p1() {
    mul_ln78_431_fu_53818_p1 =  (sc_lv<5>) (zext_ln78_1244_fu_53814_p1.read());
}

void HLS_accel::thread_mul_ln78_431_fu_53818_p2() {
    mul_ln78_431_fu_53818_p2 = (!mul_ln78_431_fu_53818_p0.read().is_01() || !mul_ln78_431_fu_53818_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_431_fu_53818_p0.read()) * sc_biguint<5>(mul_ln78_431_fu_53818_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_53999_p0() {
    mul_ln78_432_fu_53999_p0 =  (sc_lv<5>) (zext_ln78_1251_fu_53995_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_53999_p1() {
    mul_ln78_432_fu_53999_p1 =  (sc_lv<5>) (zext_ln78_1251_fu_53995_p1.read());
}

void HLS_accel::thread_mul_ln78_432_fu_53999_p2() {
    mul_ln78_432_fu_53999_p2 = (!mul_ln78_432_fu_53999_p0.read().is_01() || !mul_ln78_432_fu_53999_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_432_fu_53999_p0.read()) * sc_biguint<5>(mul_ln78_432_fu_53999_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54090_p0() {
    mul_ln78_433_fu_54090_p0 =  (sc_lv<5>) (zext_ln78_1258_fu_54086_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54090_p1() {
    mul_ln78_433_fu_54090_p1 =  (sc_lv<5>) (zext_ln78_1258_fu_54086_p1.read());
}

void HLS_accel::thread_mul_ln78_433_fu_54090_p2() {
    mul_ln78_433_fu_54090_p2 = (!mul_ln78_433_fu_54090_p0.read().is_01() || !mul_ln78_433_fu_54090_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_433_fu_54090_p0.read()) * sc_biguint<5>(mul_ln78_433_fu_54090_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54271_p0() {
    mul_ln78_434_fu_54271_p0 =  (sc_lv<5>) (zext_ln78_1265_fu_54267_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54271_p1() {
    mul_ln78_434_fu_54271_p1 =  (sc_lv<5>) (zext_ln78_1265_fu_54267_p1.read());
}

void HLS_accel::thread_mul_ln78_434_fu_54271_p2() {
    mul_ln78_434_fu_54271_p2 = (!mul_ln78_434_fu_54271_p0.read().is_01() || !mul_ln78_434_fu_54271_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_434_fu_54271_p0.read()) * sc_biguint<5>(mul_ln78_434_fu_54271_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54362_p0() {
    mul_ln78_435_fu_54362_p0 =  (sc_lv<5>) (zext_ln78_1272_fu_54358_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54362_p1() {
    mul_ln78_435_fu_54362_p1 =  (sc_lv<5>) (zext_ln78_1272_fu_54358_p1.read());
}

void HLS_accel::thread_mul_ln78_435_fu_54362_p2() {
    mul_ln78_435_fu_54362_p2 = (!mul_ln78_435_fu_54362_p0.read().is_01() || !mul_ln78_435_fu_54362_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_435_fu_54362_p0.read()) * sc_biguint<5>(mul_ln78_435_fu_54362_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54543_p0() {
    mul_ln78_436_fu_54543_p0 =  (sc_lv<5>) (zext_ln78_1279_fu_54539_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54543_p1() {
    mul_ln78_436_fu_54543_p1 =  (sc_lv<5>) (zext_ln78_1279_fu_54539_p1.read());
}

void HLS_accel::thread_mul_ln78_436_fu_54543_p2() {
    mul_ln78_436_fu_54543_p2 = (!mul_ln78_436_fu_54543_p0.read().is_01() || !mul_ln78_436_fu_54543_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_436_fu_54543_p0.read()) * sc_biguint<5>(mul_ln78_436_fu_54543_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54634_p0() {
    mul_ln78_437_fu_54634_p0 =  (sc_lv<5>) (zext_ln78_1286_fu_54630_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54634_p1() {
    mul_ln78_437_fu_54634_p1 =  (sc_lv<5>) (zext_ln78_1286_fu_54630_p1.read());
}

void HLS_accel::thread_mul_ln78_437_fu_54634_p2() {
    mul_ln78_437_fu_54634_p2 = (!mul_ln78_437_fu_54634_p0.read().is_01() || !mul_ln78_437_fu_54634_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_437_fu_54634_p0.read()) * sc_biguint<5>(mul_ln78_437_fu_54634_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54815_p0() {
    mul_ln78_438_fu_54815_p0 =  (sc_lv<5>) (zext_ln78_1293_fu_54811_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54815_p1() {
    mul_ln78_438_fu_54815_p1 =  (sc_lv<5>) (zext_ln78_1293_fu_54811_p1.read());
}

void HLS_accel::thread_mul_ln78_438_fu_54815_p2() {
    mul_ln78_438_fu_54815_p2 = (!mul_ln78_438_fu_54815_p0.read().is_01() || !mul_ln78_438_fu_54815_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_438_fu_54815_p0.read()) * sc_biguint<5>(mul_ln78_438_fu_54815_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54906_p0() {
    mul_ln78_439_fu_54906_p0 =  (sc_lv<5>) (zext_ln78_1300_fu_54902_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54906_p1() {
    mul_ln78_439_fu_54906_p1 =  (sc_lv<5>) (zext_ln78_1300_fu_54902_p1.read());
}

void HLS_accel::thread_mul_ln78_439_fu_54906_p2() {
    mul_ln78_439_fu_54906_p2 = (!mul_ln78_439_fu_54906_p0.read().is_01() || !mul_ln78_439_fu_54906_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_439_fu_54906_p0.read()) * sc_biguint<5>(mul_ln78_439_fu_54906_p1.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35584_p0() {
    mul_ln78_43_fu_35584_p0 =  (sc_lv<5>) (mul_ln78_43_fu_35584_p00.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35584_p00() {
    mul_ln78_43_fu_35584_p00 = esl_zext<10,5>(reg_19507.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35584_p1() {
    mul_ln78_43_fu_35584_p1 =  (sc_lv<5>) (mul_ln78_43_fu_35584_p10.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35584_p10() {
    mul_ln78_43_fu_35584_p10 = esl_zext<10,5>(reg_19511.read());
}

void HLS_accel::thread_mul_ln78_43_fu_35584_p2() {
    mul_ln78_43_fu_35584_p2 = (!mul_ln78_43_fu_35584_p0.read().is_01() || !mul_ln78_43_fu_35584_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_43_fu_35584_p0.read()) * sc_biguint<5>(mul_ln78_43_fu_35584_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55087_p0() {
    mul_ln78_440_fu_55087_p0 =  (sc_lv<5>) (zext_ln78_1307_fu_55083_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55087_p1() {
    mul_ln78_440_fu_55087_p1 =  (sc_lv<5>) (zext_ln78_1307_fu_55083_p1.read());
}

void HLS_accel::thread_mul_ln78_440_fu_55087_p2() {
    mul_ln78_440_fu_55087_p2 = (!mul_ln78_440_fu_55087_p0.read().is_01() || !mul_ln78_440_fu_55087_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_440_fu_55087_p0.read()) * sc_biguint<5>(mul_ln78_440_fu_55087_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55178_p0() {
    mul_ln78_441_fu_55178_p0 =  (sc_lv<5>) (zext_ln78_1314_fu_55174_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55178_p1() {
    mul_ln78_441_fu_55178_p1 =  (sc_lv<5>) (zext_ln78_1314_fu_55174_p1.read());
}

void HLS_accel::thread_mul_ln78_441_fu_55178_p2() {
    mul_ln78_441_fu_55178_p2 = (!mul_ln78_441_fu_55178_p0.read().is_01() || !mul_ln78_441_fu_55178_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_441_fu_55178_p0.read()) * sc_biguint<5>(mul_ln78_441_fu_55178_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55359_p0() {
    mul_ln78_442_fu_55359_p0 =  (sc_lv<5>) (zext_ln78_1321_fu_55355_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55359_p1() {
    mul_ln78_442_fu_55359_p1 =  (sc_lv<5>) (zext_ln78_1321_fu_55355_p1.read());
}

void HLS_accel::thread_mul_ln78_442_fu_55359_p2() {
    mul_ln78_442_fu_55359_p2 = (!mul_ln78_442_fu_55359_p0.read().is_01() || !mul_ln78_442_fu_55359_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_442_fu_55359_p0.read()) * sc_biguint<5>(mul_ln78_442_fu_55359_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55450_p0() {
    mul_ln78_443_fu_55450_p0 =  (sc_lv<5>) (zext_ln78_1328_fu_55446_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55450_p1() {
    mul_ln78_443_fu_55450_p1 =  (sc_lv<5>) (zext_ln78_1328_fu_55446_p1.read());
}

void HLS_accel::thread_mul_ln78_443_fu_55450_p2() {
    mul_ln78_443_fu_55450_p2 = (!mul_ln78_443_fu_55450_p0.read().is_01() || !mul_ln78_443_fu_55450_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_443_fu_55450_p0.read()) * sc_biguint<5>(mul_ln78_443_fu_55450_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55631_p0() {
    mul_ln78_444_fu_55631_p0 =  (sc_lv<5>) (zext_ln78_1335_fu_55627_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55631_p1() {
    mul_ln78_444_fu_55631_p1 =  (sc_lv<5>) (zext_ln78_1335_fu_55627_p1.read());
}

void HLS_accel::thread_mul_ln78_444_fu_55631_p2() {
    mul_ln78_444_fu_55631_p2 = (!mul_ln78_444_fu_55631_p0.read().is_01() || !mul_ln78_444_fu_55631_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_444_fu_55631_p0.read()) * sc_biguint<5>(mul_ln78_444_fu_55631_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55722_p0() {
    mul_ln78_445_fu_55722_p0 =  (sc_lv<5>) (zext_ln78_1342_fu_55718_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55722_p1() {
    mul_ln78_445_fu_55722_p1 =  (sc_lv<5>) (zext_ln78_1342_fu_55718_p1.read());
}

void HLS_accel::thread_mul_ln78_445_fu_55722_p2() {
    mul_ln78_445_fu_55722_p2 = (!mul_ln78_445_fu_55722_p0.read().is_01() || !mul_ln78_445_fu_55722_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_445_fu_55722_p0.read()) * sc_biguint<5>(mul_ln78_445_fu_55722_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55903_p0() {
    mul_ln78_446_fu_55903_p0 =  (sc_lv<5>) (zext_ln78_1349_fu_55899_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55903_p1() {
    mul_ln78_446_fu_55903_p1 =  (sc_lv<5>) (zext_ln78_1349_fu_55899_p1.read());
}

void HLS_accel::thread_mul_ln78_446_fu_55903_p2() {
    mul_ln78_446_fu_55903_p2 = (!mul_ln78_446_fu_55903_p0.read().is_01() || !mul_ln78_446_fu_55903_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_446_fu_55903_p0.read()) * sc_biguint<5>(mul_ln78_446_fu_55903_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_55994_p0() {
    mul_ln78_447_fu_55994_p0 =  (sc_lv<5>) (zext_ln78_1356_fu_55990_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_55994_p1() {
    mul_ln78_447_fu_55994_p1 =  (sc_lv<5>) (zext_ln78_1356_fu_55990_p1.read());
}

void HLS_accel::thread_mul_ln78_447_fu_55994_p2() {
    mul_ln78_447_fu_55994_p2 = (!mul_ln78_447_fu_55994_p0.read().is_01() || !mul_ln78_447_fu_55994_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_447_fu_55994_p0.read()) * sc_biguint<5>(mul_ln78_447_fu_55994_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56175_p0() {
    mul_ln78_448_fu_56175_p0 =  (sc_lv<5>) (zext_ln78_1363_fu_56171_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56175_p1() {
    mul_ln78_448_fu_56175_p1 =  (sc_lv<5>) (zext_ln78_1363_fu_56171_p1.read());
}

void HLS_accel::thread_mul_ln78_448_fu_56175_p2() {
    mul_ln78_448_fu_56175_p2 = (!mul_ln78_448_fu_56175_p0.read().is_01() || !mul_ln78_448_fu_56175_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_448_fu_56175_p0.read()) * sc_biguint<5>(mul_ln78_448_fu_56175_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56266_p0() {
    mul_ln78_449_fu_56266_p0 =  (sc_lv<5>) (zext_ln78_1370_fu_56262_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56266_p1() {
    mul_ln78_449_fu_56266_p1 =  (sc_lv<5>) (zext_ln78_1370_fu_56262_p1.read());
}

void HLS_accel::thread_mul_ln78_449_fu_56266_p2() {
    mul_ln78_449_fu_56266_p2 = (!mul_ln78_449_fu_56266_p0.read().is_01() || !mul_ln78_449_fu_56266_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_449_fu_56266_p0.read()) * sc_biguint<5>(mul_ln78_449_fu_56266_p1.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35765_p0() {
    mul_ln78_44_fu_35765_p0 =  (sc_lv<5>) (mul_ln78_44_fu_35765_p00.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35765_p00() {
    mul_ln78_44_fu_35765_p00 = esl_zext<10,5>(reg_19528.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35765_p1() {
    mul_ln78_44_fu_35765_p1 =  (sc_lv<5>) (mul_ln78_44_fu_35765_p10.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35765_p10() {
    mul_ln78_44_fu_35765_p10 = esl_zext<10,5>(reg_19532.read());
}

void HLS_accel::thread_mul_ln78_44_fu_35765_p2() {
    mul_ln78_44_fu_35765_p2 = (!mul_ln78_44_fu_35765_p0.read().is_01() || !mul_ln78_44_fu_35765_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_44_fu_35765_p0.read()) * sc_biguint<5>(mul_ln78_44_fu_35765_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56447_p0() {
    mul_ln78_450_fu_56447_p0 =  (sc_lv<5>) (zext_ln78_1377_fu_56443_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56447_p1() {
    mul_ln78_450_fu_56447_p1 =  (sc_lv<5>) (zext_ln78_1377_fu_56443_p1.read());
}

void HLS_accel::thread_mul_ln78_450_fu_56447_p2() {
    mul_ln78_450_fu_56447_p2 = (!mul_ln78_450_fu_56447_p0.read().is_01() || !mul_ln78_450_fu_56447_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_450_fu_56447_p0.read()) * sc_biguint<5>(mul_ln78_450_fu_56447_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56538_p0() {
    mul_ln78_451_fu_56538_p0 =  (sc_lv<5>) (zext_ln78_1384_fu_56534_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56538_p1() {
    mul_ln78_451_fu_56538_p1 =  (sc_lv<5>) (zext_ln78_1384_fu_56534_p1.read());
}

void HLS_accel::thread_mul_ln78_451_fu_56538_p2() {
    mul_ln78_451_fu_56538_p2 = (!mul_ln78_451_fu_56538_p0.read().is_01() || !mul_ln78_451_fu_56538_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_451_fu_56538_p0.read()) * sc_biguint<5>(mul_ln78_451_fu_56538_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56719_p0() {
    mul_ln78_452_fu_56719_p0 =  (sc_lv<5>) (zext_ln78_1391_fu_56715_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56719_p1() {
    mul_ln78_452_fu_56719_p1 =  (sc_lv<5>) (zext_ln78_1391_fu_56715_p1.read());
}

void HLS_accel::thread_mul_ln78_452_fu_56719_p2() {
    mul_ln78_452_fu_56719_p2 = (!mul_ln78_452_fu_56719_p0.read().is_01() || !mul_ln78_452_fu_56719_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_452_fu_56719_p0.read()) * sc_biguint<5>(mul_ln78_452_fu_56719_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56810_p0() {
    mul_ln78_453_fu_56810_p0 =  (sc_lv<5>) (zext_ln78_1398_fu_56806_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56810_p1() {
    mul_ln78_453_fu_56810_p1 =  (sc_lv<5>) (zext_ln78_1398_fu_56806_p1.read());
}

void HLS_accel::thread_mul_ln78_453_fu_56810_p2() {
    mul_ln78_453_fu_56810_p2 = (!mul_ln78_453_fu_56810_p0.read().is_01() || !mul_ln78_453_fu_56810_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_453_fu_56810_p0.read()) * sc_biguint<5>(mul_ln78_453_fu_56810_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_56991_p0() {
    mul_ln78_454_fu_56991_p0 =  (sc_lv<5>) (zext_ln78_1405_fu_56987_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_56991_p1() {
    mul_ln78_454_fu_56991_p1 =  (sc_lv<5>) (zext_ln78_1405_fu_56987_p1.read());
}

void HLS_accel::thread_mul_ln78_454_fu_56991_p2() {
    mul_ln78_454_fu_56991_p2 = (!mul_ln78_454_fu_56991_p0.read().is_01() || !mul_ln78_454_fu_56991_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_454_fu_56991_p0.read()) * sc_biguint<5>(mul_ln78_454_fu_56991_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57082_p0() {
    mul_ln78_455_fu_57082_p0 =  (sc_lv<5>) (zext_ln78_1412_fu_57078_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57082_p1() {
    mul_ln78_455_fu_57082_p1 =  (sc_lv<5>) (zext_ln78_1412_fu_57078_p1.read());
}

void HLS_accel::thread_mul_ln78_455_fu_57082_p2() {
    mul_ln78_455_fu_57082_p2 = (!mul_ln78_455_fu_57082_p0.read().is_01() || !mul_ln78_455_fu_57082_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_455_fu_57082_p0.read()) * sc_biguint<5>(mul_ln78_455_fu_57082_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57263_p0() {
    mul_ln78_456_fu_57263_p0 =  (sc_lv<5>) (zext_ln78_1419_fu_57259_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57263_p1() {
    mul_ln78_456_fu_57263_p1 =  (sc_lv<5>) (zext_ln78_1419_fu_57259_p1.read());
}

void HLS_accel::thread_mul_ln78_456_fu_57263_p2() {
    mul_ln78_456_fu_57263_p2 = (!mul_ln78_456_fu_57263_p0.read().is_01() || !mul_ln78_456_fu_57263_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_456_fu_57263_p0.read()) * sc_biguint<5>(mul_ln78_456_fu_57263_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57354_p0() {
    mul_ln78_457_fu_57354_p0 =  (sc_lv<5>) (zext_ln78_1426_fu_57350_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57354_p1() {
    mul_ln78_457_fu_57354_p1 =  (sc_lv<5>) (zext_ln78_1426_fu_57350_p1.read());
}

void HLS_accel::thread_mul_ln78_457_fu_57354_p2() {
    mul_ln78_457_fu_57354_p2 = (!mul_ln78_457_fu_57354_p0.read().is_01() || !mul_ln78_457_fu_57354_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_457_fu_57354_p0.read()) * sc_biguint<5>(mul_ln78_457_fu_57354_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57535_p0() {
    mul_ln78_458_fu_57535_p0 =  (sc_lv<5>) (zext_ln78_1433_fu_57531_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57535_p1() {
    mul_ln78_458_fu_57535_p1 =  (sc_lv<5>) (zext_ln78_1433_fu_57531_p1.read());
}

void HLS_accel::thread_mul_ln78_458_fu_57535_p2() {
    mul_ln78_458_fu_57535_p2 = (!mul_ln78_458_fu_57535_p0.read().is_01() || !mul_ln78_458_fu_57535_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_458_fu_57535_p0.read()) * sc_biguint<5>(mul_ln78_458_fu_57535_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57626_p0() {
    mul_ln78_459_fu_57626_p0 =  (sc_lv<5>) (zext_ln78_1440_fu_57622_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57626_p1() {
    mul_ln78_459_fu_57626_p1 =  (sc_lv<5>) (zext_ln78_1440_fu_57622_p1.read());
}

void HLS_accel::thread_mul_ln78_459_fu_57626_p2() {
    mul_ln78_459_fu_57626_p2 = (!mul_ln78_459_fu_57626_p0.read().is_01() || !mul_ln78_459_fu_57626_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_459_fu_57626_p0.read()) * sc_biguint<5>(mul_ln78_459_fu_57626_p1.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35856_p0() {
    mul_ln78_45_fu_35856_p0 =  (sc_lv<5>) (mul_ln78_45_fu_35856_p00.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35856_p00() {
    mul_ln78_45_fu_35856_p00 = esl_zext<10,5>(reg_19420.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35856_p1() {
    mul_ln78_45_fu_35856_p1 =  (sc_lv<5>) (mul_ln78_45_fu_35856_p10.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35856_p10() {
    mul_ln78_45_fu_35856_p10 = esl_zext<10,5>(reg_19424.read());
}

void HLS_accel::thread_mul_ln78_45_fu_35856_p2() {
    mul_ln78_45_fu_35856_p2 = (!mul_ln78_45_fu_35856_p0.read().is_01() || !mul_ln78_45_fu_35856_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_45_fu_35856_p0.read()) * sc_biguint<5>(mul_ln78_45_fu_35856_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57807_p0() {
    mul_ln78_460_fu_57807_p0 =  (sc_lv<5>) (zext_ln78_1447_fu_57803_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57807_p1() {
    mul_ln78_460_fu_57807_p1 =  (sc_lv<5>) (zext_ln78_1447_fu_57803_p1.read());
}

void HLS_accel::thread_mul_ln78_460_fu_57807_p2() {
    mul_ln78_460_fu_57807_p2 = (!mul_ln78_460_fu_57807_p0.read().is_01() || !mul_ln78_460_fu_57807_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_460_fu_57807_p0.read()) * sc_biguint<5>(mul_ln78_460_fu_57807_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57898_p0() {
    mul_ln78_461_fu_57898_p0 =  (sc_lv<5>) (zext_ln78_1454_fu_57894_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57898_p1() {
    mul_ln78_461_fu_57898_p1 =  (sc_lv<5>) (zext_ln78_1454_fu_57894_p1.read());
}

void HLS_accel::thread_mul_ln78_461_fu_57898_p2() {
    mul_ln78_461_fu_57898_p2 = (!mul_ln78_461_fu_57898_p0.read().is_01() || !mul_ln78_461_fu_57898_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_461_fu_57898_p0.read()) * sc_biguint<5>(mul_ln78_461_fu_57898_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58079_p0() {
    mul_ln78_462_fu_58079_p0 =  (sc_lv<5>) (zext_ln78_1461_fu_58075_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58079_p1() {
    mul_ln78_462_fu_58079_p1 =  (sc_lv<5>) (zext_ln78_1461_fu_58075_p1.read());
}

void HLS_accel::thread_mul_ln78_462_fu_58079_p2() {
    mul_ln78_462_fu_58079_p2 = (!mul_ln78_462_fu_58079_p0.read().is_01() || !mul_ln78_462_fu_58079_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_462_fu_58079_p0.read()) * sc_biguint<5>(mul_ln78_462_fu_58079_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58170_p0() {
    mul_ln78_463_fu_58170_p0 =  (sc_lv<5>) (zext_ln78_1468_fu_58166_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58170_p1() {
    mul_ln78_463_fu_58170_p1 =  (sc_lv<5>) (zext_ln78_1468_fu_58166_p1.read());
}

void HLS_accel::thread_mul_ln78_463_fu_58170_p2() {
    mul_ln78_463_fu_58170_p2 = (!mul_ln78_463_fu_58170_p0.read().is_01() || !mul_ln78_463_fu_58170_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_463_fu_58170_p0.read()) * sc_biguint<5>(mul_ln78_463_fu_58170_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58351_p0() {
    mul_ln78_464_fu_58351_p0 =  (sc_lv<5>) (zext_ln78_1475_fu_58347_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58351_p1() {
    mul_ln78_464_fu_58351_p1 =  (sc_lv<5>) (zext_ln78_1475_fu_58347_p1.read());
}

void HLS_accel::thread_mul_ln78_464_fu_58351_p2() {
    mul_ln78_464_fu_58351_p2 = (!mul_ln78_464_fu_58351_p0.read().is_01() || !mul_ln78_464_fu_58351_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_464_fu_58351_p0.read()) * sc_biguint<5>(mul_ln78_464_fu_58351_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58442_p0() {
    mul_ln78_465_fu_58442_p0 =  (sc_lv<5>) (zext_ln78_1482_fu_58438_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58442_p1() {
    mul_ln78_465_fu_58442_p1 =  (sc_lv<5>) (zext_ln78_1482_fu_58438_p1.read());
}

void HLS_accel::thread_mul_ln78_465_fu_58442_p2() {
    mul_ln78_465_fu_58442_p2 = (!mul_ln78_465_fu_58442_p0.read().is_01() || !mul_ln78_465_fu_58442_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_465_fu_58442_p0.read()) * sc_biguint<5>(mul_ln78_465_fu_58442_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58623_p0() {
    mul_ln78_466_fu_58623_p0 =  (sc_lv<5>) (zext_ln78_1489_fu_58619_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58623_p1() {
    mul_ln78_466_fu_58623_p1 =  (sc_lv<5>) (zext_ln78_1489_fu_58619_p1.read());
}

void HLS_accel::thread_mul_ln78_466_fu_58623_p2() {
    mul_ln78_466_fu_58623_p2 = (!mul_ln78_466_fu_58623_p0.read().is_01() || !mul_ln78_466_fu_58623_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_466_fu_58623_p0.read()) * sc_biguint<5>(mul_ln78_466_fu_58623_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58714_p0() {
    mul_ln78_467_fu_58714_p0 =  (sc_lv<5>) (zext_ln78_1496_fu_58710_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58714_p1() {
    mul_ln78_467_fu_58714_p1 =  (sc_lv<5>) (zext_ln78_1496_fu_58710_p1.read());
}

void HLS_accel::thread_mul_ln78_467_fu_58714_p2() {
    mul_ln78_467_fu_58714_p2 = (!mul_ln78_467_fu_58714_p0.read().is_01() || !mul_ln78_467_fu_58714_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_467_fu_58714_p0.read()) * sc_biguint<5>(mul_ln78_467_fu_58714_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58895_p0() {
    mul_ln78_468_fu_58895_p0 =  (sc_lv<5>) (zext_ln78_1503_fu_58891_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58895_p1() {
    mul_ln78_468_fu_58895_p1 =  (sc_lv<5>) (zext_ln78_1503_fu_58891_p1.read());
}

void HLS_accel::thread_mul_ln78_468_fu_58895_p2() {
    mul_ln78_468_fu_58895_p2 = (!mul_ln78_468_fu_58895_p0.read().is_01() || !mul_ln78_468_fu_58895_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_468_fu_58895_p0.read()) * sc_biguint<5>(mul_ln78_468_fu_58895_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_58986_p0() {
    mul_ln78_469_fu_58986_p0 =  (sc_lv<5>) (zext_ln78_1510_fu_58982_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_58986_p1() {
    mul_ln78_469_fu_58986_p1 =  (sc_lv<5>) (zext_ln78_1510_fu_58982_p1.read());
}

void HLS_accel::thread_mul_ln78_469_fu_58986_p2() {
    mul_ln78_469_fu_58986_p2 = (!mul_ln78_469_fu_58986_p0.read().is_01() || !mul_ln78_469_fu_58986_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_469_fu_58986_p0.read()) * sc_biguint<5>(mul_ln78_469_fu_58986_p1.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36037_p0() {
    mul_ln78_46_fu_36037_p0 =  (sc_lv<5>) (mul_ln78_46_fu_36037_p00.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36037_p00() {
    mul_ln78_46_fu_36037_p00 = esl_zext<10,5>(reg_19432.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36037_p1() {
    mul_ln78_46_fu_36037_p1 =  (sc_lv<5>) (mul_ln78_46_fu_36037_p10.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36037_p10() {
    mul_ln78_46_fu_36037_p10 = esl_zext<10,5>(reg_19436.read());
}

void HLS_accel::thread_mul_ln78_46_fu_36037_p2() {
    mul_ln78_46_fu_36037_p2 = (!mul_ln78_46_fu_36037_p0.read().is_01() || !mul_ln78_46_fu_36037_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_46_fu_36037_p0.read()) * sc_biguint<5>(mul_ln78_46_fu_36037_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59167_p0() {
    mul_ln78_470_fu_59167_p0 =  (sc_lv<5>) (zext_ln78_1517_fu_59163_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59167_p1() {
    mul_ln78_470_fu_59167_p1 =  (sc_lv<5>) (zext_ln78_1517_fu_59163_p1.read());
}

void HLS_accel::thread_mul_ln78_470_fu_59167_p2() {
    mul_ln78_470_fu_59167_p2 = (!mul_ln78_470_fu_59167_p0.read().is_01() || !mul_ln78_470_fu_59167_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_470_fu_59167_p0.read()) * sc_biguint<5>(mul_ln78_470_fu_59167_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59258_p0() {
    mul_ln78_471_fu_59258_p0 =  (sc_lv<5>) (zext_ln78_1524_fu_59254_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59258_p1() {
    mul_ln78_471_fu_59258_p1 =  (sc_lv<5>) (zext_ln78_1524_fu_59254_p1.read());
}

void HLS_accel::thread_mul_ln78_471_fu_59258_p2() {
    mul_ln78_471_fu_59258_p2 = (!mul_ln78_471_fu_59258_p0.read().is_01() || !mul_ln78_471_fu_59258_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_471_fu_59258_p0.read()) * sc_biguint<5>(mul_ln78_471_fu_59258_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59439_p0() {
    mul_ln78_472_fu_59439_p0 =  (sc_lv<5>) (zext_ln78_1531_fu_59435_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59439_p1() {
    mul_ln78_472_fu_59439_p1 =  (sc_lv<5>) (zext_ln78_1531_fu_59435_p1.read());
}

void HLS_accel::thread_mul_ln78_472_fu_59439_p2() {
    mul_ln78_472_fu_59439_p2 = (!mul_ln78_472_fu_59439_p0.read().is_01() || !mul_ln78_472_fu_59439_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln78_472_fu_59439_p0.read()) * sc_biguint<5>(mul_ln78_472_fu_59439_p1.read());
}

}

