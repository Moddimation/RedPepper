

# File seadControllerMgr.h

[**File List**](files.md) **>** [**controller**](dir_cd2d5cfab44c6d4772a878eddd4f7857.md) **>** [**seadControllerMgr.h**](seadControllerMgr_8h.md)

[Go to the documentation of this file](seadControllerMgr_8h.md)


```C++
#pragma once

#include <container/seadOffsetList.h>
#include <container/seadPtrArray.h>
#include <controller/seadController.h>
#include <framework/seadCalculateTask.h>
#include <framework/seadTaskMgr.h>
#include <framework/seadTaskParameter.h>
#include <heap/seadDisposer.h>
#include <prim/seadRuntimeTypeInfo.h>

namespace sead {
class ControlDevice;
class Controller;
class ControllerAddon;

class ControllerMgr : public CalculateTask {
    SEAD_TASK_SINGLETON(ControllerMgr)
    SEAD_RTTI_OVERRIDE(ControllerMgr, CalculateTask)

private:
    class ConstructArg : public TaskConstructArg {
    public:
        ConstructArg() : TaskConstructArg(), mHeapArray() { heap_array = &mHeapArray; }

    private:
        HeapArray mHeapArray;
    };

public:
public:
    ControllerMgr();
    explicit ControllerMgr(const TaskConstructArg& arg);
    virtual ~ControllerMgr();

    virtual void prepare();
    virtual void calc();

    void initialize(s32 controller_max, Heap* heap);
    void finalize();

    void initializeDefault(Heap* heap);
    void finalizeDefault();

    // TODO: Add/remove devices & controllers

    Controller* getControllerByOrder(ControllerDefine::ControllerId id, s32 index) const;
    ControlDevice* getControlDevice(ControllerDefine::DeviceId id) const;
    ControllerAddon* getControllerAddon(s32 index, ControllerDefine::AddonId id) const;
    ControllerAddon* getControllerAddonByOrder(s32 controller_index,
                                               ControllerDefine::AddonId addon_id,
                                               int addon_index) const;

    template <typename T>
    T getControllerByOrderAs(s32 index) const;
    template <typename T>
    T getControlDeviceAs() const;
    template <typename T>
    T getControllerAddonAs(s32 index) const;

    s32 findControllerPort(const Controller* controller) const;

    DelegateThread* getFramework() const;

    Controller* getController(int port) { return mControllers[port]; }

    OffsetList<ControlDevice> mDevices;

    PtrArray<Controller> mControllers;

private:
};

template <typename T>
T ControllerMgr::getControllerAddonAs(s32 index) const {
    Controller* controller = mControllers.at(index);
    if (controller)
        return controller->getAddonAs<T>();

    return nullptr;
}

}  // namespace sead
```


