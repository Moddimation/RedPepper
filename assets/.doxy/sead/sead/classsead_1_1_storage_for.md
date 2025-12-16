

# Class sead::StorageFor

**template &lt;typename T, bool AutoDestruct&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**StorageFor**](classsead_1_1_storage_for.md)



_Provides suitably aligned uninitialized storage for a type T._ [More...](#detailed-description)

* `#include <seadStorageFor.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**StorageFor**](#function-storagefor) () <br> |




























## Detailed Description


Use this as a std::aligned\_storage replacement that is easier to use and less error prone for common cases (std::aligned\_storage\_t&lt;sizeof(T), alignof(T)&gt;). 


    
## Public Functions Documentation




### function StorageFor 

```C++
sead::StorageFor::StorageFor () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadStorageFor.h`

