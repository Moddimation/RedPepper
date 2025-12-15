

# Class al::NerveStateBase



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**NerveStateBase**](classal_1_1NerveStateBase.md)








Inherits the following classes: [al::NerveExecutor](classal_1_1NerveExecutor.md)


Inherited by the following classes: [al::HostStateBase](classal_1_1HostStateBase.md),  [al::ActorStateBase](classal_1_1ActorStateBase.md),  [al::HostStateBase](classal_1_1HostStateBase.md)








































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**NerveStateBase**](#function-nervestatebase) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**appear**](#function-appear) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**control**](#function-control) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**init**](#function-init) () <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isDead**](#function-isdead) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**kill**](#function-kill) () <br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**update**](#function-update) () <br> |


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
















































































## Public Functions Documentation




### function NerveStateBase 

```C++
al::NerveStateBase::NerveStateBase (
    const  char * name
) 
```




<hr>



### function appear 

```C++
virtual void al::NerveStateBase::appear () 
```




<hr>



### function control 

```C++
virtual void al::NerveStateBase::control () 
```




<hr>



### function init 

```C++
virtual void al::NerveStateBase::init () 
```




<hr>



### function isDead 

```C++
inline bool al::NerveStateBase::isDead () const
```




<hr>



### function kill 

```C++
virtual void al::NerveStateBase::kill () 
```




<hr>



### function update 

```C++
virtual bool al::NerveStateBase::update () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Nerve/alNerveStateBase.h`

