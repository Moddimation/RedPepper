

# Class al::FunctorV0M

**template &lt;[**typename**](structal_1_1NameToCreator.md) [**T**](structal_1_1NameToCreator.md), [**typename**](structal_1_1NameToCreator.md) [**F**](structal_1_1NameToCreator.md)&gt;**



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**FunctorV0M**](classal_1_1FunctorV0M.md)








Inherits the following classes: [al::FunctorBase](classal_1_1FunctorBase.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FunctorV0M**](#function-functorv0m) ([**T**](structal_1_1NameToCreator.md) parent, [**F**](structal_1_1NameToCreator.md) funcPtr) <br> |
| virtual [**FunctorV0M**](classal_1_1FunctorV0M.md) \* | [**clone**](#function-clone) () const<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**operator()**](#function-operator) () const<br> |


## Public Functions inherited from al::FunctorBase

See [al::FunctorBase](classal_1_1FunctorBase.md)

| Type | Name |
| ---: | :--- |
| virtual [**FunctorBase**](classal_1_1FunctorBase.md) \* | [**clone**](classal_1_1FunctorBase.md#function-clone) () const = 0<br> |
| virtual [**void**](structal_1_1NameToCreator.md) | [**operator()**](classal_1_1FunctorBase.md#function-operator) () const = 0<br> |






















































## Public Functions Documentation




### function FunctorV0M 

```C++
inline al::FunctorV0M::FunctorV0M (
    T parent,
    F funcPtr
) 
```




<hr>



### function clone 

```C++
inline virtual FunctorV0M * al::FunctorV0M::clone () const
```



Implements [*al::FunctorBase::clone*](classal_1_1FunctorBase.md#function-clone)


<hr>



### function operator() 

```C++
inline virtual void al::FunctorV0M::operator() () const
```



Implements [*al::FunctorBase::operator()*](classal_1_1FunctorBase.md#function-operator)


<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Functor/alFunctorV0M.h`

