

# File alInitializeThread.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**System**](dir_4449175cd25a8cf3d071dc7b0d3fd582.md) **>** [**alInitializeThread.h**](al_initialize_thread_8h.md)

[Go to the documentation of this file](al_initialize_thread_8h.md)


```C++
#pragma once

#include <heap/seadHeap.h>

namespace al
{
class FunctorBase;

void createAndStartInitializeThread( sead::Heap* heap, int stackSize, const FunctorBase& func );

} // namespace al
```


