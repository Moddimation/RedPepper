

# Struct sead::AtomicBase

**template &lt;class T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**AtomicBase**](structsead_1_1AtomicBase.md)










Inherited by the following classes: [sead::Atomic](structsead_1_1Atomic.md),  [sead::Atomic](structsead_1_1Atomic.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**AtomicBase**](#function-atomicbase-13) (T value) <br> |
|   | [**AtomicBase**](#function-atomicbase-23) ([**AtomicDirectInitTag**](structsead_1_1AtomicDirectInitTag.md), T value) <br> |
|   | [**AtomicBase**](#function-atomicbase-33) (const [**AtomicBase**](structsead_1_1AtomicBase.md) & rhs) <br> |
|  bool | [**compareExchange**](#function-compareexchange) (T expected, T desired, T \* original=nullptr) <br> |
|  T | [**exchange**](#function-exchange) (T value) <br> |
|  T | [**load**](#function-load) () const<br>_Load the current value, as if with memory\_order\_relaxed._  |
|   | [**operator T**](#function-operator-t) () const<br> |
|  [**AtomicBase**](structsead_1_1AtomicBase.md) & | [**operator=**](#function-operator) (const [**AtomicBase**](structsead_1_1AtomicBase.md) & rhs) <br> |
|  [**AtomicBase**](structsead_1_1AtomicBase.md) & | [**operator=**](#function-operator_1) (T value) <br> |
|  void | [**store**](#function-store) (T value) <br>_Store a new value, as if with memory\_order\_relaxed._  |
|  void | [**storeNonAtomic**](#function-storenonatomic) (T value) <br>_Non-atomically store a new value._  |




























## Public Functions Documentation




### function AtomicBase [1/3]

```C++
sead::AtomicBase::AtomicBase (
    T value
) 
```




<hr>



### function AtomicBase [2/3]

```C++
sead::AtomicBase::AtomicBase (
    AtomicDirectInitTag,
    T value
) 
```



Directly initialises the underlying atomic with the specified value. Note that initialisation is not atomic. 


        

<hr>



### function AtomicBase [3/3]

```C++
inline sead::AtomicBase::AtomicBase (
    const AtomicBase & rhs
) 
```




<hr>



### function compareExchange 

```C++
bool sead::AtomicBase::compareExchange (
    T expected,
    T desired,
    T * original=nullptr
) 
```



Load the current value and if it is equal to `expected`, store `desired` as if with memory\_order\_relaxed. Otherwise, this sets `original` to the current value. 

**Parameters:**


* `expected` The value expected to be found in the atomic object, and to be replaced. 
* `desired` The new value to store in the atomic object if `expected` was found. 
* `original` The value that was found in the atomic object if the comparison fails. May be null. Note that this is only updated when false is returned. 



**Returns:**

true if and only if the value was modified 





        

<hr>



### function exchange 

```C++
T sead::AtomicBase::exchange (
    T value
) 
```



Exchange/swap the current value, as if with memory\_order\_relaxed. 

**Returns:**

the previous value 





        

<hr>



### function load 

_Load the current value, as if with memory\_order\_relaxed._ 
```C++
T sead::AtomicBase::load () const
```




<hr>



### function operator T 

```C++
inline sead::AtomicBase::operator T () const
```




<hr>



### function operator= 

```C++
inline AtomicBase & sead::AtomicBase::operator= (
    const AtomicBase & rhs
) 
```




<hr>



### function operator= 

```C++
inline AtomicBase & sead::AtomicBase::operator= (
    T value
) 
```




<hr>



### function store 

_Store a new value, as if with memory\_order\_relaxed._ 
```C++
void sead::AtomicBase::store (
    T value
) 
```




<hr>



### function storeNonAtomic 

_Non-atomically store a new value._ 
```C++
void sead::AtomicBase::storeNonAtomic (
    T value
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/thread/seadAtomic.h`

