

# File CoinCharger.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**CoinCharger.h**](_coin_charger_8h.md)

[Go to the documentation of this file](_coin_charger_8h.md)


```C++
#pragma once

#include <Nerve/alNerveExecutor.h>

namespace al
{
class AudioKeeper;
class LayoutInitInfo;
} // namespace al
class GameCountUp;

class CoinCharger : public al::NerveExecutor
{
private:
        GameCountUp*     mGameCountUp;
        void*            _C;
        void*            _10;
        al::AudioKeeper* mAudioKeeper;

public:
        CoinCharger( const al::LayoutInitInfo& info );
};
```


