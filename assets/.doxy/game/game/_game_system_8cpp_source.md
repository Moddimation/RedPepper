

# File GameSystem.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**System**](dir_c4e25bc9fc705584e5c854c33b9560d4.md) **>** [**GameSystem.cpp**](_game_system_8cpp.md)

[Go to the documentation of this file](_game_system_8cpp.md)


```C++
#include "System/GameSystem.h"

#include <System/Application.h>
#include <System/ApplicationFunction.h>
#include <heap/seadHeapMgr.h>
#include <nn/cfg/CTR/cfg_Api.h>
#include <nn/ndm/ndm_Api.h>
#include <nn/fs/CTR/MPCore/detail/fs_UserFileSystem.h>

GameSystem::GameSystem()
    : NerveExecutor( "ゲームシステム" ), mCurrentSequence( nullptr ), _C( nullptr ), _10( nullptr ),
      mLayoutKit( nullptr ), _18( nullptr ), mMessageSystem( nullptr ), _20( nullptr ), _24( nullptr ),
      mCourseList( nullptr ), _2C( nullptr ), _30( nullptr ), _34( nullptr )
{
}

extern "C" void nnMain()
{
        nn::ndm::SuspendScheduler( true );
        nn::cfg::CTR::Initialize();
        nn::fs::ForceDisableLatencyEmulation();
        ApplicationFunction::initialize();
        Application::createInstance(
                sead::HeapMgr::getRootHeapNum() != 0 ? sead::HeapMgr::getRootHeap( 0 ) : nullptr );
        Application::instance()->init();
        Application::instance()->run();
}
```


