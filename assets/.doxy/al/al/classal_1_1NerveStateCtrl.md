

# Class al::NerveStateCtrl



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**NerveStateCtrl**](classal_1_1NerveStateCtrl.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**NerveStateCtrl**](#function-nervestatectrl) ([**int**](structal_1_1NameToCreator.md) capacity) <br> |
|  [**const**](structal_1_1NameToCreator.md) State \* | [**getCurrentState**](#function-getcurrentstate) () const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isCurrentStateEnd**](#function-iscurrentstateend) () const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**startState**](#function-startstate) ([**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* nerve) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**tryEndCurrentState**](#function-tryendcurrentstate) () <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**updateCurrentState**](#function-updatecurrentstate) () <br> |




























## Public Functions Documentation




### function NerveStateCtrl 

```C++
al::NerveStateCtrl::NerveStateCtrl (
    int capacity
) 
```




<hr>



### function getCurrentState 

```C++
inline const State * al::NerveStateCtrl::getCurrentState () const
```




<hr>



### function isCurrentStateEnd 

```C++
bool al::NerveStateCtrl::isCurrentStateEnd () const
```




<hr>



### function startState 

```C++
void al::NerveStateCtrl::startState (
    const  Nerve * nerve
) 
```




<hr>



### function tryEndCurrentState 

```C++
void al::NerveStateCtrl::tryEndCurrentState () 
```




<hr>



### function updateCurrentState 

```C++
bool al::NerveStateCtrl::updateCurrentState () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Nerve/alNerveStateCtrl.h`

