

# File alSeFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Se**](dir_0a90e6cc0bfd96b31d75e85ca0470805.md) **>** [**alSeFunction.h**](al_se_function_8h.md)

[Go to the documentation of this file](al_se_function_8h.md)


```C++
#pragma once

#include <prim/seadSafeString.h>

namespace al
{
class IUseAudioKeeper;

void startSe( IUseAudioKeeper* p, const sead::SafeString& name );
bool tryStartSe( IUseAudioKeeper* p, const sead::SafeString& name, int /* ? */ );

} // namespace al
```


