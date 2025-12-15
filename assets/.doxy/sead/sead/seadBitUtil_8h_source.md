

# File seadBitUtil.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadBitUtil.h**](seadBitUtil_8h.md)

[Go to the documentation of this file](seadBitUtil_8h.md)


```C++
#pragma once

#include <string.h>
#include <basis/seadTypes.h>

namespace sead {
// This does not actually seem to exist in Nintendo's sead, but for convenience reasons and to
// easily avoid UB let's pretend this exists.
namespace BitUtil {
inline void* addOffset(const void* ptr, intptr_t offset) {
    return reinterpret_cast<void*>(uintptr_t(ptr) + offset);
}

// Convenience function to avoid UB.
// Nintendo appears to perform type punning, but we care about UB.
template <typename To, typename From>
inline To bitCast(From value) {
    static_assert(sizeof(To) == sizeof(From), "To and From must have the same size");

    To result;
    memcpy(&result, &value, sizeof(value));
    return result;
}

// Convenience function to avoid UB.
// Nintendo appears to perform type punning, but we care about UB.
template <typename To>
inline To bitCastPtr(const void* value, intptr_t offset = 0) {
    To result;
    memcpy(&result, addOffset(value, offset), sizeof(To));
    return result;
}

// Convenience function to avoid UB.
// Nintendo appears to perform type punning, but we care about UB.
template <typename To, typename From>
inline void bitCastWrite(const From& value, To* ptr) {
    static_assert(sizeof(To) == sizeof(From), "To and From must have the same size");
    memcpy(ptr, &value, sizeof(To));
}
}  // namespace BitUtil
}  // namespace sead
```


