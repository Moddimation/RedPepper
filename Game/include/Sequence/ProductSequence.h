#pragma once

#include <Sequence/Sequence.h>

#include "Sequence/ProductStageStartParam.h"
#include "Sequence/ProductStateCourseSelect.h"
#include "Sequence/ProductStateStage.h"
#include "Sequence/StageWipeKeeper.h"

class ProductSequence : public al::Sequence
{
#ifndef __CC_ARM
public:
#else

private:
#endif
        ProductStageStartParam* mStageStartParam;
        void*                   _14C;
        void*                   _150;

        StageWipeKeeper*                mWipeKeeper;
        void*                           _158;
        void*                           _15C;
        class ProductStateTitle*        mStateTitle;
        class ProductStateOpening*      mStateOpening;
        ProductStateTitle*              mStateCourseSelect;
        ProductStateStage*              mStateStage;
        class ProductStateKinopioHouse* mStateKinopioHouse;
        class ProductStateMysteryBox*   mStateMysteryBox;
        class ProductStateEnding*       mStateEnding;
        class ProductStateGameOverRoom* mStateGameOverRoom;
        int                             _180;
        void*                           _184;
        void*                           _188;
        void*                           _18C;
        void*                           _190;

#ifndef __CC_ARM                                // this really shouldn't be in the common headers
        ProductStateTest* mStateTest = nullptr; // fake
#endif

public:
        void exeTitle();
        void exeOpening();
        void exeCourseSelect();
        void exeStage();
        void exeKinopioHouse();
        void exeMysteryBox();
        void exeEnding();
        void exeGameOverRoom();
        void exeUnk1();

public:
        virtual void init();
        virtual void update();
        virtual bool isDisposable() const;

public:
        ProductSequence( const char* name );
};
