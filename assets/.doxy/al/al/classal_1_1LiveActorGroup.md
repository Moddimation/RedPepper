

# Class al::LiveActorGroup



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**LiveActorGroup**](classal_1_1LiveActorGroup.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**LiveActorGroup**](#function-liveactorgroup) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* name, [**int**](structal_1_1NameToCreator.md) bufSize) <br> |
|  sead::PtrArray&lt; [**T**](structal_1_1NameToCreator.md) &gt; & | [**getArray**](#function-getarray) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**killAll**](#function-killall) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**makeActorDeadAll**](#function-makeactordeadall) () <br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**registerActor**](#function-registeractor) ([**LiveActor**](classal_1_1LiveActor.md) \* actor) <br> |




























## Public Functions Documentation




### function LiveActorGroup 

```C++
al::LiveActorGroup::LiveActorGroup (
    const  char * name,
    int bufSize
) 
```




<hr>



### function getArray 

```C++
template<typename  T>
inline sead::PtrArray< T > & al::LiveActorGroup::getArray () 
```




<hr>



### function killAll 

```C++
void al::LiveActorGroup::killAll () 
```




<hr>



### function makeActorDeadAll 

```C++
void al::LiveActorGroup::makeActorDeadAll () 
```




<hr>



### function registerActor 

```C++
virtual void al::LiveActorGroup::registerActor (
    LiveActor * actor
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/LiveActor/alLiveActorGroup.h`

