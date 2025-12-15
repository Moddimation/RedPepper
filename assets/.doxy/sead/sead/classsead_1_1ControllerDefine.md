

# Class sead::ControllerDefine



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ControllerDefine**](classsead_1_1ControllerDefine.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**AddonId**](#enum-addonid)  <br> |
| enum  | [**ControllerId**](#enum-controllerid)  <br> |
| enum  | [**DeviceId**](#enum-deviceid)  <br> |
















































## Public Types Documentation




### enum AddonId 

```C++
enum sead::ControllerDefine::AddonId {
    cAddon_Null = 0,
    cAddon_Accelerometer = 1,
    cAddon_PatternRumble = 2,
    cAddon_UserDefine = 3
};
```




<hr>



### enum ControllerId 

```C++
enum sead::ControllerDefine::ControllerId {
    cController_Null = 0,
    cController_Win = 1,
    cController_Ctr = 2,
    cController_CtrDebug = 3,
    cController_WiiRemote = 4,
    cController_CafeDebug = 5,
    cController_WinDRC = 6,
    cController_CafeRemote = 7,
    cController_CafeDRC = 8,
    cController_Merge = 9,
    cController_UserDefine = 10,
    _15 = 15,
    _16 = 16
};
```




<hr>



### enum DeviceId 

```C++
enum sead::ControllerDefine::DeviceId {
    cDevice_Null = 0,
    cDevice_KeyboardMouse = 1,
    cDevice_CtrHid = 2,
    cDevice_WinJoyPad = 3,
    cDevice_RvlWPad = 4,
    cDevice_WinWPad = 5,
    cDevice_CafeDebugPad = 6,
    cDevice_CafeWPad = 7,
    cDevice_CafeVPad = 8,
    cDevice_UserDefine = 9
};
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/controller/seadControllerDefine.h`

