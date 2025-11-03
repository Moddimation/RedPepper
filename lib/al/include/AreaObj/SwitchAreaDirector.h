#pragma once

#include <AreaObj/SwitchKeepOnAreaGroup.h>
#include <AreaObj/SwitchOnAreaGroup.h>
#include <LiveActor/LiveActor.h>
#include <Scene/ISceneObj.h>

namespace al
{

class SwitchAreaDirector : public LiveActor, public ISceneObj
{
        SwitchOnAreaGroup*     mSwitchOnAreaGroup;
        SwitchKeepOnAreaGroup* mSwitchKeepOnAreaGroup;

public:
        SwitchAreaDirector();

        virtual void movement();
        virtual void unk1();
};

} // namespace al
