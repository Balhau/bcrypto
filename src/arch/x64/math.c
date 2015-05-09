#include "math.h"



inline int BMATH_MUL_INT(int a,int b){
  int c;
  int d=a;
  __asm__ volatile(	
    "imul %%ebx,%%eax;\
     mov %%eax,%%ecx;"
    : "=c"(c)
    : "a"(d), "b"(b)
  );
  return c;
}
//addps %%xmm1,%%xmm0;\ --> Add instruction
inline void MUL_VEC_FLOAT128(float* vec1, float* vec2)
{
  __asm__ volatile(
    "movups %0,%%xmm0;\
     movups %1,%%xmm1;\
     mulps %%xmm1,%%xmm0;\
     movups %%xmm0,%2;"
       :
       : "m" (*vec1), "m" (*vec2),"m"(*vec1)
       : "%xmm0", "%xmm1"
  );
}

inline void ADD_VEC_FLOAT128(float* vec1,float* vec2)
{
  __asm__ volatile(
    "movups %0,%%xmm0;\
     movups %1,%%xmm1;\
     addps %%xmm1,%%xmm0;\
     movups %%xmm0,%2;"
       :
       : "m" (*vec1), "m" (*vec2),"m"(*vec1)
       : "%xmm0", "%xmm1"
  ); 
}

inline void AND_VEC_FLOAT128(float* vec1,float* vec2)
{
  __asm__ volatile(
    "movups %0,%%xmm0;\
     movups %1,%%xmm1;\
     andps %%xmm1,%%xmm0;\
     movups %%xmm0,%2;"
       :
       : "m" (*vec1), "m" (*vec2),"m"(*vec1)
       : "%xmm0", "%xmm1"
  ); 
}

inline void OR_VEC_FLOAT128(float* vec1,float* vec2)
{
  __asm__ volatile(
    "movups %0,%%xmm0;\
     movups %1,%%xmm1;\
     orps %%xmm1,%%xmm0;\
     movups %%xmm0,%2;"
       :
       : "m" (*vec1), "m" (*vec2),"m"(*vec1)
       : "%xmm0", "%xmm1"
  ); 
}

inline void XOR_VEC_FLOAT128(float* vec1,float* vec2)
{
  __asm__ volatile(
    "movups %0,%%xmm0;\
     movups %1,%%xmm1;\
     xorps %%xmm1,%%xmm0;\
     movups %%xmm0,%2;"
       :
       : "m" (*vec1), "m" (*vec2),"m"(*vec1)
       : "%xmm0", "%xmm1"
  ); 
}
