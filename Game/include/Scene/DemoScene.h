#pragma once

#include <Scene/Scene.h>

#include "Player/PlayerActor.h"
#include "Sequence/ProductStageStartParam.h"

class DemoScene : public al::Scene
{
private:
        ProductStageStartParam* mStageStartParam;
        PlayerActor*            mPlayerActor;
        int                     _3C;
        int                     _40;
        int                     _44;

public:
        virtual ~DemoScene();
        virtual void appear();
        virtual void kill();
        virtual void init();
        virtual void control();

public:
        DemoScene( ProductStageStartParam* stageStartParam );
};
