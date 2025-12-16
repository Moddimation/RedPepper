

# File ProductStateTitle.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Sequence**](dir_05d1ac0873095376e1506e0ab9e4748f.md) **>** [**ProductStateTitle.h**](_product_state_title_8h.md)

[Go to the documentation of this file](_product_state_title_8h.md)


```C++
#pragma once

#include <Nerve/alHostStateBase.h>

#include "Sequence/ProductSequence.h"

namespace al
{
class LayoutInitInfo;
}
class WindowConfirmButton;
class WindowConfirmSingle;
class ProductStageStartParam;

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
```


