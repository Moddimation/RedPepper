#pragma once

#include "al/Camera/Camera.h"

class CameraFixPos : public al::Camera {
    float _4C;
    float _50;
    float _54;
    float _58;

public:
    CameraFixPos(const char* name);

    virtual void load(const al::ByamlIter* ticket);
    virtual void calc();
};
