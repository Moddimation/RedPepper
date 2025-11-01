#include <AreaObj/SwitchAreaDirector.h>
#include "Player/PlayerFunction.h" // GAME

namespace al {

SwitchAreaDirector::SwitchAreaDirector()
    : LiveActor("�X�C�b�`�G���A�f�B���N�^�["), mSwitchOnAreaGroup(nullptr),
      mSwitchKeepOnAreaGroup(nullptr) {}

NON_MATCHING

// not using stm for vector copy
void SwitchAreaDirector::movement() {
    sead::Vector3f pos = rp::getPlayerPos();
    if (mSwitchOnAreaGroup)
        mSwitchOnAreaGroup->update(pos);
    if (mSwitchKeepOnAreaGroup)
        mSwitchKeepOnAreaGroup->update(pos);
}

}  // namespace al
