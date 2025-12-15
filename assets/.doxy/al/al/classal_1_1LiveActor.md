

# Class al::LiveActor



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**LiveActor**](classal_1_1LiveActor.md)








Inherits the following classes: [al::IUseNerve](classal_1_1IUseNerve.md),  [al::IUseEffectKeeper](classal_1_1IUseEffectKeeper.md),  [al::IUseAudioKeeper](classal_1_1IUseAudioKeeper.md),  [al::IUseStageSwitch](classal_1_1IUseStageSwitch.md)


Inherited by the following classes: [al::BreakModel](classal_1_1BreakModel.md),  [al::MapObjActor](classal_1_1MapObjActor.md),  [al::SwitchAreaDirector](classal_1_1SwitchAreaDirector.md)
















































































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**LiveActor**](#function-liveactor) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**appear**](#function-appear) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**attackSensor**](#function-attacksensor) ([**HitSensor**](classal_1_1HitSensor.md) \* me, [**HitSensor**](classal_1_1HitSensor.md) \* other) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcAndSetBaseMtx**](#function-calcandsetbasemtx) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcAnim**](#function-calcanim) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**control**](#function-control) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**draw**](#function-draw) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**endClipped**](#function-endclipped) () <br> |
|  [**ActorActionKeeper**](classal_1_1ActorActionKeeper.md) \* | [**getActorActionKeeper**](#function-getactoractionkeeper) () const<br> |
|  [**ActorExecuteInfo**](classal_1_1ActorExecuteInfo.md) \* | [**getActorExecuteInfo**](#function-getactorexecuteinfo) () const<br> |
|  [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* | [**getActorPoseKeeper**](#function-getactorposekeeper) () const<br> |
| virtual [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**getAudioKeeper**](#function-getaudiokeeper) () const<br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* | [**getBaseMtx**](#function-getbasemtx) () const<br> |
|  [**Collider**](classal_1_1Collider.md) \* | [**getCollider**](#function-getcollider) () const<br> |
| virtual [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**getEffectKeeper**](#function-geteffectkeeper) () const<br> |
|  [**HitSensorKeeper**](classal_1_1HitSensorKeeper.md) \* | [**getHitSensorKeeper**](#function-gethitsensorkeeper) () const<br> |
|  [**LiveActorFlag**](structal_1_1LiveActorFlag.md) & | [**getLiveActorFlag**](#function-getliveactorflag-12) () <br> |
|  [**const**](structal_1_1NameToCreator.md) [**LiveActorFlag**](structal_1_1LiveActorFlag.md) & | [**getLiveActorFlag**](#function-getliveactorflag-22) () const<br> |
|  [**ModelKeeper**](classal_1_1ModelKeeper.md) \* | [**getModelKeeper**](#function-getmodelkeeper) () const<br> |
|  [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* | [**getName**](#function-getname) () const<br> |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](#function-getnervekeeper) () const<br> |
|  [**RailKeeper**](classal_1_1RailKeeper.md) \* | [**getRailKeeper**](#function-getrailkeeper) () const<br> |
|  [**ShadowKeeper**](classal_1_1ShadowKeeper.md) \* | [**getShadowKeeper**](#function-getshadowkeeper) () const<br> |
| virtual [**StageSwitchKeeper**](classal_1_1StageSwitchKeeper.md) \* | [**getStageSwitchKeeper**](#function-getstageswitchkeeper) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**init**](#function-init) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initAfterPlacement**](#function-initafterplacement) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initCollider**](#function-initcollider) ([**float**](structal_1_1NameToCreator.md) radius, [**float**](structal_1_1NameToCreator.md) yOffset, [**u32**](structal_1_1NameToCreator.md)) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNerveKeeper**](#function-initnervekeeper) ([**NerveKeeper**](classal_1_1NerveKeeper.md) \* nk) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initPoseKeeper**](#function-initposekeeper) ([**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* pPoseKeeper) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initRailKeeper**](#function-initrailkeeper) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initStageSwitchKeeper**](#function-initstageswitchkeeper) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**kill**](#function-kill) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**makeActorAppeared**](#function-makeactorappeared) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**makeActorDead**](#function-makeactordead) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**movement**](#function-movement) () <br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**receiveMsg**](#function-receivemsg) ([**u32**](structal_1_1NameToCreator.md) msg, [**HitSensor**](classal_1_1HitSensor.md) \* other, [**HitSensor**](classal_1_1HitSensor.md) \* me) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**startClipped**](#function-startclipped) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updateCollider**](#function-updatecollider) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v22**](#function-v22) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v23**](#function-v23) () <br> |


## Public Functions inherited from al::IUseNerve

See [al::IUseNerve](classal_1_1IUseNerve.md)

| Type | Name |
| ---: | :--- |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1IUseNerve.md#function-getnervekeeper) () const = 0<br> |


## Public Functions inherited from al::IUseEffectKeeper

See [al::IUseEffectKeeper](classal_1_1IUseEffectKeeper.md)

| Type | Name |
| ---: | :--- |
| virtual [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**getEffectKeeper**](classal_1_1IUseEffectKeeper.md#function-geteffectkeeper) () const = 0<br> |


## Public Functions inherited from al::IUseAudioKeeper

See [al::IUseAudioKeeper](classal_1_1IUseAudioKeeper.md)

| Type | Name |
| ---: | :--- |
| virtual [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**getAudioKeeper**](classal_1_1IUseAudioKeeper.md#function-getaudiokeeper) () const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v1**](classal_1_1IUseAudioKeeper.md#function-v1) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v2**](classal_1_1IUseAudioKeeper.md#function-v2) () <br> |


## Public Functions inherited from al::IUseStageSwitch

See [al::IUseStageSwitch](classal_1_1IUseStageSwitch.md)

| Type | Name |
| ---: | :--- |
| virtual [**StageSwitchKeeper**](classal_1_1StageSwitchKeeper.md) \* | [**getStageSwitchKeeper**](classal_1_1IUseStageSwitch.md#function-getstageswitchkeeper) () const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initStageSwitchKeeper**](classal_1_1IUseStageSwitch.md#function-initstageswitchkeeper) () = 0<br> |
































## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_4C**](#variable-_4c)  <br> |
|  [**ActorActionKeeper**](classal_1_1ActorActionKeeper.md) \* | [**mActorActionKeeper**](#variable-mactoractionkeeper)  <br> |
|  [**ActorExecuteInfo**](classal_1_1ActorExecuteInfo.md) \* | [**mActorExecuteInfo**](#variable-mactorexecuteinfo)  <br> |
|  [**ActorLightCtrl**](structal_1_1NameToCreator.md) \* | [**mActorLightCtrl**](#variable-mactorlightctrl)  <br> |
|  [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* | [**mActorPoseKeeper**](#variable-mactorposekeeper)  <br> |
|  [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**mAudioKeeper**](#variable-maudiokeeper)  <br> |
|  [**Collider**](classal_1_1Collider.md) \* | [**mCollider**](#variable-mcollider)  <br> |
|  [**CollisionParts**](classal_1_1CollisionParts.md) \* | [**mCollisionParts**](#variable-mcollisionparts)  <br> |
|  [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**mEffectKeeper**](#variable-meffectkeeper)  <br> |
|  [**HitSensorKeeper**](classal_1_1HitSensorKeeper.md) \* | [**mHitSensorKeeper**](#variable-mhitsensorkeeper)  <br> |
|  [**ModelKeeper**](classal_1_1ModelKeeper.md) \* | [**mModelKeeper**](#variable-mmodelkeeper)  <br> |
|  [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**mNerveKeeper**](#variable-mnervekeeper)  <br> |
|  [**RailKeeper**](classal_1_1RailKeeper.md) \* | [**mRailKeeper**](#variable-mrailkeeper)  <br> |
|  [**ShadowKeeper**](classal_1_1ShadowKeeper.md) \* | [**mShadowKeeper**](#variable-mshadowkeeper)  <br> |
|  [**StageSwitchKeeper**](classal_1_1StageSwitchKeeper.md) \* | [**mStageSwitchKeeper**](#variable-mstageswitchkeeper)  <br> |
|  [**SubActorKeeper**](classal_1_1SubActorKeeper.md) \* | [**mSubActorKeeper**](#variable-msubactorkeeper)  <br> |




































































































## Public Functions Documentation




### function LiveActor 

```C++
al::LiveActor::LiveActor (
    const  char * name
) 
```




<hr>



### function appear 

```C++
virtual void al::LiveActor::appear () 
```




<hr>



### function attackSensor 

```C++
virtual void al::LiveActor::attackSensor (
    HitSensor * me,
    HitSensor * other
) 
```




<hr>



### function calcAndSetBaseMtx 

```C++
virtual void al::LiveActor::calcAndSetBaseMtx () 
```




<hr>



### function calcAnim 

```C++
virtual void al::LiveActor::calcAnim () 
```




<hr>



### function control 

```C++
virtual void al::LiveActor::control () 
```




<hr>



### function draw 

```C++
virtual void al::LiveActor::draw () 
```




<hr>



### function endClipped 

```C++
virtual void al::LiveActor::endClipped () 
```




<hr>



### function getActorActionKeeper 

```C++
inline ActorActionKeeper * al::LiveActor::getActorActionKeeper () const
```




<hr>



### function getActorExecuteInfo 

```C++
inline ActorExecuteInfo * al::LiveActor::getActorExecuteInfo () const
```




<hr>



### function getActorPoseKeeper 

```C++
inline ActorPoseKeeperBase * al::LiveActor::getActorPoseKeeper () const
```




<hr>



### function getAudioKeeper 

```C++
virtual AudioKeeper * al::LiveActor::getAudioKeeper () const
```



Implements [*al::IUseAudioKeeper::getAudioKeeper*](classal_1_1IUseAudioKeeper.md#function-getaudiokeeper)


<hr>



### function getBaseMtx 

```C++
virtual const sead::Matrix34f * al::LiveActor::getBaseMtx () const
```




<hr>



### function getCollider 

```C++
inline Collider * al::LiveActor::getCollider () const
```




<hr>



### function getEffectKeeper 

```C++
virtual EffectKeeper * al::LiveActor::getEffectKeeper () const
```



Implements [*al::IUseEffectKeeper::getEffectKeeper*](classal_1_1IUseEffectKeeper.md#function-geteffectkeeper)


<hr>



### function getHitSensorKeeper 

```C++
inline HitSensorKeeper * al::LiveActor::getHitSensorKeeper () const
```




<hr>



### function getLiveActorFlag [1/2]

```C++
inline LiveActorFlag & al::LiveActor::getLiveActorFlag () 
```




<hr>



### function getLiveActorFlag [2/2]

```C++
inline const  LiveActorFlag & al::LiveActor::getLiveActorFlag () const
```




<hr>



### function getModelKeeper 

```C++
inline ModelKeeper * al::LiveActor::getModelKeeper () const
```




<hr>



### function getName 

```C++
inline const  char * al::LiveActor::getName () const
```




<hr>



### function getNerveKeeper 

```C++
virtual NerveKeeper * al::LiveActor::getNerveKeeper () const
```



Implements [*al::IUseNerve::getNerveKeeper*](classal_1_1IUseNerve.md#function-getnervekeeper)


<hr>



### function getRailKeeper 

```C++
inline RailKeeper * al::LiveActor::getRailKeeper () const
```




<hr>



### function getShadowKeeper 

```C++
inline ShadowKeeper * al::LiveActor::getShadowKeeper () const
```




<hr>



### function getStageSwitchKeeper 

```C++
virtual StageSwitchKeeper * al::LiveActor::getStageSwitchKeeper () const
```



Implements [*al::IUseStageSwitch::getStageSwitchKeeper*](classal_1_1IUseStageSwitch.md#function-getstageswitchkeeper)


<hr>



### function init 

```C++
virtual void al::LiveActor::init (
    const  ActorInitInfo & info
) 
```




<hr>



### function initAfterPlacement 

```C++
virtual void al::LiveActor::initAfterPlacement () 
```




<hr>



### function initCollider 

```C++
void al::LiveActor::initCollider (
    float radius,
    float yOffset,
    u32
) 
```




<hr>



### function initNerveKeeper 

```C++
void al::LiveActor::initNerveKeeper (
    NerveKeeper * nk
) 
```




<hr>



### function initPoseKeeper 

```C++
void al::LiveActor::initPoseKeeper (
    ActorPoseKeeperBase * pPoseKeeper
) 
```




<hr>



### function initRailKeeper 

```C++
void al::LiveActor::initRailKeeper (
    const  ActorInitInfo & info
) 
```




<hr>



### function initStageSwitchKeeper 

```C++
virtual void al::LiveActor::initStageSwitchKeeper () 
```



Implements [*al::IUseStageSwitch::initStageSwitchKeeper*](classal_1_1IUseStageSwitch.md#function-initstageswitchkeeper)


<hr>



### function kill 

```C++
virtual void al::LiveActor::kill () 
```




<hr>



### function makeActorAppeared 

```C++
virtual void al::LiveActor::makeActorAppeared () 
```




<hr>



### function makeActorDead 

```C++
virtual void al::LiveActor::makeActorDead () 
```




<hr>



### function movement 

```C++
virtual void al::LiveActor::movement () 
```




<hr>



### function receiveMsg 

```C++
virtual bool al::LiveActor::receiveMsg (
    u32 msg,
    HitSensor * other,
    HitSensor * me
) 
```




<hr>



### function startClipped 

```C++
virtual void al::LiveActor::startClipped () 
```




<hr>



### function updateCollider 

```C++
virtual void al::LiveActor::updateCollider () 
```




<hr>



### function v22 

```C++
virtual void al::LiveActor::v22 () 
```




<hr>



### function v23 

```C++
virtual void al::LiveActor::v23 () 
```




<hr>
## Protected Attributes Documentation




### variable \_4C 

```C++
void* al::LiveActor::_4C;
```




<hr>



### variable mActorActionKeeper 

```C++
ActorActionKeeper* al::LiveActor::mActorActionKeeper;
```




<hr>



### variable mActorExecuteInfo 

```C++
ActorExecuteInfo* al::LiveActor::mActorExecuteInfo;
```




<hr>



### variable mActorLightCtrl 

```C++
ActorLightCtrl* al::LiveActor::mActorLightCtrl;
```




<hr>



### variable mActorPoseKeeper 

```C++
ActorPoseKeeperBase* al::LiveActor::mActorPoseKeeper;
```




<hr>



### variable mAudioKeeper 

```C++
AudioKeeper* al::LiveActor::mAudioKeeper;
```




<hr>



### variable mCollider 

```C++
Collider* al::LiveActor::mCollider;
```




<hr>



### variable mCollisionParts 

```C++
CollisionParts* al::LiveActor::mCollisionParts;
```




<hr>



### variable mEffectKeeper 

```C++
EffectKeeper* al::LiveActor::mEffectKeeper;
```




<hr>



### variable mHitSensorKeeper 

```C++
HitSensorKeeper* al::LiveActor::mHitSensorKeeper;
```




<hr>



### variable mModelKeeper 

```C++
ModelKeeper* al::LiveActor::mModelKeeper;
```




<hr>



### variable mNerveKeeper 

```C++
NerveKeeper* al::LiveActor::mNerveKeeper;
```




<hr>



### variable mRailKeeper 

```C++
RailKeeper* al::LiveActor::mRailKeeper;
```




<hr>



### variable mShadowKeeper 

```C++
ShadowKeeper* al::LiveActor::mShadowKeeper;
```




<hr>



### variable mStageSwitchKeeper 

```C++
StageSwitchKeeper* al::LiveActor::mStageSwitchKeeper;
```




<hr>



### variable mSubActorKeeper 

```C++
SubActorKeeper* al::LiveActor::mSubActorKeeper;
```




<hr>## Friends Documentation





### friend alActorPoseFunction 

```C++
class al::LiveActor::alActorPoseFunction (
    ::alActorPoseFunction
) 
```




<hr>



### friend alLiveActorFunction 

```C++
class al::LiveActor::alLiveActorFunction (
    ::alLiveActorFunction
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/LiveActor/alLiveActor.h`

