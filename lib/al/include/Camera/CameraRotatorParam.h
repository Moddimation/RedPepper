#pragma once

#include <System/Byaml/ByamlIter.h>

namespace al {

class CameraRotatorParam {
    float mAngleMax;

public:
    CameraRotatorParam();

    void init(const ByamlIter* ticket);
};

}  // namespace al
