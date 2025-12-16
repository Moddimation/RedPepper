

# File alNerveStateBase.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Nerve**](dir_ce5a5d5b959d6ee5ba2a9f5882112a88.md) **>** [**alNerveStateBase.h**](al_nerve_state_base_8h.md)

[Go to the documentation of this file](al_nerve_state_base_8h.md)


```C++
#pragma once

#include <Nerve/alNerveExecutor.h>

namespace al
{

class NerveStateBase : public NerveExecutor
{
private:
        bool mIsDead;

public:
        inline bool isDead() const
        {
                return mIsDead;
        }

public:
        virtual void init();
        virtual void appear();
        virtual void kill();
        virtual bool update();
        virtual void control();

public:
        NerveStateBase( const char* name );
};

} // namespace al
```


