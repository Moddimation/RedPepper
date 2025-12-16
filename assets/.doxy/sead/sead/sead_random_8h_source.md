

# File seadRandom.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**random**](dir_aca00b2b66bba231d7d2f92006188148.md) **>** [**seadRandom.h**](sead_random_8h.md)

[Go to the documentation of this file](sead_random_8h.md)


```C++
#pragma once

#include <basis/seadRawPrint.h>
#include <basis/seadTypes.h>
#include <prim/seadBitUtil.h>

namespace sead {
class Random {
public:
    Random() { init(); }

    Random(u32 seed) { init(seed); }

    Random(u32 seed_x, u32 seed_y, u32 seed_z, u32 seed_w) { init(seed_x, seed_y, seed_z, seed_w); }

    void init();
    void init(u32 seed);
    void init(u32 seed_x, u32 seed_y, u32 seed_z, u32 seed_w);

    u32 getU32();
    u64 getU64();
    u32 getU32(u32 max);
    s32 getS32Range(s32 a, s32 b);
    s64 getS64Range(s64 a, s64 b);
    f32 getF32();
    f32 getF32Range(f32 a, f32 b);
    f64 getF64();
    f64 getF64Range(f64 a, f64 b);
    bool getBool();

    void getContext(u32* x, u32* y, u32* z, u32* w) const;

private:
    u32 mX;
    u32 mY;
    u32 mZ;
    u32 mW;
};

inline u32 Random::getU32(u32 max) {
    return getU32() * u64(max) >> 32u;
}

inline s32 Random::getS32Range(s32 a, s32 b) {
    SEAD_ASSERT_MSG(a <= b, "b[%d] >= a[%d]", a, b);
    return getU32(b - a) + static_cast<u32>(a);
}

// UNCHECKED
inline s64 Random::getS64Range(s64 a, s64 b) {
    SEAD_ASSERT_MSG(a <= b, "b[%ld] >= a[%ld]", a, b);
    return (getU32() * u64(b - a) >> 32u) + a;
}

inline f32 Random::getF32() {
    return BitUtil::bitCast<f32>((getU32() >> 9u) | 0x3F800000u) - 1.0f;
}

inline f32 Random::getF32Range(f32 a, f32 b) {
    SEAD_ASSERT_MSG(a <= b, "b[%f] >= a[%f]", a, b);
    return a + (b - a) * getF32();
}

}  // namespace sead
```


