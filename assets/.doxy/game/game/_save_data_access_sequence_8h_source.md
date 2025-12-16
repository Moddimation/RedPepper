

# File SaveDataAccessSequence.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**System**](dir_c0426a53c0d1b4dc4e9c5ae921c9f2ce.md) **>** [**SaveDataAccessSequence.h**](_save_data_access_sequence_8h.md)

[Go to the documentation of this file](_save_data_access_sequence_8h.md)


```C++
#pragma once

#include <Nerve/alNerveExecutor.h>

namespace al
{
class LayoutInitInfo;
}
class GameDataHolder;

class SaveDataAccessSequence : public al::NerveExecutor
{
private:
        // ...
public:
        SaveDataAccessSequence( GameDataHolder* holder, const al::LayoutInitInfo& info );
};
```


