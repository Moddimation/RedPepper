

# File CameraAnim.h

[**File List**](files.md) **>** [**Camera**](dir_cbf06cccaacd14b149f2d9470efda932.md) **>** [**CameraAnim.h**](_camera_anim_8h.md)

[Go to the documentation of this file](_camera_anim_8h.md)


```C++
#pragma once

#include <Camera/alCamera.h>

class CameraAnim : public al::Camera
{
private:
        int _4C;
        int _50;
        int _54;
        int _58;

public:
        virtual void load( const al::ByamlIter* ticket );
        virtual void calc();

public:
        CameraAnim( const char* name );
};
```


