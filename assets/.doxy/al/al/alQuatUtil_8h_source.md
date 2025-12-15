

# File alQuatUtil.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Math**](dir_d00fce1ad8db29fca8c1f1e62d993844.md) **>** [**alQuatUtil.h**](alQuatUtil_8h.md)

[Go to the documentation of this file](alQuatUtil_8h.md)


```C++
#pragma once

#include <math/seadQuat.h>

namespace al
{

void rotateQuatXDirDegree( sead::Quatf* out, const sead::Quatf& from, float degrees );
void rotateQuatYDirDegree( sead::Quatf* out, const sead::Quatf& from, float degrees );
void rotateQuatZDirDegree( sead::Quatf* out, const sead::Quatf& from, float degrees );

void calcQuatSide( sead::Vector3f* out, const sead::Quatf& from );

} // namespace al
```


