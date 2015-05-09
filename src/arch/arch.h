//If intel x64
#ifdef __amd64__
extern "C" {
  #include "x64/math.h"
  #include "x64/types.h"
}
#endif