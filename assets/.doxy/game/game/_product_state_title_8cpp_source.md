

# File ProductStateTitle.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Sequence**](dir_adde3a84bdb9ef9ce29831a9adedd06e.md) **>** [**ProductStateTitle.cpp**](_product_state_title_8cpp.md)

[Go to the documentation of this file](_product_state_title_8cpp.md)


```C++
#include "Sequence/ProductStateTitle.h"

#include <Nerve/alNerve.h>

#include "Layout/WindowConfirmButton.h"
#include "Layout/WindowConfirmSingle.h"

namespace NrvProductStateTitle
{

NERVE_DEF( ProductStateTitle, Load )

} // namespace NrvProductStateTitle

ProductStateTitle::ProductStateTitle( ProductSequence* host, ProductStageStartParam* startParam, const al::LayoutInitInfo& info )
    : al::HostStateBase<ProductSequence>( host, "製品シーケンスのタイトルステート" ), mStartParam( startParam ),
      _1C( nullptr ), _20( nullptr ), _24( true ), _25( false )
{
        mButton = new WindowConfirmButton( "確認ウインドウ", info );
        mWindow = new WindowConfirmSingle( "確認ウインドウ[ボタン1個]", info );
}

void ProductStateTitle::init()
{
        initNerve( &NrvProductStateTitle::Load );
}
```


