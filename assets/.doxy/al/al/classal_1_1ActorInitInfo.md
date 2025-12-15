

# Class al::ActorInitInfo



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ActorInitInfo**](classal_1_1ActorInitInfo.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_10**](#variable-_10)  <br> |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_4**](#variable-_4)  <br> |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_8**](#variable-_8)  <br> |
|  [**void**](structal_1_1NameToCreator.md) \* | [**\_C**](#variable-_c)  <br> |
|  [**const**](structal_1_1NameToCreator.md) [**PlacementInfo**](classal_1_1ByamlIter.md) \* | [**mPlacementInfo**](#variable-mplacementinfo)  <br> |
|  [**int**](structal_1_1NameToCreator.md) | [**mViewId**](#variable-mviewid)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ActorInitInfo**](#function-actorinitinfo) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initNew**](#function-initnew) ([**const**](structal_1_1NameToCreator.md) [**PlacementInfo**](classal_1_1ByamlIter.md) \* placement, [**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & baseInfo) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initViewIdHost**](#function-initviewidhost) ([**const**](structal_1_1NameToCreator.md) [**PlacementInfo**](classal_1_1ByamlIter.md) \* placement, [**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & hostInfo) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**initViewIdSelf**](#function-initviewidself) ([**const**](structal_1_1NameToCreator.md) [**PlacementInfo**](classal_1_1ByamlIter.md) \* placement, [**const**](structal_1_1NameToCreator.md) [**ActorInitInfo**](classal_1_1ActorInitInfo.md) & hostInfo) <br> |




























## Public Attributes Documentation




### variable \_10 

```C++
void* al::ActorInitInfo::_10;
```




<hr>



### variable \_4 

```C++
void* al::ActorInitInfo::_4;
```




<hr>



### variable \_8 

```C++
void* al::ActorInitInfo::_8;
```




<hr>



### variable \_C 

```C++
void* al::ActorInitInfo::_C;
```




<hr>



### variable mPlacementInfo 

```C++
const PlacementInfo* al::ActorInitInfo::mPlacementInfo;
```




<hr>



### variable mViewId 

```C++
int al::ActorInitInfo::mViewId;
```




<hr>
## Public Functions Documentation




### function ActorInitInfo 

```C++
al::ActorInitInfo::ActorInitInfo () 
```




<hr>



### function initNew 

```C++
void al::ActorInitInfo::initNew (
    const  PlacementInfo * placement,
    const  ActorInitInfo & baseInfo
) 
```




<hr>



### function initViewIdHost 

```C++
void al::ActorInitInfo::initViewIdHost (
    const  PlacementInfo * placement,
    const  ActorInitInfo & hostInfo
) 
```




<hr>



### function initViewIdSelf 

```C++
void al::ActorInitInfo::initViewIdSelf (
    const  PlacementInfo * placement,
    const  ActorInitInfo & hostInfo
) 
```




<hr>## Friends Documentation





### friend getPlacementInfo 

```C++
const  PlacementInfo & al::ActorInitInfo::getPlacementInfo (
    const  ActorInitInfo & info
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/LiveActor/alActorInitInfo.h`

