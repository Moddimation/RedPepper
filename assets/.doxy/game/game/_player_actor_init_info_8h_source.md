

# File PlayerActorInitInfo.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerActorInitInfo.h**](_player_actor_init_info_8h.md)

[Go to the documentation of this file](_player_actor_init_info_8h.md)


```C++
#pragma once

struct PlayerModelInfo
{
        const char** modelArcs;

        const char* getModelArchive( int index ) const
        {
                return modelArcs[ index ];
        }
};

struct PlayerAnimInfo
{
        const char** animArcs;

        const char* getAnimArchive( int index ) const
        {
                return animArcs[ index ];
        }
};

class PlayerActorInitInfo
{
        const PlayerModelInfo* mModelInfo;
        const PlayerAnimInfo*  mAnimInfo;
        void*                  _8;

public:
        PlayerActorInitInfo();
};
```


