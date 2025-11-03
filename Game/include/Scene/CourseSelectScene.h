#pragma once

#include <Scene/Scene.h>

#include "Sequence/ProductStageStartParam.h"

class CourseSelectScene : public al::Scene
{
#ifndef __CC_ARM
public:
#else

private:
#endif
        ProductStageStartParam* mStageStartParam;
        u8                      unk[ 0x34 ];

public:
        CourseSelectScene( ProductStageStartParam* stageStartParam );
};
