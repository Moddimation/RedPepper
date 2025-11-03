#pragma once

#include <Yaml/ByamlIter.h>

namespace al
{

class CameraRotatorParam
{
        float mAngleMax;

public:
        CameraRotatorParam();

        void init( const ByamlIter* ticket );
};

} // namespace al
