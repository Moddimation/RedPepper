

# File GhostPlayerRecorder.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**GhostPlayerRecorder.cpp**](_ghost_player_recorder_8cpp.md)

[Go to the documentation of this file](_ghost_player_recorder_8cpp.md)


```C++
#include "Player/GhostPlayerRecorder.h"

GhostPlayerRecorder::GhostPlayerRecorder()
    : mFrames( nullptr ), mGhostPlayer( nullptr ), mNumFrames( 0 ), mCurrentFrame( 0 ), _14( 0 ), _18( 0 ),
      _1C( true ), _1D( true )
{
}

void GhostPlayerRecorder::create( int numFrames )
{
        if ( mFrames )
                delete[] mFrames;
        mFrames       = new Frame[ numFrames ];
        mCurrentFrame = 0;
        _1C           = 1;
        mNumFrames    = numFrames;
}

#ifdef NON_MATCHING
void GhostPlayerRecorder::initSceneObj()
{
}
#endif
```


