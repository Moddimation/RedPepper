

# Struct sead::Atomic&lt; T \* &gt;

**template &lt;class T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Atomic&lt; T \* &gt;**](structsead_1_1_atomic_3_01_t_01_5_01_4.md)



_Specialization for pointer types._ 

* `#include <seadAtomic.h>`



Inherits the following classes: [sead::AtomicBase](structsead_1_1_atomic_base.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|  T & | [**operator\***](#function-operator) () const<br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |


## Public Functions inherited from sead::AtomicBase

See [sead::AtomicBase](structsead_1_1_atomic_base.md)

| Type | Name |
| ---: | :--- |
|   | [**AtomicBase**](structsead_1_1_atomic_base.md#function-atomicbase-13) (T value) <br> |
|   | [**AtomicBase**](structsead_1_1_atomic_base.md#function-atomicbase-23) ([**AtomicDirectInitTag**](structsead_1_1_atomic_direct_init_tag.md), T value) <br>_Directly initialises the underlying atomic with the specified value._  |
|   | [**AtomicBase**](structsead_1_1_atomic_base.md#function-atomicbase-33) (const [**AtomicBase**](structsead_1_1_atomic_base.md) & rhs) <br> |
|  bool | [**compareExchange**](structsead_1_1_atomic_base.md#function-compareexchange) (T expected, T desired, T \* original=nullptr) <br>_Load the current value and if it is equal to_ `expected` _, store_`desired` _as if with memory\_order\_relaxed._ |
|  T | [**exchange**](structsead_1_1_atomic_base.md#function-exchange) (T value) <br>_Exchange/swap the current value, as if with memory\_order\_relaxed._  |
|  T | [**load**](structsead_1_1_atomic_base.md#function-load) () const<br>_Load the current value, as if with memory\_order\_relaxed._  |
|   | [**operator T**](structsead_1_1_atomic_base.md#function-operator-t) () const<br> |
|  [**AtomicBase**](structsead_1_1_atomic_base.md) & | [**operator=**](structsead_1_1_atomic_base.md#function-operator) (const [**AtomicBase**](structsead_1_1_atomic_base.md) & rhs) <br> |
|  [**AtomicBase**](structsead_1_1_atomic_base.md) & | [**operator=**](structsead_1_1_atomic_base.md#function-operator_1) (T value) <br> |
|  void | [**store**](structsead_1_1_atomic_base.md#function-store) (T value) <br>_Store a new value, as if with memory\_order\_relaxed._  |
|  void | [**storeNonAtomic**](structsead_1_1_atomic_base.md#function-storenonatomic) (T value) <br>_Non-atomically store a new value._  |






















































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

