

# File SceneObjFactory.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Scene**](dir_a8ada7f8547aa5994da02842854d3340.md) **>** [**SceneObjFactory.h**](_scene_obj_factory_8h.md)

[Go to the documentation of this file](_scene_obj_factory_8h.md)


```C++
#pragma once

#include <Scene/alSceneObjHolder.h>

namespace SceneObjFactory
{

al::SceneObjHolder* createSceneObjHolder();

} // namespace SceneObjFactory

enum SceneObjType
{
        SceneObjType_CameraShaker          = 1,
        SceneObjType_SwitchAreaDirector    = 3,
        SceneObjType_AudioDirector         = 4, // not sure
        SceneObjType_CoinRotater           = 7,
        SceneObjType_CoinCollectInfoKeeper = 9, // not sure
        SceneObjType_ItemHolder            = 10,
        SceneObjType_GhostPlayerRecorder   = 20
};
```


