

# Class al::NerveAction



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**NerveAction**](classal_1_1NerveAction.md)








Inherits the following classes: [al::Nerve](structal_1_1Nerve.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**NerveAction**](#function-nerveaction) () <br> |
| virtual [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* | [**getName**](#function-getname) () const = 0<br> |


## Public Functions inherited from al::Nerve

See [al::Nerve](structal_1_1Nerve.md)

| Type | Name |
| ---: | :--- |
| virtual [**void**](structal_1_1NameToCreator.md) | [**execute**](structal_1_1Nerve.md#function-execute) ([**NerveKeeper**](classal_1_1NerveKeeper.md) \* nerveKeeper) const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**executeOnEnd**](structal_1_1Nerve.md#function-executeonend) ([**NerveKeeper**](classal_1_1NerveKeeper.md) \* nerveKeeper) const<br> |






















































## Public Functions Documentation




### function NerveAction 

```C++
al::NerveAction::NerveAction () 
```




<hr>



### function getName 

```C++
virtual const  char * al::NerveAction::getName () const = 0
```




<hr>## Friends Documentation





### friend NerveActionCollector 

```C++
class al::NerveAction::NerveActionCollector (
    alNerveFunction::NerveActionCollector
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Nerve/alNerveActionCtrl.h`

