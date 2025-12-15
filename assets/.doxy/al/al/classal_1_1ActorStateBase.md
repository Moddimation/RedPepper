

# Class al::ActorStateBase



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ActorStateBase**](classal_1_1ActorStateBase.md)








Inherits the following classes: [al::NerveStateBase](classal_1_1NerveStateBase.md)






























































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ActorStateBase**](#function-actorstatebase) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name, [**LiveActor**](classal_1_1LiveActor.md) \* host) <br> |


## Public Functions inherited from al::NerveStateBase

See [al::NerveStateBase](classal_1_1NerveStateBase.md)

| Type | Name |
| ---: | :--- |
|   | [**NerveStateBase**](classal_1_1NerveStateBase.md#function-nervestatebase) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**appear**](classal_1_1NerveStateBase.md#function-appear) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**control**](classal_1_1NerveStateBase.md#function-control) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**init**](classal_1_1NerveStateBase.md#function-init) () <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isDead**](classal_1_1NerveStateBase.md#function-isdead) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**kill**](classal_1_1NerveStateBase.md#function-kill) () <br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**update**](classal_1_1NerveStateBase.md#function-update) () <br> |


## Public Functions inherited from al::NerveExecutor

See [al::NerveExecutor](classal_1_1NerveExecutor.md)

| Type | Name |
| ---: | :--- |
|   | [**NerveExecutor**](classal_1_1NerveExecutor.md#function-nerveexecutor) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1NerveExecutor.md#function-getnervekeeper) () const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNerve**](classal_1_1NerveExecutor.md#function-initnerve) ([**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* nrv, [**int**](structal_1_1NameToCreator.md) step=0) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**updateNerve**](classal_1_1NerveExecutor.md#function-updatenerve) () <br> |
| virtual  | [**~NerveExecutor**](classal_1_1NerveExecutor.md#function-nerveexecutor) () <br> |


## Public Functions inherited from al::IUseNerve

See [al::IUseNerve](classal_1_1IUseNerve.md)

| Type | Name |
| ---: | :--- |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1IUseNerve.md#function-getnervekeeper) () const = 0<br> |


























## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**LiveActor**](classal_1_1LiveActor.md) \*[**const**](structal_1_1NameToCreator.md) | [**mHost**](#variable-mhost)  <br> |
















































































## Public Functions Documentation




### function ActorStateBase 

```C++
inline al::ActorStateBase::ActorStateBase (
    const  char * name,
    LiveActor * host
) 
```




<hr>
## Protected Attributes Documentation




### variable mHost 

```C++
LiveActor* const al::ActorStateBase::mHost;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Nerve/alActorStateBase.h`

