

# Class al::WipeSimple



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**WipeSimple**](classal_1_1WipeSimple.md)








Inherits the following classes: [al::LayoutActor](classal_1_1LayoutActor.md)


















































































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**WipeSimple**](#function-wipesimple) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* archive, [**const**](structal_1_1NameToCreator.md) [**LayoutInitInfo**](classal_1_1LayoutInitInfo.md) & info, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* suffix=[**nullptr**](structal_1_1NameToCreator.md)) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**appear**](#function-appear) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**exeClose**](#function-execlose) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**exeOpen**](#function-exeopen) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**exeWait**](#function-exewait) () <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isCloseEnd**](#function-iscloseend) () const<br> |


## Public Functions inherited from al::LayoutActor

See [al::LayoutActor](classal_1_1LayoutActor.md)

| Type | Name |
| ---: | :--- |
|   | [**LayoutActor**](classal_1_1LayoutActor.md#function-layoutactor) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**appear**](classal_1_1LayoutActor.md#function-appear) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**calcAnim**](classal_1_1LayoutActor.md#function-calcanim) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**control**](classal_1_1LayoutActor.md#function-control) () <br> |
| virtual [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**getAudioKeeper**](classal_1_1LayoutActor.md#function-getaudiokeeper) () const<br> |
| virtual [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**getEffectKeeper**](classal_1_1LayoutActor.md#function-geteffectkeeper) () const<br> |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1LayoutActor.md#function-getnervekeeper) () const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNerve**](classal_1_1LayoutActor.md#function-initnerve) ([**const**](structal_1_1NameToCreator.md) [**Nerve**](structal_1_1Nerve.md) \* nerve, [**int**](structal_1_1NameToCreator.md) maxNerveStates=0) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**kill**](classal_1_1LayoutActor.md#function-kill) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**movement**](classal_1_1LayoutActor.md#function-movement) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**unk1**](classal_1_1LayoutActor.md#function-unk1) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**unk2**](classal_1_1LayoutActor.md#function-unk2) () <br> |


## Public Functions inherited from al::IUseNerve

See [al::IUseNerve](classal_1_1IUseNerve.md)

| Type | Name |
| ---: | :--- |
| virtual [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**getNerveKeeper**](classal_1_1IUseNerve.md#function-getnervekeeper) () const = 0<br> |


## Public Functions inherited from al::IUseAudioKeeper

See [al::IUseAudioKeeper](classal_1_1IUseAudioKeeper.md)

| Type | Name |
| ---: | :--- |
| virtual [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**getAudioKeeper**](classal_1_1IUseAudioKeeper.md#function-getaudiokeeper) () const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v1**](classal_1_1IUseAudioKeeper.md#function-v1) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**v2**](classal_1_1IUseAudioKeeper.md#function-v2) () <br> |


## Public Functions inherited from al::IUseEffectKeeper

See [al::IUseEffectKeeper](classal_1_1IUseEffectKeeper.md)

| Type | Name |
| ---: | :--- |
| virtual [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**getEffectKeeper**](classal_1_1IUseEffectKeeper.md#function-geteffectkeeper) () const = 0<br> |


































## Protected Attributes inherited from al::LayoutActor

See [al::LayoutActor](classal_1_1LayoutActor.md)

| Type | Name |
| ---: | :--- |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_20**](classal_1_1LayoutActor.md#variable-_20)  <br> |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_24**](classal_1_1LayoutActor.md#variable-_24)  <br> |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_28**](classal_1_1LayoutActor.md#variable-_28)  <br> |
|  [**AudioKeeper**](classal_1_1AudioKeeper.md) \* | [**mAudioKeeper**](classal_1_1LayoutActor.md#variable-maudiokeeper)  <br> |
|  [**EffectKeeper**](classal_1_1EffectKeeper.md) \* | [**mEffectKeeper**](classal_1_1LayoutActor.md#variable-meffectkeeper)  <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**mIsAlive**](classal_1_1LayoutActor.md#variable-misalive)  <br> |
|  sead::SafeString | [**mName**](classal_1_1LayoutActor.md#variable-mname)  <br> |
|  [**NerveKeeper**](classal_1_1NerveKeeper.md) \* | [**mNerveKeeper**](classal_1_1LayoutActor.md#variable-mnervekeeper)  <br> |


































































































## Public Functions Documentation




### function WipeSimple 

```C++
al::WipeSimple::WipeSimple (
    const  char * name,
    const  char * archive,
    const  LayoutInitInfo & info,
    const  char * suffix=nullptr
) 
```




<hr>



### function appear 

```C++
virtual void al::WipeSimple::appear () 
```



Implements [*al::LayoutActor::appear*](classal_1_1LayoutActor.md#function-appear)


<hr>



### function exeClose 

```C++
void al::WipeSimple::exeClose () 
```




<hr>



### function exeOpen 

```C++
void al::WipeSimple::exeOpen () 
```




<hr>



### function exeWait 

```C++
void al::WipeSimple::exeWait () 
```




<hr>



### function isCloseEnd 

```C++
bool al::WipeSimple::isCloseEnd () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Layout/alWipeSimple.h`

