

# Class al::AreaObj



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**AreaObj**](classal_1_1AreaObj.md)








Inherits the following classes: [al::IUseStageSwitch](classal_1_1IUseStageSwitch.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**AreaObj**](#function-areaobj) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name) <br> |
| virtual [**StageSwitchKeeper**](classal_1_1StageSwitchKeeper.md) \* | [**getStageSwitchKeeper**](#function-getstageswitchkeeper) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**init**](#function-init) ([**const**](structal_1_1NameToCreator.md) [**AreaInitInfo**](classal_1_1AreaInitInfo.md) & info) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initStageSwitchKeeper**](#function-initstageswitchkeeper) () <br> |
| virtual [**bool**](structal_1_1NameToCreator.md) | [**isInVolume**](#function-isinvolume) ([**const**](structal_1_1NameToCreator.md) sead::Vector3f & trans) const<br> |


## Public Functions inherited from al::IUseStageSwitch

See [al::IUseStageSwitch](classal_1_1IUseStageSwitch.md)

| Type | Name |
| ---: | :--- |
| virtual [**StageSwitchKeeper**](classal_1_1StageSwitchKeeper.md) \* | [**getStageSwitchKeeper**](classal_1_1IUseStageSwitch.md#function-getstageswitchkeeper) () const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initStageSwitchKeeper**](classal_1_1IUseStageSwitch.md#function-initstageswitchkeeper) () = 0<br> |






















































## Public Functions Documentation




### function AreaObj 

```C++
al::AreaObj::AreaObj (
    const  char * name
) 
```




<hr>



### function getStageSwitchKeeper 

```C++
virtual StageSwitchKeeper * al::AreaObj::getStageSwitchKeeper () const
```



Implements [*al::IUseStageSwitch::getStageSwitchKeeper*](classal_1_1IUseStageSwitch.md#function-getstageswitchkeeper)


<hr>



### function init 

```C++
virtual void al::AreaObj::init (
    const  AreaInitInfo & info
) 
```




<hr>



### function initStageSwitchKeeper 

```C++
virtual void al::AreaObj::initStageSwitchKeeper () 
```



Implements [*al::IUseStageSwitch::initStageSwitchKeeper*](classal_1_1IUseStageSwitch.md#function-initstageswitchkeeper)


<hr>



### function isInVolume 

```C++
virtual bool al::AreaObj::isInVolume (
    const sead::Vector3f & trans
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/AreaObj/alAreaObj.h`

