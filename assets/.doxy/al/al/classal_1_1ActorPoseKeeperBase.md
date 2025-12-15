

# Class al::ActorPoseKeeperBase



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md)










Inherited by the following classes: [al::ActorPoseKeeperTFSV](classal_1_1ActorPoseKeeperTFSV.md),  [al::ActorPoseKeeperTQSV](classal_1_1ActorPoseKeeperTQSV.md),  [al::ActorPoseKeeperTRSV](classal_1_1ActorPoseKeeperTRSV.md)


















## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**const**](structal_1_1NameToCreator.md) sead::Vector3f | [**sDefaultGravity**](#variable-sdefaultgravity)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ActorPoseKeeperBase**](#function-actorposekeeperbase) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcBaseMtx**](#function-calcbasemtx) (sead::Matrix34f \* out) = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**copyPose**](#function-copypose) ([**const**](structal_1_1NameToCreator.md) [**ActorPoseKeeperBase**](classal_1_1ActorPoseKeeperBase.md) \* from) <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getFront**](#function-getfront) () const<br> |
| virtual sead::Vector3f \* | [**getFrontPtr**](#function-getfrontptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getGravity**](#function-getgravity) () const<br> |
| virtual sead::Vector3f \* | [**getGravityPtr**](#function-getgravityptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Quatf & | [**getQuat**](#function-getquat) () const<br> |
| virtual sead::Quatf \* | [**getQuatPtr**](#function-getquatptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getRotate**](#function-getrotate) () const<br> |
| virtual sead::Vector3f \* | [**getRotatePtr**](#function-getrotateptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getScale**](#function-getscale) () const<br> |
| virtual sead::Vector3f \* | [**getScalePtr**](#function-getscaleptr) () <br> |
|  [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getTrans**](#function-gettrans) () const<br> |
|  sead::Vector3f \* | [**getTransPtr**](#function-gettransptr) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) sead::Vector3f & | [**getVelocity**](#function-getvelocity) () const<br> |
| virtual sead::Vector3f \* | [**getVelocityPtr**](#function-getvelocityptr) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseMtx**](#function-updateposemtx) ([**const**](structal_1_1NameToCreator.md) sead::Matrix34f \* mtx) = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseQuat**](#function-updateposequat) ([**const**](structal_1_1NameToCreator.md) sead::Quatf & quat) = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**updatePoseRotate**](#function-updateposerotate) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & rot) = 0<br> |




























## Public Static Attributes Documentation




### variable sDefaultGravity 

```C++
const sead::Vector3f al::ActorPoseKeeperBase::sDefaultGravity;
```




<hr>
## Public Functions Documentation




### function ActorPoseKeeperBase 

```C++
al::ActorPoseKeeperBase::ActorPoseKeeperBase () 
```




<hr>



### function calcBaseMtx 

```C++
virtual void al::ActorPoseKeeperBase::calcBaseMtx (
    sead::Matrix34f * out
) = 0
```




<hr>



### function copyPose 

```C++
virtual void al::ActorPoseKeeperBase::copyPose (
    const  ActorPoseKeeperBase * from
) 
```




<hr>



### function getFront 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperBase::getFront () const
```




<hr>



### function getFrontPtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperBase::getFrontPtr () 
```




<hr>



### function getGravity 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperBase::getGravity () const
```




<hr>



### function getGravityPtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperBase::getGravityPtr () 
```




<hr>



### function getQuat 

```C++
virtual const sead::Quatf & al::ActorPoseKeeperBase::getQuat () const
```




<hr>



### function getQuatPtr 

```C++
virtual sead::Quatf * al::ActorPoseKeeperBase::getQuatPtr () 
```




<hr>



### function getRotate 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperBase::getRotate () const
```




<hr>



### function getRotatePtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperBase::getRotatePtr () 
```




<hr>



### function getScale 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperBase::getScale () const
```




<hr>



### function getScalePtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperBase::getScalePtr () 
```




<hr>



### function getTrans 

```C++
inline const sead::Vector3f & al::ActorPoseKeeperBase::getTrans () const
```




<hr>



### function getTransPtr 

```C++
inline sead::Vector3f * al::ActorPoseKeeperBase::getTransPtr () 
```




<hr>



### function getVelocity 

```C++
virtual const sead::Vector3f & al::ActorPoseKeeperBase::getVelocity () const
```




<hr>



### function getVelocityPtr 

```C++
virtual sead::Vector3f * al::ActorPoseKeeperBase::getVelocityPtr () 
```




<hr>



### function updatePoseMtx 

```C++
virtual void al::ActorPoseKeeperBase::updatePoseMtx (
    const sead::Matrix34f * mtx
) = 0
```




<hr>



### function updatePoseQuat 

```C++
virtual void al::ActorPoseKeeperBase::updatePoseQuat (
    const sead::Quatf & quat
) = 0
```




<hr>



### function updatePoseRotate 

```C++
virtual void al::ActorPoseKeeperBase::updatePoseRotate (
    const sead::Vector3f & rot
) = 0
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/LiveActor/alActorPoseKeeper.h`

