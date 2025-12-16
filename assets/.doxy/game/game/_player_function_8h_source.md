

# File PlayerFunction.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerFunction.h**](_player_function_8h.md)

[Go to the documentation of this file](_player_function_8h.md)


```C++
#pragma once

#include <math/seadVector.h>

class PlayerActor;

namespace rp
{

PlayerActor*          getPlayerActor();
const sead::Vector3f& getPlayerPos();

} // namespace rp
```


