

# File DemoScene.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Scene**](dir_a8ada7f8547aa5994da02842854d3340.md) **>** [**DemoScene.h**](_demo_scene_8h.md)

[Go to the documentation of this file](_demo_scene_8h.md)


```C++
#pragma once

#include <Scene/alScene.h>

class PlayerActor;
class ProductStageStartParam;

class DemoScene : public al::Scene
{
private:
        ProductStageStartParam* mStageStartParam;
        PlayerActor*            mPlayerActor;
        int                     _3C;
        int                     _40;
        int                     _44;

public:
        virtual ~DemoScene();
        virtual void appear();
        virtual void kill();
        virtual void init();
        virtual void control();

public:
        DemoScene( ProductStageStartParam* stageStartParam );
};
```


