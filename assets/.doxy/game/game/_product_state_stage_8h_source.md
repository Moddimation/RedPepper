

# File ProductStateStage.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Sequence**](dir_05d1ac0873095376e1506e0ab9e4748f.md) **>** [**ProductStateStage.h**](_product_state_stage_8h.md)

[Go to the documentation of this file](_product_state_stage_8h.md)


```C++
#pragma once

#include <Nerve/alHostStateBase.h>

#include "Sequence/ProductSequence.h"

namespace al
{
class LayoutInitInfo;
}
class StageScene;
class ProductSequence;

class ProductStateStage : public al::HostStateBase<ProductSequence>
{
private:
        ProductStageStartParam* mStageStartParam;
        ProductStageStartParam* mLastStageStartParam;
        StageScene*             mStageScene;
        void*                   _1C;
        void*                   _20;
        void*                   _24;
        void*                   _28;
        void*                   _2C;
        void*                   _30;
        void*                   _34;
        void*                   _38;

public:
        // virtual void init();
        // virtual void appear();
public:
        ProductStateStage( ProductSequence* parent, ProductStageStartParam* startParam, const al::LayoutInitInfo& info );
};
```


