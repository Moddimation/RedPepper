

# Class sead::TaskClassID



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskClassID**](classsead_1_1_task_class_i_d.md)





* `#include <seadTaskID.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**Type**](#enum-type)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**TaskFactory**](namespacesead.md#typedef-taskfactory) | [**mFactory**](#variable-mfactory)  <br> |
|  union [**sead::TaskClassID**](classsead_1_1_task_class_i_d.md) | [**mID**](#variable-mid)  <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mInt**](#variable-mint)  <br> |
|  const char \* | [**mString**](#variable-mstring)  <br> |
|  [**Type**](classsead_1_1_task_class_i_d.md#enum-type) | [**mType**](#variable-mtype)  <br> |












































## Public Types Documentation




### enum Type 

```C++
enum sead::TaskClassID::Type {
    cInvalid = 0,
    cInt = 1,
    cFactory = 2,
    cString = 3
};
```




<hr>
## Public Attributes Documentation




### variable mFactory 

```C++
TaskFactory sead::TaskClassID::mFactory;
```




<hr>



### variable mID 

```C++
union sead::TaskClassID sead::TaskClassID::mID;
```




<hr>



### variable mInt 

```C++
s32 sead::TaskClassID::mInt;
```




<hr>



### variable mString 

```C++
const char* sead::TaskClassID::mString;
```




<hr>



### variable mType 

```C++
Type sead::TaskClassID::mType;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadTaskID.h`

