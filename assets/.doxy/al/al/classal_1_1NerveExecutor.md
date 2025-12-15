

# Class al::NerveExecutor



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**NerveExecutor**](classal_1_1NerveExecutor.md)








Inherits the following classes: [al::IUseNerve](classal_1_1IUseNerve.md)


Inherited by the following classes: [al::NerveStateBase](classal_1_1NerveStateBase.md),  [al::Scene](classal_1_1Scene.md),  [al::Sequence](classal_1_1Sequence.md)




















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**NerveExecutor**](#function-nerveexecutor) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](#function-getnervekeeper) () const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNerve**](#function-initnerve) ([**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* nrv, [**int**](structal_1_1NameToCreator.md) step=0) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**updateNerve**](#function-updatenerve) () <br> |
| virtual  | [**~NerveExecutor**](#function-nerveexecutor) () <br> |


## Public Functions inherited from al::IUseNerve

See [al::IUseNerve](classal_1_1IUseNerve.md)

| Type | Name |
| ---: | :--- |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1IUseNerve.md#function-getnervekeeper) () const = 0<br> |






















































## Public Functions Documentation




### function NerveExecutor 

```C++
al::NerveExecutor::NerveExecutor (
    const  char * name
) 
```




<hr>



### function getNerveKeeper 

```C++
virtual NerveKeeper * al::NerveExecutor::getNerveKeeper () const
```



Implements [*al::IUseNerve::getNerveKeeper*](classal_1_1IUseNerve.md#function-getnervekeeper)


<hr>



### function initNerve 

```C++
void al::NerveExecutor::initNerve (
    const  Nerve * nrv,
    int step=0
) 
```




<hr>



### function updateNerve 

```C++
void al::NerveExecutor::updateNerve () 
```




<hr>



### function ~NerveExecutor 

```C++
inline virtual al::NerveExecutor::~NerveExecutor () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Nerve/alNerveExecutor.h`

