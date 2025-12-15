

# Class al::AsyncFunctorThread



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**AsyncFunctorThread**](classal_1_1AsyncFunctorThread.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**AsyncFunctorThread**](#function-asyncfunctorthread) ([**const**](structal_1_1NameToCreator.md) sead::SafeString & name, [**const**](structal_1_1NameToCreator.md) [**FunctorBase**](classal_1_1FunctorBase.md) & functor, [**int**](structal_1_1NameToCreator.md)) <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isDone**](#function-isdone) () const<br> |
|  [**void**](structal_1_1NameToCreator.md) | [**start**](#function-start) () <br> |
| virtual  | [**~AsyncFunctorThread**](#function-asyncfunctorthread) () <br> |




























## Public Functions Documentation




### function AsyncFunctorThread 

```C++
al::AsyncFunctorThread::AsyncFunctorThread (
    const sead::SafeString & name,
    const  FunctorBase & functor,
    int
) 
```




<hr>



### function isDone 

```C++
inline bool al::AsyncFunctorThread::isDone () const
```




<hr>



### function start 

```C++
void al::AsyncFunctorThread::start () 
```




<hr>



### function ~AsyncFunctorThread 

```C++
virtual al::AsyncFunctorThread::~AsyncFunctorThread () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/System/alAsyncFunctorThread.h`

