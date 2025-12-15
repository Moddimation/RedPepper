

# File seadPtrArray.cpp

[**File List**](files.md) **>** [**container**](dir_fe080b7ac8d95dfbf3c6a5deb178b135.md) **>** [**seadPtrArray.cpp**](seadPtrArray_8cpp.md)

[Go to the documentation of this file](seadPtrArray_8cpp.md)


```C++
#include <container/seadPtrArray.h>

namespace sead {

// weird
void PtrArrayImpl::setBuffer(s32 ptrNumMax, void* buf) {
    if (ptrNumMax <= 0) {
        SEAD_ASSERT_MSG(false, "ptrNumMax[%d] must be larger than zero", ptrNumMax);
        return;
    }

    if (buf == NULL) {
        SEAD_ASSERT_MSG(false, "buf is null");
        return;
    }

    mPtrs = static_cast<void**>(buf);
    mPtrNumMax = 0;
    mPtrNum = ptrNumMax;
}

#ifdef NON_MATCHING

// ip garbage
void PtrArrayImpl::erase(s32 pos, s32 count) {
    if (pos < 0) {
        SEAD_ASSERT_MSG(false, "illegal position[%d]", pos);
        return;
    }

    if (count < 0) {
        SEAD_ASSERT_MSG(false, "illegal number[%d]", count);
        return;
    }

    const s32 endPos = pos + count;
    if (endPos > mPtrNumMax) {
        SEAD_ASSERT_MSG(false, "pos[%d] + num[%d] exceed size[%d]", pos, count, mPtrNumMax);
        return;
    }

    if (mPtrNumMax > endPos)
        MemUtil::copyOverlap(mPtrs + pos, mPtrs + endPos, sizeof(void*) * (mPtrNumMax - endPos));

    mPtrNumMax -= count;
}
#endif
}  // namespace sead
```


