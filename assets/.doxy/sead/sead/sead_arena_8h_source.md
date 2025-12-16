

# File seadArena.h

[**File List**](files.md) **>** [**heap**](dir_778a3e0db70a4aafcf2800db5bd87e35.md) **>** [**seadArena.h**](sead_arena_8h.md)

[Go to the documentation of this file](sead_arena_8h.md)


```C++
#ifndef SEAD_ARENA_H_
#define SEAD_ARENA_H_

#include <basis/seadTypes.h>

namespace sead {
class Arena {
public:
    Arena();
    ~Arena();

    u8* initialize(size_t size);

    u8* mStart;
    size_t mSize;
    bool mInitWithStartAddress;
};

}  // namespace sead

#endif  // SEAD_ARENA_H_
```


