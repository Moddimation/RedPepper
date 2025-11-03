#pragma once

#include <Yaml/ByamlIter.h>

namespace al
{

class CameraDashAngleTunerParam
{
        float mAddAngleMax;
        float mZoomOutOffsetMax;

public:
        CameraDashAngleTunerParam();

        void init( const ByamlIter* ticket );
};

} // namespace al
