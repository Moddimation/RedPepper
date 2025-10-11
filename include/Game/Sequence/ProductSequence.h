#pragma once

#include "Game/Sequence/ProductStageStartParam.h"
#include "Game/Sequence/ProductStateCourseSelect.h"
#include "Game/Sequence/ProductStateStage.h"
#include "Game/Sequence/StageWipeKeeper.h"
#include "al/Sequence/Sequence.h"

#ifndef __CC_ARM
#include "mg/Scene/ProductStateTest.h"
#endif

class ProductSequence : public al::Sequence {
#ifndef __CC_ARM
public:
#endif
    ProductStageStartParam* mStageStartParam;
    void* _14C;
    void* _150;

    StageWipeKeeper* mWipeKeeper;
    void* _158;
    void* _15C;
    class ProductStateTitle* mStateTitle;
    class ProductStateOpening* mStateOpening;
    ProductStateTitle* mStateCourseSelect;
    ProductStateStage* mStateStage;
    class ProductStateKinopioHouse* mStateKinopioHouse;
    class ProductStateMysteryBox* mStateMysteryBox;
    class ProductStateEnding* mStateEnding;
    class ProductStateGameOverRoom* mStateGameOverRoom;
    int _180;
    void* _184;
    void* _188;
    void* _18C;
    void* _190;

#ifndef __CC_ARM // this really shouldn't be in the common headers
    ProductStateTest* mStateTest = nullptr; // fake
#endif

public:
    ProductSequence(const char* name);

    virtual void init();
    virtual void update();
    virtual bool isDisposable() const;

    void exeTitle();
    void exeOpening();
    void exeCourseSelect();
    void exeStage();
    void exeKinopioHouse();
    void exeMysteryBox();
    void exeEnding();
    void exeGameOverRoom();
    void exeUnk1();

    void exeTest();
};
