

# File seadCriticalSection.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**thread**](dir_7decd9aa268b6db69560826d30024d61.md) **>** [**seadCriticalSection.h**](sead_critical_section_8h.md)

[Go to the documentation of this file](sead_critical_section_8h.md)


```C++
#ifndef SEAD_CRITICAL_SECTION_H_
#define SEAD_CRITICAL_SECTION_H_

#include <basis/seadTypes.h>
#include <heap/seadDisposer.h>

namespace sead {
class Heap;

class CriticalSection : public IDisposer {
public:
    CriticalSection();
    explicit CriticalSection(Heap* disposer_heap);
    CriticalSection(Heap* disposer_heap, HeapNullOption heap_null_option);
    virtual ~CriticalSection();

    void lock();
    bool tryLock();
    void unlock();

    // For compatibility with the standard Lockable concept.
    bool try_lock() { return tryLock(); }

    // mutex
};

}  // namespace sead

#endif  // SEAD_CRITICAL_SECTION_H_
```


