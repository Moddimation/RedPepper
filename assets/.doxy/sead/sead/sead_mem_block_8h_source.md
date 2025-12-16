

# File seadMemBlock.h

[**File List**](files.md) **>** [**heap**](dir_778a3e0db70a4aafcf2800db5bd87e35.md) **>** [**seadMemBlock.h**](sead_mem_block_8h.md)

[Go to the documentation of this file](sead_mem_block_8h.md)


```C++
#pragma once

#include <basis/seadTypes.h>
#include <container/seadListImpl.h>
#include <container/seadOffsetList.h>

namespace sead {
class MemBlock {
public:
    static MemBlock* FindManageArea(void* ptr);

    static u32 getOffset() { return offsetof(MemBlock, mListNode); }

protected:
    ListNode mListNode;
    u16 mHeapCheckTag;
    u16 mOffset;
    size_t mSize;
};

typedef OffsetList<MemBlock> MemBlockList;
}  // namespace sead
```


