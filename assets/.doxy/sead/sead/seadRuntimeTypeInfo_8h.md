

# File seadRuntimeTypeInfo.h



[**FileList**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadRuntimeTypeInfo.h**](seadRuntimeTypeInfo_8h.md)

[Go to the source code of this file](seadRuntimeTypeInfo_8h_source.md)



* `#include <basis/seadTypes.h>`













## Namespaces

| Type | Name |
| ---: | :--- |
| namespace | [**sead**](namespacesead.md) <br> |
| namespace | [**RuntimeTypeInfo**](namespacesead_1_1RuntimeTypeInfo.md) <br> |


## Classes

| Type | Name |
| ---: | :--- |
| class | [**Derive**](classsead_1_1RuntimeTypeInfo_1_1Derive.md) &lt;typename BaseType&gt;<br> |
| class | [**Interface**](classsead_1_1RuntimeTypeInfo_1_1Interface.md) <br> |
| class | [**Root**](classsead_1_1RuntimeTypeInfo_1_1Root.md) <br> |

















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**SEAD\_RTTI\_BASE**](seadRuntimeTypeInfo_8h.md#define-sead_rtti_base) (CLASS) `/* multi line expression */`<br> |
| define  | [**SEAD\_RTTI\_OVERRIDE**](seadRuntimeTypeInfo_8h.md#define-sead_rtti_override) (CLASS, BASE) `/* multi line expression */`<br> |

## Macro Definition Documentation





### define SEAD\_RTTI\_BASE 

```C++
#define SEAD_RTTI_BASE (
    CLASS
) `/* multi line expression */`
```



Use this macro to declare sead RTTI machinery for a base class. You must use SEAD\_RTTI\_OVERRIDE in all derived classes. 

**Parameters:**


* `CLASS` The name of the class. 




        

<hr>



### define SEAD\_RTTI\_OVERRIDE 

```C++
#define SEAD_RTTI_OVERRIDE (
    CLASS,
    BASE
) `/* multi line expression */`
```



Use this macro to declare sead RTTI machinery for a derived class. 

**Parameters:**


* `CLASS` The name of the class. 
* `BASE` The name of the base class of CLASS. 




        

<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadRuntimeTypeInfo.h`

