

# Class sead::ScopedLock

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ScopedLock**](classsead_1_1ScopedLock.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ScopedLock**](#function-scopedlock-12) (T \* lock) <br> |
|   | [**ScopedLock**](#function-scopedlock-22) (const [**ScopedLock**](classsead_1_1ScopedLock.md) & other) <br> |
|  [**ScopedLock**](classsead_1_1ScopedLock.md) & | [**operator=**](#function-operator) (const [**ScopedLock**](classsead_1_1ScopedLock.md) & other) <br> |
| virtual  | [**~ScopedLock**](#function-scopedlock) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  T \* | [**mLocked**](#variable-mlocked)  <br> |




















## Public Functions Documentation




### function ScopedLock [1/2]

```C++
inline explicit sead::ScopedLock::ScopedLock (
    T * lock
) 
```




<hr>



### function ScopedLock [2/2]

```C++
sead::ScopedLock::ScopedLock (
    const ScopedLock & other
) 
```




<hr>



### function operator= 

```C++
ScopedLock & sead::ScopedLock::operator= (
    const ScopedLock & other
) 
```




<hr>



### function ~ScopedLock 

```C++
inline virtual sead::ScopedLock::~ScopedLock () 
```




<hr>
## Protected Attributes Documentation




### variable mLocked 

```C++
T* sead::ScopedLock< T >::mLocked;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadScopedLock.h`

