

# File CameraFixPos.h

[**File List**](files.md) **>** [**Camera**](dir_cbf06cccaacd14b149f2d9470efda932.md) **>** [**CameraFixPos.h**](_camera_fix_pos_8h.md)

[Go to the documentation of this file](_camera_fix_pos_8h.md)


```C++
#pragma once

#include <Camera/alCamera.h>

class CameraFixPos : public al::Camera
{
private:
        float _4C;
        float _50;
        float _54;
        float _58;

public:
        virtual void load( const al::ByamlIter* ticket );
        virtual void calc();

public:
        CameraFixPos( const char* name );
};
```


