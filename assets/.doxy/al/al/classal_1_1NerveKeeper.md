

# Class al::NerveKeeper



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**NerveKeeper**](classal_1_1NerveKeeper.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**NerveKeeper**](#function-nervekeeper) ([**IUseNerve**](classal_1_1IUseNerve.md) \* host, [**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* nrv, [**int**](structal_1_1NameToCreator.md) maxNerveStates=0) <br> |
|  [**NerveActionCtrl**](classal_1_1NerveActionCtrl.md) \* | [**getActionCtrl**](#function-getactionctrl) () <br> |
|  [**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* | [**getCurrentNerve**](#function-getcurrentnerve) () const<br> |
|  [**IUseNerve**](classal_1_1IUseNerve.md) \* | [**getHost**](#function-gethost) () <br> |
|  [**NerveStateCtrl**](classal_1_1NerveStateCtrl.md) \* | [**getStateCtrl**](#function-getstatectrl) () <br> |
|  [**int**](structal_1_1NameToCreator.md) | [**getStep**](#function-getstep) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNerveAction**](#function-initnerveaction) ([**NerveActionCtrl**](classal_1_1NerveActionCtrl.md) \* p) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**setNerve**](#function-setnerve) ([**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* nerve) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**tryChangeNerve**](#function-trychangenerve) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**update**](#function-update) () <br> |




























## Public Functions Documentation




### function NerveKeeper 

```C++
al::NerveKeeper::NerveKeeper (
    IUseNerve * host,
    const  Nerve * nrv,
    int maxNerveStates=0
) 
```




<hr>



### function getActionCtrl 

```C++
inline NerveActionCtrl * al::NerveKeeper::getActionCtrl () 
```




<hr>



### function getCurrentNerve 

```C++
const  Nerve * al::NerveKeeper::getCurrentNerve () const
```




<hr>



### function getHost 

```C++
inline IUseNerve * al::NerveKeeper::getHost () 
```




<hr>



### function getStateCtrl 

```C++
inline NerveStateCtrl * al::NerveKeeper::getStateCtrl () 
```




<hr>



### function getStep 

```C++
inline int al::NerveKeeper::getStep () 
```




<hr>



### function initNerveAction 

```C++
inline void al::NerveKeeper::initNerveAction (
    NerveActionCtrl * p
) 
```




<hr>



### function setNerve 

```C++
void al::NerveKeeper::setNerve (
    const  Nerve * nerve
) 
```




<hr>



### function tryChangeNerve 

```C++
void al::NerveKeeper::tryChangeNerve () 
```




<hr>



### function update 

```C++
void al::NerveKeeper::update () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Nerve/alNerveKeeper.h`

