#pragma once

#include "al/Camera/Camera.h"

class CameraAnim : public al::Camera {
    int _4C;
    int _50;
    int _54;
    int _58;

public:
    CameraAnim(const char* name);

    virtual void load(const al::ByamlIter* ticket);
    virtual void calc();
};
