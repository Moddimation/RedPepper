#pragma once

#include "Layout/WindowConfirmButton.h"
#include "Layout/WindowConfirmSingle.h"
#include "Sequence/ProductStageStartParam.h"
#include "Sequence/ProductStateStage.h"
#include <Layout/LayoutInitInfo.h>
#include <Nerve/HostStateBase.h>

class ProductStateTitle : public al::HostStateBase<ProductSequence> {
    ProductStageStartParam* mStartParam;
    WindowConfirmButton* mButton;
    WindowConfirmSingle* mWindow;
    void* _1C;
    void* _20;
    bool _24;
    bool _25;

public:
    ProductStateTitle(ProductSequence* host, ProductStageStartParam* startParam,
                      const al::LayoutInitInfo& info);

    virtual void init();

    void exeLoad();
};
