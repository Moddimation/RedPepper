

# Class sead::ControllerBase



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ControllerBase**](classsead_1_1ControllerBase.md)










Inherited by the following classes: [sead::Controller](classsead_1_1Controller.md)


















## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Vector2f**](structsead_1_1Vector2.md) | [**cInvalidPointer**](#variable-cinvalidpointer)  <br> |
|  const [**Vector2i**](structsead_1_1Vector2.md) | [**cInvalidPointerS32**](#variable-cinvalidpointers32)  <br> |
|  const f32 | [**cStickHoldThresholdDefault**](#variable-cstickholdthresholddefault)  <br> |
|  const f32 | [**cStickReleaseThresholdDefault**](#variable-cstickreleasethresholddefault)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ControllerBase**](#function-controllerbase) (s32 padBitMax, s32 leftStickCrossStartBit, s32 rightStickCrossStartBit, s32 touchKeyBit) <br> |
|  u32 | [**getHoldMask**](#function-getholdmask) () const<br> |
|  const u32 \* | [**getHoldMaskPtr**](#function-getholdmaskptr) () const<br> |
|  f32 | [**getLeftAnalogTrigger**](#function-getleftanalogtrigger) () const<br> |
|  const [**Vector2f**](structsead_1_1Vector2.md) & | [**getLeftStick**](#function-getleftstick) () const<br> |
|  u32 | [**getPadHoldCount**](#function-getpadholdcount) (s32 bit) const<br> |
|  const [**Vector2f**](structsead_1_1Vector2.md) & | [**getPointer**](#function-getpointer) () const<br> |
|  const [**BoundBox2f**](structsead_1_1BoundBox2.md) & | [**getPointerBound**](#function-getpointerbound) () const<br> |
|  const [**Vector2i**](structsead_1_1Vector2.md) & | [**getPointerPrev**](#function-getpointerprev) () const<br> |
|  u32 | [**getReleaseMask**](#function-getreleasemask) () const<br> |
|  const u32 \* | [**getReleaseMaskPtr**](#function-getreleasemaskptr) () const<br> |
|  u32 | [**getRepeatMask**](#function-getrepeatmask) () const<br> |
|  const u32 \* | [**getRepeatMaskPtr**](#function-getrepeatmaskptr) () const<br> |
|  f32 | [**getRightAnalogTrigger**](#function-getrightanalogtrigger) () const<br> |
|  const [**Vector2f**](structsead_1_1Vector2.md) & | [**getRightStick**](#function-getrightstick) () const<br> |
|  u32 | [**getTrigMask**](#function-gettrigmask) () const<br> |
|  const u32 \* | [**getTrigMaskPtr**](#function-gettrigmaskptr) () const<br> |
|  bool | [**isHold**](#function-ishold) (u32 mask) const<br> |
|  bool | [**isHoldAll**](#function-isholdall) (u32 mask) const<br> |
|  bool | [**isPointerOffNow**](#function-ispointeroffnow) () const<br> |
|  bool | [**isPointerOn**](#function-ispointeron) () const<br> |
|  bool | [**isPointerOnNow**](#function-ispointeronnow) () const<br> |
|  bool | [**isPointerUnkFlag3**](#function-ispointerunkflag3) () const<br> |
|  bool | [**isRelease**](#function-isrelease) (u32 mask) const<br> |
|  bool | [**isRepeat**](#function-isrepeat) (u32 mask) const<br> |
|  bool | [**isTrig**](#function-istrig) (u32 mask) const<br> |
|  bool | [**isTrigWithRepeat**](#function-istrigwithrepeat) (u32 mask) const<br> |
|  void | [**setLeftStickCrossThreshold**](#function-setleftstickcrossthreshold) (f32 hold, f32 release) <br> |
|  void | [**setPadRepeat**](#function-setpadrepeat) (u32 mask, u8 delay\_frame, u8 pulse\_frame) <br> |
|  void | [**setPointerBound**](#function-setpointerbound) (const [**BoundBox2f**](structsead_1_1BoundBox2.md) & bound) <br> |
|  void | [**setRightStickCrossThreshold**](#function-setrightstickcrossthreshold) (f32 hold, f32 release) <br> |
























## Protected Functions

| Type | Name |
| ---: | :--- |
|  u32 | [**createStickCrossMask\_**](#function-createstickcrossmask_) () <br> |
|  u32 | [**getStickHold\_**](#function-getstickhold_) (u32 prev\_hold, const [**Vector2f**](structsead_1_1Vector2.md) & stick, f32 hold\_threshold, f32 release\_threshold, s32 start\_bit) <br> |
|  bool | [**isIdleBase\_**](#function-isidlebase_) () <br> |
|  void | [**setIdleBase\_**](#function-setidlebase_) () <br> |
|  void | [**setPointerWithBound\_**](#function-setpointerwithbound_) (bool is\_on, bool touchkey\_hold, const [**Vector2f**](structsead_1_1Vector2.md) & pos) <br> |
|  void | [**updateDerivativeParams\_**](#function-updatederivativeparams_) (u32 prev\_hold, bool prev\_pointer\_on) <br> |




## Public Static Attributes Documentation




### variable cInvalidPointer 

```C++
const Vector2f sead::ControllerBase::cInvalidPointer;
```




<hr>



### variable cInvalidPointerS32 

```C++
const Vector2i sead::ControllerBase::cInvalidPointerS32;
```




<hr>



### variable cStickHoldThresholdDefault 

```C++
const f32 sead::ControllerBase::cStickHoldThresholdDefault;
```




<hr>



### variable cStickReleaseThresholdDefault 

```C++
const f32 sead::ControllerBase::cStickReleaseThresholdDefault;
```




<hr>
## Public Functions Documentation




### function ControllerBase 

```C++
sead::ControllerBase::ControllerBase (
    s32 padBitMax,
    s32 leftStickCrossStartBit,
    s32 rightStickCrossStartBit,
    s32 touchKeyBit
) 
```




<hr>



### function getHoldMask 

```C++
inline u32 sead::ControllerBase::getHoldMask () const
```




<hr>



### function getHoldMaskPtr 

```C++
inline const u32 * sead::ControllerBase::getHoldMaskPtr () const
```




<hr>



### function getLeftAnalogTrigger 

```C++
inline f32 sead::ControllerBase::getLeftAnalogTrigger () const
```




<hr>



### function getLeftStick 

```C++
inline const Vector2f & sead::ControllerBase::getLeftStick () const
```




<hr>



### function getPadHoldCount 

```C++
u32 sead::ControllerBase::getPadHoldCount (
    s32 bit
) const
```




<hr>



### function getPointer 

```C++
inline const Vector2f & sead::ControllerBase::getPointer () const
```




<hr>



### function getPointerBound 

```C++
inline const BoundBox2f & sead::ControllerBase::getPointerBound () const
```




<hr>



### function getPointerPrev 

```C++
inline const Vector2i & sead::ControllerBase::getPointerPrev () const
```




<hr>



### function getReleaseMask 

```C++
inline u32 sead::ControllerBase::getReleaseMask () const
```




<hr>



### function getReleaseMaskPtr 

```C++
inline const u32 * sead::ControllerBase::getReleaseMaskPtr () const
```




<hr>



### function getRepeatMask 

```C++
inline u32 sead::ControllerBase::getRepeatMask () const
```




<hr>



### function getRepeatMaskPtr 

```C++
inline const u32 * sead::ControllerBase::getRepeatMaskPtr () const
```




<hr>



### function getRightAnalogTrigger 

```C++
inline f32 sead::ControllerBase::getRightAnalogTrigger () const
```




<hr>



### function getRightStick 

```C++
inline const Vector2f & sead::ControllerBase::getRightStick () const
```




<hr>



### function getTrigMask 

```C++
inline u32 sead::ControllerBase::getTrigMask () const
```




<hr>



### function getTrigMaskPtr 

```C++
inline const u32 * sead::ControllerBase::getTrigMaskPtr () const
```




<hr>



### function isHold 

```C++
inline bool sead::ControllerBase::isHold (
    u32 mask
) const
```




<hr>



### function isHoldAll 

```C++
inline bool sead::ControllerBase::isHoldAll (
    u32 mask
) const
```




<hr>



### function isPointerOffNow 

```C++
inline bool sead::ControllerBase::isPointerOffNow () const
```




<hr>



### function isPointerOn 

```C++
inline bool sead::ControllerBase::isPointerOn () const
```




<hr>



### function isPointerOnNow 

```C++
inline bool sead::ControllerBase::isPointerOnNow () const
```




<hr>



### function isPointerUnkFlag3 

```C++
inline bool sead::ControllerBase::isPointerUnkFlag3 () const
```




<hr>



### function isRelease 

```C++
inline bool sead::ControllerBase::isRelease (
    u32 mask
) const
```




<hr>



### function isRepeat 

```C++
inline bool sead::ControllerBase::isRepeat (
    u32 mask
) const
```




<hr>



### function isTrig 

```C++
inline bool sead::ControllerBase::isTrig (
    u32 mask
) const
```




<hr>



### function isTrigWithRepeat 

```C++
inline bool sead::ControllerBase::isTrigWithRepeat (
    u32 mask
) const
```




<hr>



### function setLeftStickCrossThreshold 

```C++
void sead::ControllerBase::setLeftStickCrossThreshold (
    f32 hold,
    f32 release
) 
```




<hr>



### function setPadRepeat 

```C++
void sead::ControllerBase::setPadRepeat (
    u32 mask,
    u8 delay_frame,
    u8 pulse_frame
) 
```




<hr>



### function setPointerBound 

```C++
void sead::ControllerBase::setPointerBound (
    const BoundBox2f & bound
) 
```




<hr>



### function setRightStickCrossThreshold 

```C++
void sead::ControllerBase::setRightStickCrossThreshold (
    f32 hold,
    f32 release
) 
```




<hr>
## Protected Functions Documentation




### function createStickCrossMask\_ 

```C++
u32 sead::ControllerBase::createStickCrossMask_ () 
```




<hr>



### function getStickHold\_ 

```C++
u32 sead::ControllerBase::getStickHold_ (
    u32 prev_hold,
    const Vector2f & stick,
    f32 hold_threshold,
    f32 release_threshold,
    s32 start_bit
) 
```




<hr>



### function isIdleBase\_ 

```C++
bool sead::ControllerBase::isIdleBase_ () 
```




<hr>



### function setIdleBase\_ 

```C++
void sead::ControllerBase::setIdleBase_ () 
```




<hr>



### function setPointerWithBound\_ 

```C++
void sead::ControllerBase::setPointerWithBound_ (
    bool is_on,
    bool touchkey_hold,
    const Vector2f & pos
) 
```




<hr>



### function updateDerivativeParams\_ 

```C++
void sead::ControllerBase::updateDerivativeParams_ (
    u32 prev_hold,
    bool prev_pointer_on
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/controller/seadControllerBase.h`

