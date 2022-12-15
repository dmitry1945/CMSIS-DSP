#ifndef _cmsis_compiler_h_
#define _cmsis_compiler_h_

#include <stdint.h>
#define  __ALIGNED(x) __attribute__((aligned(x)))
#define __STATIC_FORCEINLINE static inline __attribute__((always_inline)) 
#define __STATIC_INLINE static inline

#endif // _cmsis_compiler_h_