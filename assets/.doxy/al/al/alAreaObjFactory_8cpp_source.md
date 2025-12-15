

# File alAreaObjFactory.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Factory**](dir_39b5099aa57315b839bd41800a0f814b.md) **>** [**alAreaObjFactory.cpp**](alAreaObjFactory_8cpp.md)

[Go to the documentation of this file](alAreaObjFactory_8cpp.md)


```C++
#include <Factory/alAreaObjFactory.h>

namespace al
{

template <typename T>
AreaObj* createAreaObjFunction( const char* name )
{
        return new T( name );
}

const NameToAreaObjCreator split( sAreaObjFactoryEntries )[] = {
        { "AudioEffectChangeArea", createAreaObjFunction<AreaObj> },
        { "AudioVolumeSettingArea", nullptr },
        { "BgmChangeArea", createAreaObjFunction<AreaObj> },
        { "CameraArea", nullptr },
        { "CameraOriginArea", createAreaObjFunction<AreaObj> },
        { "CameraWaveArea", createAreaObjFunction<AreaObj> },
        { "ChangeCoverArea", nullptr },
        { "DeathArea", createAreaObjFunction<AreaObj> },
        { "EnablePropellerFallCameraArea", createAreaObjFunction<AreaObj> },
        { "FogArea", createAreaObjFunction<AreaObj> },
        { "FogAreaCameraPos", createAreaObjFunction<AreaObj> },
        { "FootPrintFollowPosArea", createAreaObjFunction<AreaObj> },
        { "InvalidatePropellerCameraArea", createAreaObjFunction<AreaObj> },
        { "KinopioHouseExitArea", createAreaObjFunction<AreaObj> },
        { "LightArea", createAreaObjFunction<AreaObj> },
        { "ObjectChildArea", nullptr },
        { "PlayerAlongWallArea", createAreaObjFunction<AreaObj> },
        { "PlayerControlOffArea", createAreaObjFunction<AreaObj> },
        { "PlayerInclinedControlArea", createAreaObjFunction<AreaObj> },
        { "PlayerRestrictedPlane", nullptr },
        { "PlayerWidenStickXSnapArea", createAreaObjFunction<AreaObj> },
        { "PresentMessageArea", createAreaObjFunction<AreaObj> },
        { "SoundEmitArea", nullptr },
        { "SpotLightArea", nullptr },
        { "StickFixArea", createAreaObjFunction<AreaObj> },
        { "StickSnapOffArea", createAreaObjFunction<AreaObj> },
        { "SwitchKeepOnArea", nullptr },
        { "SwitchOnArea", nullptr },
        { "ViewCtrlArea", createAreaObjFunction<AreaObj> },
        { "WaterArea", createAreaObjFunction<AreaObj> },
        { "WaterFallArea", createAreaObjFunction<AreaObj> },
        { "WaterFlowArea", createAreaObjFunction<AreaObj> },
        { "GhostPlayerArea", createAreaObjFunction<AreaObj> },
        { "Guide3DArea", createAreaObjFunction<AreaObj> },
        { "MessageArea", nullptr },
        { "BugFixBalanceTruckArea", createAreaObjFunction<AreaObj> } };

} // namespace al
```


