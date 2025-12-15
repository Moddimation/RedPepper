

# Class al::SceneObjHolder



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**SceneObjHolder**](classal_1_1SceneObjHolder.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**SceneObjHolder**](#function-sceneobjholder) (CreateFunc func, [**int**](structal_1_1NameToCreator.md) size) <br> |
|  [**ISceneObj**](classal_1_1ISceneObj.md) \* | [**create**](#function-create) ([**int**](structal_1_1NameToCreator.md) id) <br> |
|  [**ISceneObj**](classal_1_1ISceneObj.md) \* | [**getObj**](#function-getobj) ([**int**](structal_1_1NameToCreator.md) id) const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initAfterPlacementSceneObj**](#function-initafterplacementsceneobj) ([**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & info) <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isExist**](#function-isexist) ([**int**](structal_1_1NameToCreator.md) id) const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**setObj**](#function-setobj) ([**ISceneObj**](classal_1_1ISceneObj.md) \* obj, [**int**](structal_1_1NameToCreator.md) id) <br> |




























## Public Functions Documentation




### function SceneObjHolder 

```C++
al::SceneObjHolder::SceneObjHolder (
    CreateFunc func,
    int size
) 
```




<hr>



### function create 

```C++
ISceneObj * al::SceneObjHolder::create (
    int id
) 
```




<hr>



### function getObj 

```C++
ISceneObj * al::SceneObjHolder::getObj (
    int id
) const
```




<hr>



### function initAfterPlacementSceneObj 

```C++
void al::SceneObjHolder::initAfterPlacementSceneObj (
    const  ActorInitInfo & info
) 
```




<hr>



### function isExist 

```C++
bool al::SceneObjHolder::isExist (
    int id
) const
```




<hr>



### function setObj 

```C++
void al::SceneObjHolder::setObj (
    ISceneObj * obj,
    int id
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Scene/alSceneObjHolder.h`

