

# File math\_VEC3.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**math**](dir_96a1579ba16decd843eb9cd0d5a3d337.md) **>** [**math\_VEC3.h**](math___v_e_c3_8h.md)

[Go to the documentation of this file](math___v_e_c3_8h.md)


```C++
#pragma once

namespace nn {
namespace math {

    struct VEC3 {
        float x;
        float y;
        float z;
    };

    namespace ARMv6 {

        void VEC3AddAsm(VEC3* out, const VEC3* v1, const VEC3* v2);
        void VEC3SubAsm(VEC3* out, const VEC3* v1, const VEC3* v2);
        void VEC3MulAsm(VEC3* out, const VEC3* v1, const VEC3* v2);
        void VEC3DivAsm(VEC3* out, const VEC3* v1, const VEC3* v2);

        void VEC3AddAsm(VEC3* out, const VEC3* v1, float f);
        void VEC3SubAsm(VEC3* out, const VEC3* v1, float f);
        void VEC3MulAsm(VEC3* out, const VEC3* v1, float f);
        void VEC3DivAsm(VEC3* out, const VEC3* v1, float f);

    } // namespace ARMv6

} // namespace math
} // namespace nn
```


