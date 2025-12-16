

# File alMtxUtil.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Math**](dir_d00fce1ad8db29fca8c1f1e62d993844.md) **>** [**alMtxUtil.h**](al_mtx_util_8h.md)

[Go to the documentation of this file](al_mtx_util_8h.md)


```C++
#pragma once

#include <math/seadMatrix.h>
#include <math/seadVector.h>

namespace al
{

void preScaleMtx( sead::Matrix34f* out, const sead::Vector3f& );
void calcMtxLocalTrans( sead::Vector3f* out, const sead::Matrix34f& mtx, const sead::Vector3f& trans );

} // namespace al
```


