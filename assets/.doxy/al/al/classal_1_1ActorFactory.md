

# Class al::ActorFactory



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ActorFactory**](classal_1_1ActorFactory.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ActorFactory**](#function-actorfactory) () <br> |
|  [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* | [**convertName**](#function-convertname) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* objectName) const<br> |
|  CreateActorFuncPtr | [**getCreator**](#function-getcreator) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* objectName) const<br> |




























## Public Functions Documentation




### function ActorFactory 

```C++
al::ActorFactory::ActorFactory () 
```




<hr>



### function convertName 

```C++
const  char * al::ActorFactory::convertName (
    const  char * objectName
) const
```




<hr>



### function getCreator 

```C++
CreateActorFuncPtr al::ActorFactory::getCreator (
    const  char * objectName
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Factory/alActorFactory.h`

