

# File seadRuntimeTypeInfo.h



[**FileList**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadRuntimeTypeInfo.h**](sead_runtime_type_info_8h.md)

[Go to the source code of this file](sead_runtime_type_info_8h_source.md)



* `#include <basis/seadTypes.h>`













## Namespaces

| Type | Name |
| ---: | :--- |
| namespace | [**sead**](namespacesead.md) <br> |
| namespace | [**RuntimeTypeInfo**](namespacesead_1_1_runtime_type_info.md) <br> |


## Classes

| Type | Name |
| ---: | :--- |
| class | [**Derive**](classsead_1_1_runtime_type_info_1_1_derive.md) &lt;typename BaseType&gt;<br> |
| class | [**Interface**](classsead_1_1_runtime_type_info_1_1_interface.md) <br> |
| class | [**Root**](classsead_1_1_runtime_type_info_1_1_root.md) <br> |

















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**SEAD\_RTTI\_BASE**](sead_runtime_type_info_8h.md#define-sead_rtti_base) (CLASS) `/* multi line expression */`<br>_Use this macro to declare sead RTTI machinery for a base class._  |
| define  | [**SEAD\_RTTI\_OVERRIDE**](sead_runtime_type_info_8h.md#define-sead_rtti_override) (CLASS, BASE) `/* multi line expression */`<br>_Use this macro to declare sead RTTI machinery for a derived class._  |

## Macro Definition Documentation





### define SEAD\_RTTI\_BASE 

_Use this macro to declare sead RTTI machinery for a base class._ 
```C++
#define SEAD_RTTI_BASE (
    CLASS
) `/* multi line expression */`
```



You must use SEAD\_RTTI\_OVERRIDE in all derived classes. 

**Parameters:**


* `CLASS` The name of the class. 




        

<hr>



### define SEAD\_RTTI\_OVERRIDE 

_Use this macro to declare sead RTTI machinery for a derived class._ 
```C++
#define SEAD_RTTI_OVERRIDE (
    CLASS,
    BASE
) `/* multi line expression */`
```





**Parameters:**


* `CLASS` The name of the class. 
* `BASE` The name of the base class of CLASS. 




        

<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadRuntimeTypeInfo.h`

