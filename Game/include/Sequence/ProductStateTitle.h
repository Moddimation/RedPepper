#pragma once

#include <Layout/LayoutInitInfo.h>
#include <Nerve/HostStateBase.h>

#include "Layout/WindowConfirmButton.h"
#include "Layout/WindowConfirmSingle.h"
#include "Sequence/ProductStageStartParam.h"
#include "Sequence/ProductStateStage.h"

class ProductStateTitle : public al::HostStateBase<ProductSequence>
{
private:
        ProductStageStartParam* mStartParam;
        WindowConfirmButton*    mButton;
        WindowConfirmSingle*    mWindow;
        void*                   _1C;
        void*                   _20;
        bool                    _24;
        bool                    _25;

public:
        ProductStateTitle( ProductSequence* host, ProductStageStartParam* startParam, const al::LayoutInitInfo& info );

        virtual void init();

        void exeLoad();
};
