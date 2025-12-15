

# Class al::ActorPoseKeeperTQSV



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ActorPoseKeeperTQSV**](classal_1_1ActorPoseKeeperTQSV.md)








Inherits the following classes: [al::ActorPoseKeeperBase](classal_1_1ActorPoseKeeperBase.md)




























## Public Static Attributes inherited from al::ActorPoseKeeperBase

See [al::ActorPoseKeeperBase](classal_1_1ActorPoseKeeperBase.md)

| Type | Name |
| ---: | :--- |
|  [**const**](structal_1_1NameToCreator.md) sead::Vector3f | [**sDefaultGravity**](classal_1_1ActorPoseKeeperBase.md#variable-sdefaultgravity)  <br> |


























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ActorPoseKeeperTQSV**](#function-actorposekeepertqsv) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcBaseMtx**](#function-calcbasemtx) (sead::Matrix34f \* out) <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Quatf & | [**getQuat**](#function-getquat) () const<br> |
| virtual sead::Quatf \* | [**getQuatPtr**](#function-getquatptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getScale**](#function-getscale) () const<br> |
| virtual sead::Vector3f \* | [**getScalePtr**](#function-getscaleptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getVelocity**](#function-getvelocity) () const<br> |
| virtual sead::Vector3f \* | [**getVelocityPtr**](#function-getvelocityptr) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseMtx**](#function-updateposemtx) ([**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* mtx) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseQuat**](#function-updateposequat) ([**const**](structal_1_1NameToCreator.md) sead::Quatf & quat) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseRotate**](#function-updateposerotate) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & rot) <br> |


## Public Functions inherited from al::ActorPoseKeeperBase

See [al::ActorPoseKeeperBase](classal_1_1ActorPoseKeeperBase.md)

| Type | Name |
| ---: | :--- |
|   | [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md#function-actorposekeeperbase) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcBaseMtx**](classal_1_1ActorPoseKeeperBase.md#function-calcbasemtx) (sead::Matrix34f \* out) = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**copyPose**](classal_1_1ActorPoseKeeperBase.md#function-copypose) ([**const**](structal_1_1NameToCreator.md) [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* from) <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getFront**](classal_1_1ActorPoseKeeperBase.md#function-getfront) () const<br> |
| virtual sead::Vector3f \* | [**getFrontPtr**](classal_1_1ActorPoseKeeperBase.md#function-getfrontptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getGravity**](classal_1_1ActorPoseKeeperBase.md#function-getgravity) () const<br> |
| virtual sead::Vector3f \* | [**getGravityPtr**](classal_1_1ActorPoseKeeperBase.md#function-getgravityptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Quatf & | [**getQuat**](classal_1_1ActorPoseKeeperBase.md#function-getquat) () const<br> |
| virtual sead::Quatf \* | [**getQuatPtr**](classal_1_1ActorPoseKeeperBase.md#function-getquatptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getRotate**](classal_1_1ActorPoseKeeperBase.md#function-getrotate) () const<br> |
| virtual sead::Vector3f \* | [**getRotatePtr**](classal_1_1ActorPoseKeeperBase.md#function-getrotateptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getScale**](classal_1_1ActorPoseKeeperBase.md#function-getscale) () const<br> |
| virtual sead::Vector3f \* | [**getScalePtr**](classal_1_1ActorPoseKeeperBase.md#function-getscaleptr) () <br> |
|  [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getTrans**](classal_1_1ActorPoseKeeperBase.md#function-gettrans) () const<br> |
|  sead::Vector3f \* | [**getTransPtr**](classal_1_1ActorPoseKeeperBase.md#function-gettransptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getVelocity**](classal_1_1ActorPoseKeeperBase.md#function-getvelocity) () const<br> |
| virtual sead::Vector3f \* | [**getVelocityPtr**](classal_1_1ActorPoseKeeperBase.md#function-getvelocityptr) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseMtx**](classal_1_1ActorPoseKeeperBase.md#function-updateposemtx) ([**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* mtx) = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseQuat**](classal_1_1ActorPoseKeeperBase.md#function-updateposequat) ([**const**](structal_1_1NameToCreator.md) sead::Quatf & quat) = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseRotate**](classal_1_1ActorPoseKeeperBase.md#function-updateposerotate) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & rot) = 0<br> |






















































## Public Functions Documentation




### function ActorPoseKeeperTQSV 

```C++
al::ActorPoseKeeperTQSV::ActorPoseKeeperTQSV () 
```




<hr>



### function calcBaseMtx 

```C++
virtual void al::ActorPoseKeeperTQSV::calcBaseMtx (
    sead::Matrix34f * out
) 
```



Implements [*al::ActorPoseKeeperBase::calcBaseMtx*](classal_1_1ActorPoseKeeperBase.md#function-calcbasemtx)


<hr>



### function getQuat 

```C++
virtual const sead::Quatf & al::ActorPoseKeeperTQSV::getQuat () const
```



Implements [*al::ActorPoseKeeperBase::getQuat*](classal_1_1ActorPoseKeeperBase.md#function-getquat)


<hr>



### function getQuatPtr 

```C++
virtual sead::Quatf * al::ActorPoseKeeperTQSV::getQuatPtr () 
```



Implements [*al::ActorPoseKeeperBase::getQuatPtr*](classal_1_1ActorPoseKeeperBase.md#function-getquatptr)


<hr>



### function getScale 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperTQSV::getScale () const
```



Implements [*al::ActorPoseKeeperBase::getScale*](classal_1_1ActorPoseKeeperBase.md#function-getscale)


<hr>



### function getScalePtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperTQSV::getScalePtr () 
```



Implements [*al::ActorPoseKeeperBase::getScalePtr*](classal_1_1ActorPoseKeeperBase.md#function-getscaleptr)


<hr>



### function getVelocity 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperTQSV::getVelocity () const
```



Implements [*al::ActorPoseKeeperBase::getVelocity*](classal_1_1ActorPoseKeeperBase.md#function-getvelocity)


<hr>



### function getVelocityPtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperTQSV::getVelocityPtr () 
```



Implements [*al::ActorPoseKeeperBase::getVelocityPtr*](classal_1_1ActorPoseKeeperBase.md#function-getvelocityptr)


<hr>



### function updatePoseMtx 

```C++
virtual void al::ActorPoseKeeperTQSV::updatePoseMtx (
    const sead::Matrix34f * mtx
) 
```



Implements [*al::ActorPoseKeeperBase::updatePoseMtx*](classal_1_1ActorPoseKeeperBase.md#function-updateposemtx)


<hr>



### function updatePoseQuat 

```C++
virtual void al::ActorPoseKeeperTQSV::updatePoseQuat (
    const sead::Quatf & quat
) 
```



Implements [*al::ActorPoseKeeperBase::updatePoseQuat*](classal_1_1ActorPoseKeeperBase.md#function-updateposequat)


<hr>



### function updatePoseRotate 

```C++
virtual void al::ActorPoseKeeperTQSV::updatePoseRotate (
    const sead::Vector3f & rot
) 
```



Implements [*al::ActorPoseKeeperBase::updatePoseRotate*](classal_1_1ActorPoseKeeperBase.md#function-updateposerotate)


<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/LiveActor/alActorPoseKeeper.h`

