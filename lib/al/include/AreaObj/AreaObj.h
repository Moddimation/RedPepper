#pragma once

#include <AreaObj/AreaInitInfo.h>
#include <AreaObj/AreaShape.h>
#include <Stage/StageSwitchKeeper.h>

namespace al {

class AreaObj : public IUseStageSwitch {
    const char* mName;
    AreaShape* mAreaShape;
    StageSwitchKeeper* mStageSwitchKeeper;
    sead::Matrix34f _10;
    void* _40;
    int _44;
    bool _48;

public:
    AreaObj(const char* name);

    virtual StageSwitchKeeper* getStageSwitchKeeper() const;
    virtual void initStageSwitchKeeper();
    virtual void init(const AreaInitInfo& info);
    virtual bool isInVolume(const sead::Vector3f& trans) const;
};

}  // namespace al
