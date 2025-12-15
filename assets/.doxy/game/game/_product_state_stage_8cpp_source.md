

# File ProductStateStage.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Sequence**](dir_adde3a84bdb9ef9ce29831a9adedd06e.md) **>** [**ProductStateStage.cpp**](_product_state_stage_8cpp.md)

[Go to the documentation of this file](_product_state_stage_8cpp.md)


```C++
#include "Sequence/ProductStateStage.h"

#include "Sequence/ProductStageStartParam.h"

class KoopaLastStageStartParam : public ProductStageStartParam
{
public:
        virtual const char* getStageDataName()
        {
                return "KoopaLastStage";
        }
};

#ifdef NON_MATCHING
ProductStateStage::ProductStateStage( ProductSequence* parent, ProductStageStartParam* startParam, const al::LayoutInitInfo& info )
    : al::HostStateBase<ProductSequence>( parent, "ステージステート" ), mStageStartParam( startParam ),
      mLastStageStartParam( nullptr ), mStageScene( nullptr ), _1C( nullptr ), _20( nullptr ), _24( nullptr ),
      _28( nullptr ), _2C( nullptr ), _30( nullptr ), _34( nullptr ), _38( nullptr )
{
        mLastStageStartParam = new KoopaLastStageStartParam();
}

/*void ProductStateStage::init() { }
void ProductStateStage::appear() { }*/
#endif
```


