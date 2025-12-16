

# Class sead::Controller



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Controller**](classsead_1_1_controller.md)





* `#include <seadController.h>`



Inherits the following classes: [sead::ControllerBase](classsead_1_1_controller_base.md)














## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**PadIdx**](#enum-padidx)  <br> |














## Public Static Attributes inherited from sead::ControllerBase

See [sead::ControllerBase](classsead_1_1_controller_base.md)

| Type | Name |
| ---: | :--- |
|  const [**Vector2f**](namespacesead.md#typedef-vector2f) | [**cInvalidPointer**](classsead_1_1_controller_base.md#variable-cinvalidpointer)  <br> |
|  const [**Vector2i**](namespacesead.md#typedef-vector2i) | [**cInvalidPointerS32**](classsead_1_1_controller_base.md#variable-cinvalidpointers32)  <br> |
|  const [**f32**](_l_m_s___types_8h.md#typedef-f32) | [**cStickHoldThresholdDefault**](classsead_1_1_controller_base.md#variable-cstickholdthresholddefault)  <br> |
|  const [**f32**](_l_m_s___types_8h.md#typedef-f32) | [**cStickReleaseThresholdDefault**](classsead_1_1_controller_base.md#variable-cstickreleasethresholddefault)  <br> |


























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Controller**](#function-controller) ([**ControllerMgr**](classsead_1_1_controller_mgr.md) \* mgr) <br> |
| virtual void | [**calc**](#function-calc) () <br> |
|  ControllerAddon \* | [**getAddon**](#function-getaddon) ([**ControllerDefine::AddonId**](classsead_1_1_controller_define.md#enum-addonid) id) const<br> |
|  T | [**getAddonAs**](#function-getaddonas) () const<br> |
|  ControllerAddon \* | [**getAddonByOrder**](#function-getaddonbyorder) ([**ControllerDefine::AddonId**](classsead_1_1_controller_define.md#enum-addonid) id, int index) const<br> |
| virtual bool | [**isConnected**](#function-isconnected) () const<br> |
| virtual  | [**~Controller**](#function-controller) () <br> |


## Public Functions inherited from sead::ControllerBase

See [sead::ControllerBase](classsead_1_1_controller_base.md)

| Type | Name |
| ---: | :--- |
|   | [**ControllerBase**](classsead_1_1_controller_base.md#function-controllerbase) ([**s32**](_l_m_s___types_8h.md#typedef-s32) padBitMax, [**s32**](_l_m_s___types_8h.md#typedef-s32) leftStickCrossStartBit, [**s32**](_l_m_s___types_8h.md#typedef-s32) rightStickCrossStartBit, [**s32**](_l_m_s___types_8h.md#typedef-s32) touchKeyBit) <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getHoldMask**](classsead_1_1_controller_base.md#function-getholdmask) () const<br> |
|  const [**u32**](_l_m_s___types_8h.md#typedef-u32) \* | [**getHoldMaskPtr**](classsead_1_1_controller_base.md#function-getholdmaskptr) () const<br> |
|  [**f32**](_l_m_s___types_8h.md#typedef-f32) | [**getLeftAnalogTrigger**](classsead_1_1_controller_base.md#function-getleftanalogtrigger) () const<br> |
|  const [**Vector2f**](namespacesead.md#typedef-vector2f) & | [**getLeftStick**](classsead_1_1_controller_base.md#function-getleftstick) () const<br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getPadHoldCount**](classsead_1_1_controller_base.md#function-getpadholdcount) ([**s32**](_l_m_s___types_8h.md#typedef-s32) bit) const<br> |
|  const [**Vector2f**](namespacesead.md#typedef-vector2f) & | [**getPointer**](classsead_1_1_controller_base.md#function-getpointer) () const<br> |
|  const [**BoundBox2f**](namespacesead.md#typedef-boundbox2f) & | [**getPointerBound**](classsead_1_1_controller_base.md#function-getpointerbound) () const<br> |
|  const [**Vector2i**](namespacesead.md#typedef-vector2i) & | [**getPointerPrev**](classsead_1_1_controller_base.md#function-getpointerprev) () const<br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getReleaseMask**](classsead_1_1_controller_base.md#function-getreleasemask) () const<br> |
|  const [**u32**](_l_m_s___types_8h.md#typedef-u32) \* | [**getReleaseMaskPtr**](classsead_1_1_controller_base.md#function-getreleasemaskptr) () const<br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getRepeatMask**](classsead_1_1_controller_base.md#function-getrepeatmask) () const<br> |
|  const [**u32**](_l_m_s___types_8h.md#typedef-u32) \* | [**getRepeatMaskPtr**](classsead_1_1_controller_base.md#function-getrepeatmaskptr) () const<br> |
|  [**f32**](_l_m_s___types_8h.md#typedef-f32) | [**getRightAnalogTrigger**](classsead_1_1_controller_base.md#function-getrightanalogtrigger) () const<br> |
|  const [**Vector2f**](namespacesead.md#typedef-vector2f) & | [**getRightStick**](classsead_1_1_controller_base.md#function-getrightstick) () const<br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getTrigMask**](classsead_1_1_controller_base.md#function-gettrigmask) () const<br> |
|  const [**u32**](_l_m_s___types_8h.md#typedef-u32) \* | [**getTrigMaskPtr**](classsead_1_1_controller_base.md#function-gettrigmaskptr) () const<br> |
|  bool | [**isHold**](classsead_1_1_controller_base.md#function-ishold) ([**u32**](_l_m_s___types_8h.md#typedef-u32) mask) const<br> |
|  bool | [**isHoldAll**](classsead_1_1_controller_base.md#function-isholdall) ([**u32**](_l_m_s___types_8h.md#typedef-u32) mask) const<br> |
|  bool | [**isPointerOffNow**](classsead_1_1_controller_base.md#function-ispointeroffnow) () const<br> |
|  bool | [**isPointerOn**](classsead_1_1_controller_base.md#function-ispointeron) () const<br> |
|  bool | [**isPointerOnNow**](classsead_1_1_controller_base.md#function-ispointeronnow) () const<br> |
|  bool | [**isPointerUnkFlag3**](classsead_1_1_controller_base.md#function-ispointerunkflag3) () const<br> |
|  bool | [**isRelease**](classsead_1_1_controller_base.md#function-isrelease) ([**u32**](_l_m_s___types_8h.md#typedef-u32) mask) const<br> |
|  bool | [**isRepeat**](classsead_1_1_controller_base.md#function-isrepeat) ([**u32**](_l_m_s___types_8h.md#typedef-u32) mask) const<br> |
|  bool | [**isTrig**](classsead_1_1_controller_base.md#function-istrig) ([**u32**](_l_m_s___types_8h.md#typedef-u32) mask) const<br> |
|  bool | [**isTrigWithRepeat**](classsead_1_1_controller_base.md#function-istrigwithrepeat) ([**u32**](_l_m_s___types_8h.md#typedef-u32) mask) const<br> |
|  void | [**setLeftStickCrossThreshold**](classsead_1_1_controller_base.md#function-setleftstickcrossthreshold) ([**f32**](_l_m_s___types_8h.md#typedef-f32) hold, [**f32**](_l_m_s___types_8h.md#typedef-f32) release) <br> |
|  void | [**setPadRepeat**](classsead_1_1_controller_base.md#function-setpadrepeat) ([**u32**](_l_m_s___types_8h.md#typedef-u32) mask, [**u8**](_l_m_s___types_8h.md#typedef-u8) delay\_frame, [**u8**](_l_m_s___types_8h.md#typedef-u8) pulse\_frame) <br> |
|  void | [**setPointerBound**](classsead_1_1_controller_base.md#function-setpointerbound) (const [**BoundBox2f**](namespacesead.md#typedef-boundbox2f) & bound) <br> |
|  void | [**setRightStickCrossThreshold**](classsead_1_1_controller_base.md#function-setrightstickcrossthreshold) ([**f32**](_l_m_s___types_8h.md#typedef-f32) hold, [**f32**](_l_m_s___types_8h.md#typedef-f32) release) <br> |














































## Protected Functions

| Type | Name |
| ---: | :--- |
| virtual void | [**calcImpl\_**](#function-calcimpl_) () = 0<br> |
| virtual bool | [**isIdle\_**](#function-isidle_) () <br> |
| virtual void | [**setIdle\_**](#function-setidle_) () <br> |


## Protected Functions inherited from sead::ControllerBase

See [sead::ControllerBase](classsead_1_1_controller_base.md)

| Type | Name |
| ---: | :--- |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**createStickCrossMask\_**](classsead_1_1_controller_base.md#function-createstickcrossmask_) () <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getStickHold\_**](classsead_1_1_controller_base.md#function-getstickhold_) ([**u32**](_l_m_s___types_8h.md#typedef-u32) prev\_hold, const [**Vector2f**](namespacesead.md#typedef-vector2f) & stick, [**f32**](_l_m_s___types_8h.md#typedef-f32) hold\_threshold, [**f32**](_l_m_s___types_8h.md#typedef-f32) release\_threshold, [**s32**](_l_m_s___types_8h.md#typedef-s32) start\_bit) <br> |
|  bool | [**isIdleBase\_**](classsead_1_1_controller_base.md#function-isidlebase_) () <br> |
|  void | [**setIdleBase\_**](classsead_1_1_controller_base.md#function-setidlebase_) () <br> |
|  void | [**setPointerWithBound\_**](classsead_1_1_controller_base.md#function-setpointerwithbound_) (bool is\_on, bool touchkey\_hold, const [**Vector2f**](namespacesead.md#typedef-vector2f) & pos) <br> |
|  void | [**updateDerivativeParams\_**](classsead_1_1_controller_base.md#function-updatederivativeparams_) ([**u32**](_l_m_s___types_8h.md#typedef-u32) prev\_hold, bool prev\_pointer\_on) <br> |






## Public Types Documentation




### enum PadIdx 

```C++
enum sead::Controller::PadIdx {
    cPadIdx_A = 0,
    cPadIdx_B = 1,
    cPadIdx_C = 2,
    cPadIdx_X = 3,
    cPadIdx_Y = 4,
    cPadIdx_Z = 5,
    cPadIdx_2 = 6,
    cPadIdx_1 = 7,
    cPadIdx_Home = 8,
    cPadIdx_Minus = 9,
    cPadIdx_Plus = 10,
    cPadIdx_Start = 11,
    cPadIdx_Select = 12,
    cPadIdx_ZL = cPadIdx_C,
    cPadIdx_ZR = cPadIdx_Z,
    cPadIdx_L = 13,
    cPadIdx_R = 14,
    cPadIdx_Touch = 15,
    cPadIdx_Up = 16,
    cPadIdx_Down = 17,
    cPadIdx_Left = 18,
    cPadIdx_Right = 19,
    cPadIdx_LeftStickUp = 20,
    cPadIdx_LeftStickDown = 21,
    cPadIdx_LeftStickLeft = 22,
    cPadIdx_LeftStickRight = 23,
    cPadIdx_RightStickUp = 24,
    cPadIdx_RightStickDown = 25,
    cPadIdx_RightStickLeft = 26,
    cPadIdx_RightStickRight = 27,
    cPadIdx_Max = 28
};
```




<hr>
## Public Functions Documentation




### function Controller 

```C++
explicit sead::Controller::Controller (
    ControllerMgr * mgr
) 
```




<hr>



### function calc 

```C++
virtual void sead::Controller::calc () 
```




<hr>



### function getAddon 

```C++
ControllerAddon * sead::Controller::getAddon (
    ControllerDefine::AddonId id
) const
```




<hr>



### function getAddonAs 

```C++
template<typename T>
T sead::Controller::getAddonAs () const
```




<hr>



### function getAddonByOrder 

```C++
ControllerAddon * sead::Controller::getAddonByOrder (
    ControllerDefine::AddonId id,
    int index
) const
```




<hr>



### function isConnected 

```C++
virtual bool sead::Controller::isConnected () const
```




<hr>



### function ~Controller 

```C++
virtual sead::Controller::~Controller () 
```




<hr>
## Protected Functions Documentation




### function calcImpl\_ 

```C++
virtual void sead::Controller::calcImpl_ () = 0
```




<hr>



### function isIdle\_ 

```C++
virtual bool sead::Controller::isIdle_ () 
```




<hr>



### function setIdle\_ 

```C++
virtual void sead::Controller::setIdle_ () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/controller/seadController.h`

