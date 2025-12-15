

# Class al::ActorPoseKeeperTFGSV



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ActorPoseKeeperTFGSV**](classal_1_1ActorPoseKeeperTFGSV.md)








Inherits the following classes: [al::ActorPoseKeeperTFSV](classal_1_1ActorPoseKeeperTFSV.md)




































## Public Static Attributes inherited from al::ActorPoseKeeperBase

See [al::ActorPoseKeeperBase](classal_1_1ActorPoseKeeperBase.md)

| Type | Name |
| ---: | :--- |
|  [**const**](structal_1_1NameToCreator.md) sead::Vector3f | [**sDefaultGravity**](classal_1_1ActorPoseKeeperBase.md#variable-sdefaultgravity)  <br> |






































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ActorPoseKeeperTFGSV**](#function-actorposekeepertfgsv) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcBaseMtx**](#function-calcbasemtx) (sead::Matrix34f \* out) <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getGravity**](#function-getgravity) () const<br> |
| virtual sead::Vector3f \* | [**getGravityPtr**](#function-getgravityptr) () <br> |


## Public Functions inherited from al::ActorPoseKeeperTFSV

See [al::ActorPoseKeeperTFSV](classal_1_1ActorPoseKeeperTFSV.md)

| Type | Name |
| ---: | :--- |
|   | [**ActorPoseKeeperTFSV**](classal_1_1ActorPoseKeeperTFSV.md#function-actorposekeepertfsv) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcBaseMtx**](classal_1_1ActorPoseKeeperTFSV.md#function-calcbasemtx) (sead::Matrix34f \* out) <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getFront**](classal_1_1ActorPoseKeeperTFSV.md#function-getfront) () const<br> |
| virtual sead::Vector3f \* | [**getFrontPtr**](classal_1_1ActorPoseKeeperTFSV.md#function-getfrontptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getScale**](classal_1_1ActorPoseKeeperTFSV.md#function-getscale) () const<br> |
| virtual sead::Vector3f \* | [**getScalePtr**](classal_1_1ActorPoseKeeperTFSV.md#function-getscaleptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getVelocity**](classal_1_1ActorPoseKeeperTFSV.md#function-getvelocity) () const<br> |
| virtual sead::Vector3f \* | [**getVelocityPtr**](classal_1_1ActorPoseKeeperTFSV.md#function-getvelocityptr) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseMtx**](classal_1_1ActorPoseKeeperTFSV.md#function-updateposemtx) ([**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* mtx) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseQuat**](classal_1_1ActorPoseKeeperTFSV.md#function-updateposequat) ([**const**](structal_1_1NameToCreator.md) sead::Quatf & quat) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseRotate**](classal_1_1ActorPoseKeeperTFSV.md#function-updateposerotate) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & rot) <br> |


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




### function ActorPoseKeeperTFGSV 

```C++
al::ActorPoseKeeperTFGSV::ActorPoseKeeperTFGSV () 
```




<hr>



### function calcBaseMtx 

```C++
virtual void al::ActorPoseKeeperTFGSV::calcBaseMtx (
    sead::Matrix34f * out
) 
```



Implements [*al::ActorPoseKeeperTFSV::calcBaseMtx*](classal_1_1ActorPoseKeeperTFSV.md#function-calcbasemtx)


<hr>



### function getGravity 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperTFGSV::getGravity () const
```



Implements [*al::ActorPoseKeeperBase::getGravity*](classal_1_1ActorPoseKeeperBase.md#function-getgravity)


<hr>



### function getGravityPtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperTFGSV::getGravityPtr () 
```



Implements [*al::ActorPoseKeeperBase::getGravityPtr*](classal_1_1ActorPoseKeeperBase.md#function-getgravityptr)


<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/LiveActor/alActorPoseKeeper.h`

