#ifndef MATH_H
#define MATH_H
#include "types.h"

  UINT32 BMATH_MUL_INT(UINT32 a,UINT32 b);
  void MUL_VEC_FLOAT128(FLOAT* vec1, FLOAT* vec2);
  void ADD_VEC_FLOAT128(FLOAT* vec1, FLOAT* vec2);
  void AND_VEC_FLOAT128(FLOAT* vec1, FLOAT* vec2);
  void OR_VEC_FLOAT128(FLOAT*  vec1, FLOAT* vec2);
  void XOR_VEC_FLOAT128(FLOAT* vec1, FLOAT* vec2);
  
  
#endif