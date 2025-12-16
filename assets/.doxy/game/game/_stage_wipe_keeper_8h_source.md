

# File StageWipeKeeper.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Sequence**](dir_05d1ac0873095376e1506e0ab9e4748f.md) **>** [**StageWipeKeeper.h**](_stage_wipe_keeper_8h.md)

[Go to the documentation of this file](_stage_wipe_keeper_8h.md)


```C++
#pragma once

namespace al
{
class LayoutInitInfo;
class WipeSimpleTopBottom;
} // namespace al

class StageWipeKeeper
{
private:
        al::WipeSimpleTopBottom* mWipes[ 7 ];
        void*                    unk;

public:
        bool isAnyWipeCloseEnd() const;

public:
        StageWipeKeeper( const al::LayoutInitInfo& info );
};
```


