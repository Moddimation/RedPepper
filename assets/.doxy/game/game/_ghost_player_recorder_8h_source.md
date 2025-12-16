

# File GhostPlayerRecorder.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**GhostPlayerRecorder.h**](_ghost_player_recorder_8h.md)

[Go to the documentation of this file](_ghost_player_recorder_8h.md)


```C++
#pragma once

#include <Scene/alISceneObj.h>
#include <math/seadVector.h>

class GhostPlayer;

class GhostPlayerRecorder : public al::ISceneObj
{
        friend class GhostPlayer;

private:
        struct Frame
        {
                sead::Vector3f mTrans;
                sead::Vector3f mRotate;
                int            _18;
                const char*    mActionName;
                int            _20;
        };

        Frame*       mFrames;
        GhostPlayer* mGhostPlayer;
        int          mNumFrames;
        int          mCurrentFrame;
        int          _14;
        int          _18;
        bool         _1C;
        bool         _1D;

public:
        void create( int numFrames );

        virtual const char* getSceneObjName() const
        {
                return "ゴーストプレイヤー記録";
        }

        virtual void initSceneObj();

        void initGhostPlayer( GhostPlayer* player )
        {
                mGhostPlayer = player;
        }

public:
        GhostPlayerRecorder();
};
```


