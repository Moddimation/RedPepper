

# Class sead::SafeStringBase

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**SafeStringBase**](classsead_1_1_safe_string_base.md)





* `#include <seadSafeString.h>`





Inherited by the following classes: [sead::BufferedSafeStringBase](classsead_1_1_buffered_safe_string_base.md),  [sead::BufferedSafeStringBase](classsead_1_1_buffered_safe_string_base.md)


















## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**SafeStringBase**](classsead_1_1_safe_string_base.md) | [**cEmptyString**](#variable-cemptystring)  <br> |
|  const T | [**cLineBreakChar**](#variable-clinebreakchar)  <br> |
|  const [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**cMaximumLength**](#variable-cmaximumlength)   = `0x80000`<br> |
|  const T | [**cNullChar**](#variable-cnullchar)   = `0`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**SafeStringBase**](#function-safestringbase-13) () <br> |
|   | [**SafeStringBase**](#function-safestringbase-23) (const T \* str) <br> |
|   | [**SafeStringBase**](#function-safestringbase-33) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md) & other) <br> |
| virtual void | [**assureTerminationImpl\_**](#function-assureterminationimpl_) () const<br> |
|  const T \* | [**cstr**](#function-cstr) () const<br> |
|  bool | [**isEqual**](#function-isequal) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & str) const<br> |
| virtual  | [**~SafeStringBase**](#function-safestringbase) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  const T \* | [**mStringTop**](#variable-mstringtop)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  const T & | [**unsafeAt\_**](#function-unsafeat_) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx) const<br> |




## Public Static Attributes Documentation




### variable cEmptyString 

```C++
const SafeStringBase sead::SafeStringBase< T >::cEmptyString;
```




<hr>



### variable cLineBreakChar 

```C++
const T sead::SafeStringBase< T >::cLineBreakChar;
```




<hr>



### variable cMaximumLength 

```C++
const s32 sead::SafeStringBase< T >::cMaximumLength;
```




<hr>



### variable cNullChar 

```C++
const T sead::SafeStringBase< T >::cNullChar;
```




<hr>
## Public Functions Documentation




### function SafeStringBase [1/3]

```C++
inline sead::SafeStringBase::SafeStringBase () 
```




<hr>



### function SafeStringBase [2/3]

```C++
inline sead::SafeStringBase::SafeStringBase (
    const T * str
) 
```




<hr>



### function SafeStringBase [3/3]

```C++
sead::SafeStringBase::SafeStringBase (
    const SafeStringBase & other
) 
```




<hr>



### function assureTerminationImpl\_ 

```C++
inline virtual void sead::SafeStringBase::assureTerminationImpl_ () const
```




<hr>



### function cstr 

```C++
inline const T * sead::SafeStringBase::cstr () const
```




<hr>



### function isEqual 

```C++
bool sead::SafeStringBase::isEqual (
    const SafeStringBase < T > & str
) const
```




<hr>



### function ~SafeStringBase 

```C++
inline virtual sead::SafeStringBase::~SafeStringBase () 
```




<hr>
## Protected Attributes Documentation




### variable mStringTop 

```C++
const T* sead::SafeStringBase< T >::mStringTop;
```




<hr>
## Protected Functions Documentation




### function unsafeAt\_ 

```C++
inline const T & sead::SafeStringBase::unsafeAt_ (
    s32 idx
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadSafeString.h`

