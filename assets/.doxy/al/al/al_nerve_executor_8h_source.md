

# File alNerveExecutor.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Nerve**](dir_ce5a5d5b959d6ee5ba2a9f5882112a88.md) **>** [**alNerveExecutor.h**](al_nerve_executor_8h.md)

[Go to the documentation of this file](al_nerve_executor_8h.md)


```C++
#pragma once

#include <Nerve/alNerveKeeper.h>

namespace al
{
class NerveKeeper;

class NerveExecutor : public IUseNerve
{
private:
        al::NerveKeeper* mNerveKeeper;

public:
        void initNerve( const Nerve*, int step = 0 );
        void updateNerve();

public:
        virtual NerveKeeper* getNerveKeeper() const;
        virtual ~NerveExecutor() {};

public:
        NerveExecutor( const char* name );
};

} // namespace al
```


