#pragma once

#include "Sequence/ProductStageStartParam.h"
#include <Scene/Scene.h>

class CourseSelectScene : public al::Scene {
#ifndef __CC_ARM
public:
#endif
    ProductStageStartParam* mStageStartParam;
    u8 unk[0x34];

public:
    CourseSelectScene(ProductStageStartParam* stageStartParam);
};
