

# File StageScene.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Scene**](dir_a8ada7f8547aa5994da02842854d3340.md) **>** [**StageScene.h**](_stage_scene_8h.md)

[Go to the documentation of this file](_stage_scene_8h.md)


```C++
#pragma once

#include <Scene/alScene.h>

class PlayerActor;
class ProductStageStartParam;
class StageSceneStateGameOver;

class StageScene : public al::Scene
{
private:
        ProductStageStartParam*        mStageStartParam;
        PlayerActor*                   mPlayerActor;
        void*                          _3C;
        void*                          _40;
        void*                          _44;
        void*                          _48;
        void*                          _4C;
        void*                          _50;
        void*                          _54;
        void*                          _58;
        void*                          _5C;
        class StageSceneStateGameOver* mStateGameOver;
        void*                          _64;
        void*                          _68;
        void*                          _6C;
        void*                          _70;
        void*                          _74;
        void*                          _78;
        void*                          _7C;
        void*                          _80;
        void*                          _84;
        void*                          _88;
        void*                          _8C;
        void*                          _90;
        void*                          _94;
        void*                          _98;

public:
        virtual void appear();
        virtual void control();

public:
        StageScene( ProductStageStartParam* stageStartParam );
};
```


