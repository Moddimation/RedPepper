

# File seadHeapMgr.cpp

[**File List**](files.md) **>** [**heap**](dir_5f907ad46a0faf8cb3547d052f9174c5.md) **>** [**seadHeapMgr.cpp**](seadHeapMgr_8cpp.md)

[Go to the documentation of this file](seadHeapMgr_8cpp.md)


```C++
#include <heap/seadHeapMgr.h>

namespace sead {

HeapMgr HeapMgr::sInstance;
HeapMgr::RootHeaps HeapMgr::sRootHeaps;

#pragma no_inline

HeapMgr::HeapMgr() : unk(nullptr), mAllocFailedCallback(nullptr), unk1(0) {}

}  // namespace sead
```


