#include "math.h"

int multiplica(int a,int b){
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