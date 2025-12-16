

# File seadScopedLock.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadScopedLock.h**](sead_scoped_lock_8h.md)

[Go to the documentation of this file](sead_scoped_lock_8h.md)


```C++
#pragma once

#include <utility>

namespace sead {
template <typename T>
class ScopedLock {
public:
    explicit ScopedLock(T* lock) : mLocked(lock) { mLocked->lock(); }

    ScopedLock(const ScopedLock& other);
    ScopedLock& operator=(const ScopedLock& other);

    virtual ~ScopedLock() {}

protected:
    T* mLocked;
};

template <typename T>
class ConditionalScopedLock {
public:
protected:
};

}  // namespace sead
```


