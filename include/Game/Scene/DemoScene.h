#pragma once

#include "Game/Player/PlayerActor.h"
#include "Game/Sequence/ProductStageStartParam.h"
#include "al/Scene/Scene.h"

class DemoScene : public al::Scene {
    ProductStageStartParam* mStageStartParam;
    PlayerActor* mPlayerActor;
    int _3C;
    int _40;
    int _44;

public:
    DemoScene(ProductStageStartParam* stageStartParam);

    virtual ~DemoScene();
    virtual void appear();
    virtual void kill();
    virtual void init();
    virtual void control();
};
