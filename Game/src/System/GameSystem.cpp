#include "System/GameSystem.h"
#include <nn/cfg/CTR/cfg_Api.h>
#include <nn/ndm/ndm_Api.h>
#include <sead/heap/seadHeapMgr.h>
#include "System/Application.h"
#include "System/ApplicationFunction.h"
#include "nn/fs/CTR/MPCore/detail/fs_UserFileSystem.h"

GameSystem::GameSystem()
    : NerveExecutor("�Q�[���V�X�e��"), mCurrentSequence(nullptr), _C(nullptr), _10(nullptr),
      mLayoutKit(nullptr), _18(nullptr), mMessageSystem(nullptr), _20(nullptr), _24(nullptr),
      mCourseList(nullptr), _2C(nullptr), _30(nullptr), _34(nullptr) {}

extern "C" void nnMain() {
    nn::ndm::SuspendScheduler(true);
    nn::cfg::CTR::Initialize();
    nn::fs::ForceDisableLatencyEmulation();
    ApplicationFunction::initialize();
    Application::createInstance(
        sead::HeapMgr::getRootHeapNum() != 0 ? sead::HeapMgr::getRootHeap(0) : nullptr);
    Application::instance()->init();
    Application::instance()->run();
}
