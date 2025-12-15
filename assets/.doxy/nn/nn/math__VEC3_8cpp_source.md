

# File math\_VEC3.cpp

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**sources**](dir_a4ee87762c46a7490fc221af34a02561.md) **>** [**math**](dir_d5048eb808a3c734e97f8e3445eed677.md) **>** [**math\_VEC3.cpp**](math__VEC3_8cpp.md)

[Go to the documentation of this file](math__VEC3_8cpp.md)


```C++
#include <nn/math/math_VEC3.h>

namespace nn {
namespace math {
    namespace ARMv6 {

        // clang-format off

    __asm void __attribute__((section("i._ZN2nn4math5ARMv610VEC3SubAsmEPNS0_4VEC3EPKS2_S5_"))) VEC3SubAsm(VEC3* out, const VEC3* v1, const VEC3* v2)
    {
        vldmia r1, {s0, s1, s2}
        vldmia r2, {s3, s4, s5}
        vsub.f32 s6, s0, s3
        vsub.f32 s7, s1, s4
        vsub.f32 s8, s2, s5
        vstmia r0, {s6, s7, s8}
        bx lr
    }

    __asm void __attribute__((section("i._ZN2nn4math5ARMv610VEC3MulAsmEPNS0_4VEC3EPKS2_f"))) VEC3MulAsm(VEC3* out, const VEC3* v1, float f)
    {
        vldmia r1, {s1, s2, s3}
        vmul.f32 s4, s1, s0
        vmul.f32 s5, s2, s0
        vmul.f32 s6, s3, s0
        vstmia r0, {s4, s5, s6}
        bx lr
    }

        // clang-format on

    } // namespace ARMv6
} // namespace math
} // namespace nn
```


