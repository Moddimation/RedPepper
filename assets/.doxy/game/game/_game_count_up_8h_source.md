

# File GameCountUp.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Layout**](dir_2f80a5ab660f553eed8f75571fa5fcce.md) **>** [**GameCountUp.h**](_game_count_up_8h.md)

[Go to the documentation of this file](_game_count_up_8h.md)


```C++
#pragma once

#include <Layout/alLayoutActor.h>

namespace al
{
class LayoutInitInfo;
}

class GameCountUp : public al::LayoutActor
{
private:
        sead::Vector3f _30;
        bool           _3C;

public:
        GameCountUp( const al::LayoutInitInfo& info );
};
```


