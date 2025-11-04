#pragma once

#include <LiveActor/LiveActor.h>
#include <Scene/ISceneObj.h>

namespace al
{
class SwitchKeepOnAreaGroup;
class SwitchOnAreaGroup;

class SwitchAreaDirector : public LiveActor, public ISceneObj
{
private:
        SwitchOnAreaGroup*     mSwitchOnAreaGroup;
        SwitchKeepOnAreaGroup* mSwitchKeepOnAreaGroup;

public:
        virtual void movement();
        virtual void unk1();
public:
        SwitchAreaDirector();
};

} // namespace al
