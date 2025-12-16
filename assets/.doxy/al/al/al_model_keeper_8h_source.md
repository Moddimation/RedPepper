

# File alModelKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Model**](dir_27545de96667afe6b4a4c19cce4980cd.md) **>** [**alModelKeeper.h**](al_model_keeper_8h.md)

[Go to the documentation of this file](al_model_keeper_8h.md)


```C++
#pragma once

#include <math/seadMatrix.h>

class alModelCtr;

namespace al
{

class ModelKeeper
{
private:
        alModelCtr* mModel;

public:
        alModelCtr* getModel() const
        {
                return mModel;
        }

        void hide();
};

const sead::Matrix34f* getJointMtxPtr( ModelKeeper* keeper, const char* jointName );

} // namespace al
```


