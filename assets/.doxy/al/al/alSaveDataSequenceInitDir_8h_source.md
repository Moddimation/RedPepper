

# File alSaveDataSequenceInitDir.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Save**](dir_9c0b9212029f9de285fe876698dcd71c.md) **>** [**alSaveDataSequenceInitDir.h**](alSaveDataSequenceInitDir_8h.md)

[Go to the documentation of this file](alSaveDataSequenceInitDir_8h.md)


```C++
#pragma once

#include <Save/alSaveDataSequenceBase.h>

namespace al
{

class SaveDataSequenceInitDir : public SaveDataSequenceBase
{
public:
        SaveDataSequenceInitDir();

        virtual void threadFunc( const char* );
};

} // namespace al
```


