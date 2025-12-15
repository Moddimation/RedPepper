

# Class al::RailMoveMovement



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**RailMoveMovement**](classal_1_1RailMoveMovement.md)








Inherits the following classes: [al::HostStateBase](classal_1_1HostStateBase.md)


















































































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**RailMoveMovement**](#function-railmovemovement) ([**LiveActor**](classal_1_1LiveActor.md) \* host, [**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* speedParamName="Arg0", [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* moveTypeParamName="Arg1") <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**exeMove**](#function-exemove) () <br> |


## Public Functions inherited from al::HostStateBase

See [al::HostStateBase](classal_1_1HostStateBase.md)

| Type | Name |
| ---: | :--- |
|   | [**HostStateBase**](classal_1_1HostStateBase.md#function-hoststatebase) ([**T**](structal_1_1NameToCreator.md) \* host, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |


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


































## Protected Attributes inherited from al::HostStateBase

See [al::HostStateBase](classal_1_1HostStateBase.md)

| Type | Name |
| ---: | :--- |
|  [**T**](structal_1_1NameToCreator.md) \*[**const**](structal_1_1NameToCreator.md) | [**mHost**](classal_1_1HostStateBase.md#variable-mhost)  <br> |


































































































## Public Functions Documentation




### function RailMoveMovement 

```C++
al::RailMoveMovement::RailMoveMovement (
    LiveActor * host,
    const  ActorInitInfo & info,
    const  char * speedParamName="Arg0",
    const  char * moveTypeParamName="Arg1"
) 
```




<hr>



### function exeMove 

```C++
void al::RailMoveMovement::exeMove () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Rail/alRailMoveMovement.h`

