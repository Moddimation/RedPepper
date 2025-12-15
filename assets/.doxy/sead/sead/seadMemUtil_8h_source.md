

# File seadMemUtil.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadMemUtil.h**](seadMemUtil_8h.md)

[Go to the documentation of this file](seadMemUtil_8h.md)


```C++
#ifndef SEAD_MEM_UTIL_H_
#define SEAD_MEM_UTIL_H_

#include <basis/seadTypes.h>

namespace sead {
class MemUtil {
public:
    static void* fill(void* ptr, u8 c, size_t size);
    static void* fillZero(void* ptr, size_t size);
    static void* copyOverlap(void* dest, const void* src, size_t size);
    static void* copy(void* dest, const void* src, size_t size);
    static void* copyAlign32(void* dest, const void* src, size_t size);
    static int compare(const void* ptr1, const void* ptr2, size_t size);

    static bool isStack(const void* addr);
    static bool isHeap(const void* addr);

    static bool checkFillType(const void* ptr, size_t size);

    static void dumpMemoryBinary(const void* ptr, u32 size_front, u32 size_back, bool is_align);
};
}  // namespace sead

#define SEAD_PRIM_MEM_UTIL_H_

#ifdef NN_PLATFORM_CTR
#include <prim/ctr/seadMemUtilCtr.hpp>

#elif NN_PLATFORM_CAFE
#include <prim/cafe/seadMemUtilCafe.hpp>

#elif NNSDK
#include <prim/nin/seadMemUtilNin.hpp>

#else
// #error "Unknown platform"
#endif

#undef SEAD_PRIM_MEM_UTIL_H_

#endif  // SEAD_MEM_UTIL_H_
```


