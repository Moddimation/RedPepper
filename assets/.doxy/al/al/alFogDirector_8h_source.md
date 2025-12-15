

# File alFogDirector.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Fog**](dir_bb27280ecfe45fece781170846b99fb2.md) **>** [**alFogDirector.h**](alFogDirector_8h.md)

[Go to the documentation of this file](alFogDirector_8h.md)


```C++
#pragma once

#include <Execute/alExecuteDirector.h>
#include <Yaml/alByamlIter.h>

namespace al
{

class FogDirector : public IUseExecutor
{
public:
        u8*       _4[ 0x78 ];
        ByamlIter _7C;

public:
        void endInit();

public:
        virtual void execute();
};

} // namespace al
```


