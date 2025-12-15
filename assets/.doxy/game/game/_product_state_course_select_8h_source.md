

# File ProductStateCourseSelect.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Sequence**](dir_05d1ac0873095376e1506e0ab9e4748f.md) **>** [**ProductStateCourseSelect.h**](_product_state_course_select_8h.md)

[Go to the documentation of this file](_product_state_course_select_8h.md)


```C++
#pragma once

#include <Nerve/alHostStateBase.h>

#include "Sequence/ProductSequence.h"

namespace al
{
class LayoutInitInfo;
}

class ProductStateTitle : public al::HostStateBase<ProductSequence>
{
private:
        int                     _10;
        ProductStageStartParam* mStartParam;
        void*                   _18;
        void*                   _1C;
        void*                   _20;
        void*                   _24;
        void*                   _28;
        void*                   _2C;
        void*                   _30;
        void*                   _34;
        void*                   _38;
        void*                   _3C;

public:
        void set_10( int v )
        {
                _10 = v;
        }

public:
        ProductStateTitle( ProductSequence* host, ProductStageStartParam* startParam, const al::LayoutInitInfo& info );
};
```


