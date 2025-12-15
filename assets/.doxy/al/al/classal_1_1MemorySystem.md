

# Class al::MemorySystem



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**MemorySystem**](classal_1_1MemorySystem.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](structal_1_1NameToCreator.md) | [**createSceneHeap**](#function-createsceneheap) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* stageName) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**createSceneResourceHeap**](#function-createsceneresourceheap) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* stageName) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**createSequenceHeap**](#function-createsequenceheap) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**destroyCourseSelect**](#function-destroycourseselect) () <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**destroySceneHeap**](#function-destroysceneheap) ([**bool**](structal_1_1NameToCreator.md) destroyResource) <br> |
|  [**void**](structal_1_1NameToCreator.md) | [**freeAllSequenceHeap**](#function-freeallsequenceheap) () <br> |
|  sead::FrameHeap \* | [**getCourseSelectHeap**](#function-getcourseselectheap) () const<br> |
|  sead::FrameHeap \* | [**getSceneHeap**](#function-getsceneheap) () const<br> |
|  sead::FrameHeap \* | [**getSceneResourceHeap**](#function-getsceneresourceheap) () const<br> |
|  sead::ExpHeap \* | [**getSequenceHeap**](#function-getsequenceheap) () const<br> |
|  sead::ExpHeap \* | [**getStationedHeap**](#function-getstationedheap) () const<br> |




























## Public Functions Documentation




### function createSceneHeap 

```C++
void al::MemorySystem::createSceneHeap (
    const  char * stageName
) 
```




<hr>



### function createSceneResourceHeap 

```C++
void al::MemorySystem::createSceneResourceHeap (
    const  char * stageName
) 
```




<hr>



### function createSequenceHeap 

```C++
void al::MemorySystem::createSequenceHeap () 
```




<hr>



### function destroyCourseSelect 

```C++
void al::MemorySystem::destroyCourseSelect () 
```




<hr>



### function destroySceneHeap 

```C++
void al::MemorySystem::destroySceneHeap (
    bool destroyResource
) 
```




<hr>



### function freeAllSequenceHeap 

```C++
void al::MemorySystem::freeAllSequenceHeap () 
```




<hr>



### function getCourseSelectHeap 

```C++
inline sead::FrameHeap * al::MemorySystem::getCourseSelectHeap () const
```




<hr>



### function getSceneHeap 

```C++
inline sead::FrameHeap * al::MemorySystem::getSceneHeap () const
```




<hr>



### function getSceneResourceHeap 

```C++
inline sead::FrameHeap * al::MemorySystem::getSceneResourceHeap () const
```




<hr>



### function getSequenceHeap 

```C++
inline sead::ExpHeap * al::MemorySystem::getSequenceHeap () const
```




<hr>



### function getStationedHeap 

```C++
inline sead::ExpHeap * al::MemorySystem::getStationedHeap () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Memory/alMemorySystem.h`

