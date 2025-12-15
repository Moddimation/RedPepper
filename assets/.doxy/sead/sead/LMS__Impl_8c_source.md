

# File LMS\_Impl.c

[**File List**](files.md) **>** [**addins**](dir_bd2ac9a3d2735b7139b8654d97389ba0.md) **>** [**libms**](dir_1dee988f62a020defef87bef9fc0dca6.md) **>** [**src**](dir_dfc4bbba1eff969fd6af80bc2d747dc5.md) **>** [**LMS\_Impl.c**](LMS__Impl_8c.md)

[Go to the documentation of this file](LMS__Impl_8c.md)


```C++
#include "LMS/LMS_Impl.h"

LMS_AllocFuncPtr LMSi_sAllocFuncPtr;
LMS_FreeFuncPtr LMSi_sFreeFuncPtr;

void* LMSi_Malloc(u32 size)
{
    return LMSi_sAllocFuncPtr(size);
}

void LMSi_Free(void* ptr)
{
    LMSi_sFreeFuncPtr(ptr);
}

void LMS_SetMemFuncs(LMS_AllocFuncPtr alloc_ptr, LMS_FreeFuncPtr free_ptr)
{
    LMSi_sAllocFuncPtr = alloc_ptr;
    LMSi_sFreeFuncPtr = free_ptr;
}

#ifdef NON_MATCHING
s32 LMSi_SearchBlockByName(LMS_Binary* binary, const char* blockName)
{
    u16 index = 0;
    if (binary->numBlocks > 0) {
        while (index < binary->numBlocks) {
            // nop before beq
            __nop();
            if (LMSi_MemCmp(binary->blocks[index].type, blockName, 4))
                return index;
            index++; // binary->numBlocks gets loaded before this
        }
    }
    return -1;
}
#endif
```


