

# File CameraFollow.h

[**File List**](files.md) **>** [**Camera**](dir_cbf06cccaacd14b149f2d9470efda932.md) **>** [**CameraFollow.h**](_camera_follow_8h.md)

[Go to the documentation of this file](_camera_follow_8h.md)


```C++
#pragma once

#include <Camera/alCamera.h>

class CameraFollow : public al::Camera
{
private:
        void* _4C;
        float _50;
        float _54;
        float _58;
        float _5C;
        float _60;
        float _64;
        float _68;
        float _6C;
        float _70;
        float _74;
        float _78;

public:
        virtual void load( const al::ByamlIter* ticket );
        virtual void calc();

public:
        CameraFollow( const char* name );
};
```


