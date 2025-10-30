#pragma once

#include <sead/prim/seadSafeString.h>
#include "al/Audio/AudioKeeper.h"

namespace al {

void startSe(IUseAudioKeeper* p, const sead::SafeString& name);
bool tryStartSe(IUseAudioKeeper* p, const sead::SafeString& name, int /* ? */);

}  // namespace al
