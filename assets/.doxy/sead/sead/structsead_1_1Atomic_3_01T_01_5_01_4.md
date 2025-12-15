

# Struct sead::Atomic&lt; T \* &gt;

**template &lt;class T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Atomic&lt; T \* &gt;**](structsead_1_1Atomic_3_01T_01_5_01_4.md)



_Specialization for pointer types._ 

* `#include <seadAtomic.h>`



Inherits the following classes: [sead::AtomicBase](structsead_1_1AtomicBase.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|  T & | [**operator\***](#function-operator) () const<br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |


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




### function operator\* 

```C++
inline T & sead::Atomic< T * >::operator* () const
```




<hr>



### function operator-&gt; 

```C++
inline T * sead::Atomic< T * >::operator-> () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/thread/seadAtomic.h`

