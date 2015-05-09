#include "math.h"

int BMATH_MUL_INT(int a,int b){
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
void BMATH_MUL_VEC(float* vec1, float* vec2)
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

void BMATH_ADD_VEC(float* vec1,float* vec2)
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