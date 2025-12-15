

# File alKeyPose.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**KeyPose**](dir_69ac5a2fe1a36920040982de9aaf0ac3.md) **>** [**alKeyPose.cpp**](alKeyPose_8cpp.md)

[Go to the documentation of this file](alKeyPose_8cpp.md)


```C++
#pragma once

#include <KeyPose/alKeyPose.h>
#include <Placement/alPlacementFunction.h>

namespace al
{

KeyPose::KeyPose()
    : mQuat( sead::Quatf::unit ), mTrans( sead::Vector3f::zero ), mPlacementInfo( nullptr ), _20( 0.0 )
{
}

void KeyPose::init( const PlacementInfo& info )
{
        tryGetQuat( &mQuat, info );
        tryGetTrans( &mTrans, info );
        mPlacementInfo = new PlacementInfo( info );
}

} // namespace al
```


