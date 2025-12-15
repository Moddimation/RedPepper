

# Class al::ISceneObj



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ISceneObj**](classal_1_1ISceneObj.md)










Inherited by the following classes: [al::CameraDirector](classal_1_1CameraDirector.md),  [al::SwitchAreaDirector](classal_1_1SwitchAreaDirector.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* | [**getSceneObjName**](#function-getsceneobjname) () const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initAfterPlacementSceneObj**](#function-initafterplacementsceneobj) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**initSceneObj**](#function-initsceneobj) () <br> |




























## Public Functions Documentation




### function getSceneObjName 

```C++
virtual const  char * al::ISceneObj::getSceneObjName () const = 0
```




<hr>



### function initAfterPlacementSceneObj 

```C++
inline virtual void al::ISceneObj::initAfterPlacementSceneObj (
    const  ActorInitInfo & info
) 
```




<hr>



### function initSceneObj 

```C++
inline virtual void al::ISceneObj::initSceneObj () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Scene/alISceneObj.h`

