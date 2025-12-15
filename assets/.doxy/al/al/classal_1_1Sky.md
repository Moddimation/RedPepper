

# Class al::Sky



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**Sky**](classal_1_1Sky.md)








Inherits the following classes: [al::MapObjActor](classal_1_1MapObjActor.md)


























































































































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Sky**](#function-sky) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcAnim**](#function-calcanim) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**init**](#function-init) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |


## Public Functions inherited from al::MapObjActor

See [al::MapObjActor](classal_1_1MapObjActor.md)

| Type | Name |
| ---: | :--- |
|   | [**MapObjActor**](classal_1_1MapObjActor.md#function-mapobjactor) ([**const**](structal_1_1NameToCreator.md) sead::SafeString & name) <br> |


## Public Functions inherited from al::LiveActor

See [al::LiveActor](classal_1_1LiveActor.md)

| Type | Name |
| ---: | :--- |
|   | [**LiveActor**](classal_1_1LiveActor.md#function-liveactor) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**appear**](classal_1_1LiveActor.md#function-appear) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**attackSensor**](classal_1_1LiveActor.md#function-attacksensor) ([**HitSensor**](classal_1_1HitSensor.md) \* me, [**HitSensor**](classal_1_1HitSensor.md) \* other) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcAndSetBaseMtx**](classal_1_1LiveActor.md#function-calcandsetbasemtx) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcAnim**](classal_1_1LiveActor.md#function-calcanim) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**control**](classal_1_1LiveActor.md#function-control) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**draw**](classal_1_1LiveActor.md#function-draw) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**endClipped**](classal_1_1LiveActor.md#function-endclipped) () <br> |
|  [**ActorActionKeeper**](classal_1_1ActorActionKeeper.md) \* | [**getActorActionKeeper**](classal_1_1LiveActor.md#function-getactoractionkeeper) () const<br> |
|  [**ActorExecuteInfo**](classal_1_1ActorExecuteInfo.md) \* | [**getActorExecuteInfo**](classal_1_1LiveActor.md#function-getactorexecuteinfo) () const<br> |
|  [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* | [**getActorPoseKeeper**](classal_1_1LiveActor.md#function-getactorposekeeper) () const<br> |
| virtual [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**getAudioKeeper**](classal_1_1LiveActor.md#function-getaudiokeeper) () const<br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* | [**getBaseMtx**](classal_1_1LiveActor.md#function-getbasemtx) () const<br> |
|  [**Collider**](classal_1_1Collider.md) \* | [**getCollider**](classal_1_1LiveActor.md#function-getcollider) () const<br> |
| virtual [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**getEffectKeeper**](classal_1_1LiveActor.md#function-geteffectkeeper) () const<br> |
|  [**HitSensorKeeper**](classal_1_1HitSensorKeeper.md) \* | [**getHitSensorKeeper**](classal_1_1LiveActor.md#function-gethitsensorkeeper) () const<br> |
|  [**LiveActorFlag**](structal_1_1LiveActorFlag.md) & | [**getLiveActorFlag**](classal_1_1LiveActor.md#function-getliveactorflag-12) () <br> |
|  [**const**](structal_1_1NameToCreator.md) [**LiveActorFlag**](structal_1_1LiveActorFlag.md) & | [**getLiveActorFlag**](classal_1_1LiveActor.md#function-getliveactorflag-22) () const<br> |
|  [**ModelKeeper**](classal_1_1ModelKeeper.md) \* | [**getModelKeeper**](classal_1_1LiveActor.md#function-getmodelkeeper) () const<br> |
|  [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* | [**getName**](classal_1_1LiveActor.md#function-getname) () const<br> |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1LiveActor.md#function-getnervekeeper) () const<br> |
|  [**RailKeeper**](classal_1_1RailKeeper.md) \* | [**getRailKeeper**](classal_1_1LiveActor.md#function-getrailkeeper) () const<br> |
|  [**ShadowKeeper**](classal_1_1ShadowKeeper.md) \* | [**getShadowKeeper**](classal_1_1LiveActor.md#function-getshadowkeeper) () const<br> |
| virtual [**StageSwitchKeeper**](classal_1_1StageSwitchKeeper.md) \* | [**getStageSwitchKeeper**](classal_1_1LiveActor.md#function-getstageswitchkeeper) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**init**](classal_1_1LiveActor.md#function-init) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initAfterPlacement**](classal_1_1LiveActor.md#function-initafterplacement) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initCollider**](classal_1_1LiveActor.md#function-initcollider) ([**float**](structal_1_1NameToCreator.md) radius, [**float**](structal_1_1NameToCreator.md) yOffset, [**u32**](structal_1_1NameToCreator.md)) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNerveKeeper**](classal_1_1LiveActor.md#function-initnervekeeper) ([**NerveKeeper**](classal_1_1NerveKeeper.md) \* nk) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initPoseKeeper**](classal_1_1LiveActor.md#function-initposekeeper) ([**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* pPoseKeeper) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initRailKeeper**](classal_1_1LiveActor.md#function-initrailkeeper) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initStageSwitchKeeper**](classal_1_1LiveActor.md#function-initstageswitchkeeper) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**kill**](classal_1_1LiveActor.md#function-kill) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**makeActorAppeared**](classal_1_1LiveActor.md#function-makeactorappeared) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**makeActorDead**](classal_1_1LiveActor.md#function-makeactordead) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**movement**](classal_1_1LiveActor.md#function-movement) () <br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**receiveMsg**](classal_1_1LiveActor.md#function-receivemsg) ([**u32**](structal_1_1NameToCreator.md) msg, [**HitSensor**](classal_1_1HitSensor.md) \* other, [**HitSensor**](classal_1_1HitSensor.md) \* me) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**startClipped**](classal_1_1LiveActor.md#function-startclipped) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updateCollider**](classal_1_1LiveActor.md#function-updatecollider) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v22**](classal_1_1LiveActor.md#function-v22) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v23**](classal_1_1LiveActor.md#function-v23) () <br> |


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
















































## Protected Attributes inherited from al::LiveActor

See [al::LiveActor](classal_1_1LiveActor.md)

| Type | Name |
| ---: | :--- |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_4C**](classal_1_1LiveActor.md#variable-_4c)  <br> |
|  [**ActorActionKeeper**](classal_1_1ActorActionKeeper.md) \* | [**mActorActionKeeper**](classal_1_1LiveActor.md#variable-mactoractionkeeper)  <br> |
|  [**ActorExecuteInfo**](classal_1_1ActorExecuteInfo.md) \* | [**mActorExecuteInfo**](classal_1_1LiveActor.md#variable-mactorexecuteinfo)  <br> |
|  [**ActorLightCtrl**](structal_1_1NameToCreator.md) \* | [**mActorLightCtrl**](classal_1_1LiveActor.md#variable-mactorlightctrl)  <br> |
|  [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* | [**mActorPoseKeeper**](classal_1_1LiveActor.md#variable-mactorposekeeper)  <br> |
|  [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**mAudioKeeper**](classal_1_1LiveActor.md#variable-maudiokeeper)  <br> |
|  [**Collider**](classal_1_1Collider.md) \* | [**mCollider**](classal_1_1LiveActor.md#variable-mcollider)  <br> |
|  [**CollisionParts**](classal_1_1CollisionParts.md) \* | [**mCollisionParts**](classal_1_1LiveActor.md#variable-mcollisionparts)  <br> |
|  [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**mEffectKeeper**](classal_1_1LiveActor.md#variable-meffectkeeper)  <br> |
|  [**HitSensorKeeper**](classal_1_1HitSensorKeeper.md) \* | [**mHitSensorKeeper**](classal_1_1LiveActor.md#variable-mhitsensorkeeper)  <br> |
|  [**ModelKeeper**](classal_1_1ModelKeeper.md) \* | [**mModelKeeper**](classal_1_1LiveActor.md#variable-mmodelkeeper)  <br> |
|  [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**mNerveKeeper**](classal_1_1LiveActor.md#variable-mnervekeeper)  <br> |
|  [**RailKeeper**](classal_1_1RailKeeper.md) \* | [**mRailKeeper**](classal_1_1LiveActor.md#variable-mrailkeeper)  <br> |
|  [**ShadowKeeper**](classal_1_1ShadowKeeper.md) \* | [**mShadowKeeper**](classal_1_1LiveActor.md#variable-mshadowkeeper)  <br> |
|  [**StageSwitchKeeper**](classal_1_1StageSwitchKeeper.md) \* | [**mStageSwitchKeeper**](classal_1_1LiveActor.md#variable-mstageswitchkeeper)  <br> |
|  [**SubActorKeeper**](classal_1_1SubActorKeeper.md) \* | [**mSubActorKeeper**](classal_1_1LiveActor.md#variable-msubactorkeeper)  <br> |








































































































































## Public Functions Documentation




### function Sky 

```C++
al::Sky::Sky (
    const  char * name
) 
```




<hr>



### function calcAnim 

```C++
virtual void al::Sky::calcAnim () 
```



Implements [*al::LiveActor::calcAnim*](classal_1_1LiveActor.md#function-calcanim)


<hr>



### function init 

```C++
virtual void al::Sky::init (
    const  ActorInitInfo & info
) 
```



Implements [*al::LiveActor::init*](classal_1_1LiveActor.md#function-init)


<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Npc/alSky.h`

