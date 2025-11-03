#pragma once

#include <Audio/AudioKeeper.h>
#include <prim/seadSafeString.h>

namespace al
{

void startSe( IUseAudioKeeper* p, const sead::SafeString& name );
bool tryStartSe( IUseAudioKeeper* p, const sead::SafeString& name, int /* ? */ );

} // namespace al
