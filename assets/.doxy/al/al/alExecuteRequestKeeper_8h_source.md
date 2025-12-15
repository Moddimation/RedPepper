

# File alExecuteRequestKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Execute**](dir_7792e00636cd04400185f9ae07410562.md) **>** [**alExecuteRequestKeeper.h**](alExecuteRequestKeeper_8h.md)

[Go to the documentation of this file](alExecuteRequestKeeper_8h.md)


```C++
#pragma once

#include <stddef.h>

namespace al
{

class LiveActor;

class ExecuteRequestKeeper
{
private:
        u8 _0[ 0x10 ];

public:
        void request( LiveActor*, int );

public:
        ExecuteRequestKeeper( size_t );
};

} // namespace al
```


