

# Struct sead::Atomic

**template &lt;class T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Atomic**](structsead_1_1Atomic.md)








Inherits the following classes: [sead::AtomicBase](structsead_1_1AtomicBase.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|  T | [**decrement**](#function-decrement) () <br> |
|  T | [**fetchAdd**](#function-fetchadd) (T x) <br> |
|  T | [**fetchAnd**](#function-fetchand) (T x) <br> |
|  T | [**fetchOr**](#function-fetchor) (T x) <br> |
|  T | [**fetchSub**](#function-fetchsub) (T x) <br> |
|  T | [**fetchXor**](#function-fetchxor) (T x) <br> |
|  T | [**increment**](#function-increment) () <br> |
|  bool | [**isBitOn**](#function-isbiton) (unsigned int bit) const<br> |
|  T | [**operator&=**](#function-operator) (T x) <br> |
|  T | [**operator++**](#function-operator_1) () <br> |
|  T | [**operator++**](#function-operator_2) (int) <br> |
|  T | [**operator+=**](#function-operator_3) (T x) <br> |
|  T | [**operator--**](#function-operator-) () <br> |
|  T | [**operator--**](#function-operator-_1) (int) <br> |
|  T | [**operator-=**](#function-operator-) (T x) <br> |
|  T | [**operator^=**](#function-operator_4) (T x) <br> |
|  T | [**operator\|=**](#function-operator_5) (T x) <br> |
|  bool | [**setBitOff**](#function-setbitoff) (unsigned int bit) <br> |
|  bool | [**setBitOn**](#function-setbiton) (unsigned int bit) <br> |


## Public Functions inherited from sead::AtomicBase

See [sead::AtomicBase](structsead_1_1AtomicBase.md)

| Type | Name |
| ---: | :--- |
|   | [**AtomicBase**](structsead_1_1AtomicBase.md#function-atomicbase-13) (T value) <br> |
|   | [**AtomicBase**](structsead_1_1AtomicBase.md#function-atomicbase-23) ([**AtomicDirectInitTag**](structsead_1_1AtomicDirectInitTag.md), T value) <br> |
|   | [**AtomicBase**](structsead_1_1AtomicBase.md#function-atomicbase-33) (const [**AtomicBase**](structsead_1_1AtomicBase.md) & rhs) <br> |
|  bool | [**compareExchange**](structsead_1_1AtomicBase.md#function-compareexchange) (T expected, T desired, T \* original=nullptr) <br> |
|  T | [**exchange**](structsead_1_1AtomicBase.md#function-exchange) (T value) <br> |
|  T | [**load**](structsead_1_1AtomicBase.md#function-load) () const<br>_Load the current value, as if with memory\_order\_relaxed._  |
|   | [**operator T**](structsead_1_1AtomicBase.md#function-operator-t) () const<br> |
|  [**AtomicBase**](structsead_1_1AtomicBase.md) & | [**operator=**](structsead_1_1AtomicBase.md#function-operator) (const [**AtomicBase**](structsead_1_1AtomicBase.md) & rhs) <br> |
|  [**AtomicBase**](structsead_1_1AtomicBase.md) & | [**operator=**](structsead_1_1AtomicBase.md#function-operator_1) (T value) <br> |
|  void | [**store**](structsead_1_1AtomicBase.md#function-store) (T value) <br>_Store a new value, as if with memory\_order\_relaxed._  |
|  void | [**storeNonAtomic**](structsead_1_1AtomicBase.md#function-storenonatomic) (T value) <br>_Non-atomically store a new value._  |






















































## Public Functions Documentation




### function decrement 

```C++
inline T sead::Atomic::decrement () 
```




<hr>



### function fetchAdd 

```C++
T sead::Atomic::fetchAdd (
    T x
) 
```




<hr>



### function fetchAnd 

```C++
T sead::Atomic::fetchAnd (
    T x
) 
```




<hr>



### function fetchOr 

```C++
T sead::Atomic::fetchOr (
    T x
) 
```




<hr>



### function fetchSub 

```C++
T sead::Atomic::fetchSub (
    T x
) 
```




<hr>



### function fetchXor 

```C++
T sead::Atomic::fetchXor (
    T x
) 
```




<hr>



### function increment 

```C++
inline T sead::Atomic::increment () 
```




<hr>



### function isBitOn 

```C++
bool sead::Atomic::isBitOn (
    unsigned int bit
) const
```




<hr>



### function operator&= 

```C++
inline T sead::Atomic::operator&= (
    T x
) 
```




<hr>



### function operator++ 

```C++
inline T sead::Atomic::operator++ () 
```




<hr>



### function operator++ 

```C++
inline T sead::Atomic::operator++ (
    int
) 
```




<hr>



### function operator+= 

```C++
inline T sead::Atomic::operator+= (
    T x
) 
```




<hr>



### function operator-- 

```C++
inline T sead::Atomic::operator-- () 
```




<hr>



### function operator-- 

```C++
inline T sead::Atomic::operator-- (
    int
) 
```




<hr>



### function operator-= 

```C++
inline T sead::Atomic::operator-= (
    T x
) 
```




<hr>



### function operator^= 

```C++
inline T sead::Atomic::operator^= (
    T x
) 
```




<hr>



### function operator\|= 

```C++
inline T sead::Atomic::operator|= (
    T x
) 
```




<hr>



### function setBitOff 

```C++
bool sead::Atomic::setBitOff (
    unsigned int bit
) 
```





**Returns:**

whether the bit was set and is now cleared. 





        

<hr>



### function setBitOn 

```C++
bool sead::Atomic::setBitOn (
    unsigned int bit
) 
```





**Returns:**

whether the bit was cleared and is now set. 





        

<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/thread/seadAtomic.h`

