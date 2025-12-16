

# Class sead::BufferedSafeStringBase

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**BufferedSafeStringBase**](classsead_1_1_buffered_safe_string_base.md)





* `#include <seadSafeString.h>`



Inherits the following classes: [sead::SafeStringBase](classsead_1_1_safe_string_base.md)


Inherited by the following classes: [sead::FixedSafeStringBase](classsead_1_1_fixed_safe_string_base.md),  [sead::FixedSafeStringBase](classsead_1_1_fixed_safe_string_base.md)




















## Public Attributes

| Type | Name |
| ---: | :--- |
|   | [**else**](#variable-else)   = `/* multi line expression */`<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**size**](#variable-size)  <br> |






## Public Static Attributes inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  const [**SafeStringBase**](classsead_1_1_safe_string_base.md) | [**cEmptyString**](classsead_1_1_safe_string_base.md#variable-cemptystring)  <br> |
|  const T | [**cLineBreakChar**](classsead_1_1_safe_string_base.md#variable-clinebreakchar)  <br> |
|  const [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**cMaximumLength**](classsead_1_1_safe_string_base.md#variable-cmaximumlength)   = `0x80000`<br> |
|  const T | [**cNullChar**](classsead_1_1_safe_string_base.md#variable-cnullchar)   = `0`<br> |


























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**BufferedSafeStringBase**](#function-bufferedsafestringbase) (const [**BufferedSafeStringBase**](classsead_1_1_buffered_safe_string_base.md) &) <br> |
|   | [**\_\_attribute\_\_**](#function-__attribute__) ((always\_inline)) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**append**](#function-append-13) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) append\_length=-1) <br>_Append append\_length characters from str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**append**](#function-append-23) (T c) <br>_Append a character._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**append**](#function-append-33) (T c, [**s32**](_l_m_s___types_8h.md#typedef-s32) n) <br>_Append a character n times._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormat**](#function-appendwithformat-13) (const T \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormat**](#function-appendwithformat-23) (const char \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormat**](#function-appendwithformat-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormatV**](#function-appendwithformatv-13) (const T \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormatV**](#function-appendwithformatv-23) (const char \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormatV**](#function-appendwithformatv-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chop**](#function-chop) ([**s32**](_l_m_s___types_8h.md#typedef-s32) num) <br>_Remove num characters from the end of the string._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chopMatchedChar**](#function-chopmatchedchar-12) (T c) <br>_Remove the last character if it is equal to c._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chopMatchedChar**](#function-chopmatchedchar-22) (const T \* characters) <br>_Remove the last character if it is equal to any of the specified characters._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chopUnprintableAsciiChar**](#function-chopunprintableasciichar) () <br>_Remove the last character if it is unprintable._  |
|  void | [**clear**](#function-clear) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**convertFromMultiByteString**](#function-convertfrommultibytestring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; char &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) str\_length) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**convertFromWideCharString**](#function-convertfromwidecharstring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; [**char16**](sead_types_8h.md#typedef-char16) &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) str\_length) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**copy**](#function-copy) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the beginning of the string, then writes NUL._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**copyAt**](#function-copyat) ([**s32**](_l_m_s___types_8h.md#typedef-s32) at, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**copyAtWithTerminate**](#function-copyatwithterminate) ([**s32**](_l_m_s___types_8h.md#typedef-s32) at, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the specified position, then_ _always_ _writes NUL._ |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**cutOffCopy**](#function-cutoffcopy) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the beginning of the string, then writes NUL._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**cutOffCopyAt**](#function-cutoffcopyat) ([**s32**](_l_m_s___types_8h.md#typedef-s32) at, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**format**](#function-format-13) (const T \* format, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**format**](#function-format-23) (const char \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**format**](#function-format-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatV**](#function-formatv-13) (const T \* format, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatV**](#function-formatv-23) (const char \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatV**](#function-formatv-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, va\_list args) <br> |
|  T \* | [**getBuffer**](#function-getbuffer) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**getBufferSize**](#function-getbuffersize) () const<br> |
|   | [**if**](#function-if) ([**size**](classsead_1_1_buffered_safe_string_base.md#variable-size)&lt;= 0) <br> |
|  const T & | [**operator[]**](#function-operator) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx) const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**prepend**](#function-prepend) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) prepend\_length=-1) <br>_Append prepend\_length characters from str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**removeSuffix**](#function-removesuffix) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & suffix) <br>_Remove the specified suffix from the string if it ends with the suffix._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**replaceChar**](#function-replacechar) (T old\_char, T new\_char) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**replaceCharList**](#function-replacecharlist) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & old\_chars, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & new\_chars) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**replaceString**](#function-replacestring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & new\_str) <br>_Replace occurrences of old\_str in this string with new\_str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**rstrip**](#function-rstrip) (const T \* characters) <br>_Remove trailing characters that are in the specified list._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**rstripUnprintableAsciiChars**](#function-rstripunprintableasciichars) () <br>_Remove trailing characters that are unprintable._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**setReplaceString**](#function-setreplacestring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & target\_str, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & new\_str) <br>_Set the contents of this string to target\_str, after replacing occurrences of old\_str in target\_str with new\_str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**trim**](#function-trim) ([**s32**](_l_m_s___types_8h.md#typedef-s32) trim\_length) <br>_Trim a string to only keep trimLength characters._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**trimMatchedString**](#function-trimmatchedstring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & suffix) <br>_Remove the specified suffix from the string if it ends with the suffix._  |


## Public Functions inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|   | [**SafeStringBase**](classsead_1_1_safe_string_base.md#function-safestringbase-13) () <br> |
|   | [**SafeStringBase**](classsead_1_1_safe_string_base.md#function-safestringbase-23) (const T \* str) <br> |
|   | [**SafeStringBase**](classsead_1_1_safe_string_base.md#function-safestringbase-33) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md) & other) <br> |
| virtual void | [**assureTerminationImpl\_**](classsead_1_1_safe_string_base.md#function-assureterminationimpl_) () const<br> |
|  const T \* | [**cstr**](classsead_1_1_safe_string_base.md#function-cstr) () const<br> |
|  bool | [**isEqual**](classsead_1_1_safe_string_base.md#function-isequal) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & str) const<br> |
| virtual  | [**~SafeStringBase**](classsead_1_1_safe_string_base.md#function-safestringbase) () <br> |














## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mBufferSize**](#variable-mbuffersize)  <br> |


## Protected Attributes inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  const T \* | [**mStringTop**](classsead_1_1_safe_string_base.md#variable-mstringtop)  <br> |






























## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**convertFromOtherType\_**](#function-convertfromothertype_) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; OtherType &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) src\_size) <br> |
|  T \* | [**getMutableStringTop\_**](#function-getmutablestringtop_) () <br> |


## Protected Functions inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  const T & | [**unsafeAt\_**](classsead_1_1_safe_string_base.md#function-unsafeat_) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx) const<br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatImpl\_**](#function-formatimpl_) (T \* dst, [**s32**](_l_m_s___types_8h.md#typedef-s32) dst\_size, const T \* format, va\_list arg) <br> |




## Public Attributes Documentation




### variable else 

```C++
sead::BufferedSafeStringBase< T >::else;
```




<hr>



### variable size 

```C++
s32 sead::BufferedSafeStringBase< T >::size;
```




<hr>
## Public Functions Documentation




### function BufferedSafeStringBase 

```C++
sead::BufferedSafeStringBase::BufferedSafeStringBase (
    const BufferedSafeStringBase &
) 
```




<hr>



### function \_\_attribute\_\_ 

```C++
sead::BufferedSafeStringBase::__attribute__ (
    (always_inline)
) 
```




<hr>



### function append [1/3]

_Append append\_length characters from str._ 
```C++
s32 sead::BufferedSafeStringBase::append (
    const SafeStringBase < T > & str,
    s32 append_length=-1
) 
```




<hr>



### function append [2/3]

_Append a character._ 
```C++
inline s32 sead::BufferedSafeStringBase::append (
    T c
) 
```




<hr>



### function append [3/3]

_Append a character n times._ 
```C++
s32 sead::BufferedSafeStringBase::append (
    T c,
    s32 n
) 
```




<hr>



### function appendWithFormat [1/3]

```C++
s32 sead::BufferedSafeStringBase::appendWithFormat (
    const T * formatStr,
    ...
) 
```




<hr>



### function appendWithFormat [2/3]

```C++
s32 sead::BufferedSafeStringBase::appendWithFormat (
    const char * formatStr,
    ...
) 
```




<hr>



### function appendWithFormat [3/3]

```C++
s32 sead::BufferedSafeStringBase::appendWithFormat (
    const char16 * formatStr,
    ...
) 
```




<hr>



### function appendWithFormatV [1/3]

```C++
s32 sead::BufferedSafeStringBase::appendWithFormatV (
    const T * formatStr,
    va_list args
) 
```




<hr>



### function appendWithFormatV [2/3]

```C++
s32 sead::BufferedSafeStringBase::appendWithFormatV (
    const char * formatStr,
    va_list args
) 
```




<hr>



### function appendWithFormatV [3/3]

```C++
s32 sead::BufferedSafeStringBase::appendWithFormatV (
    const char16 * formatStr,
    va_list args
) 
```




<hr>



### function chop 

_Remove num characters from the end of the string._ 
```C++
s32 sead::BufferedSafeStringBase::chop (
    s32 num
) 
```





**Returns:**

the number of characters that were removed 





        

<hr>



### function chopMatchedChar [1/2]

_Remove the last character if it is equal to c._ 
```C++
s32 sead::BufferedSafeStringBase::chopMatchedChar (
    T c
) 
```





**Returns:**

the number of characters that were removed 





        

<hr>



### function chopMatchedChar [2/2]

_Remove the last character if it is equal to any of the specified characters._ 
```C++
s32 sead::BufferedSafeStringBase::chopMatchedChar (
    const T * characters
) 
```





**Parameters:**


* `characters` List of characters to remove 



**Returns:**

the number of characters that were removed 





        

<hr>



### function chopUnprintableAsciiChar 

_Remove the last character if it is unprintable._ 
```C++
s32 sead::BufferedSafeStringBase::chopUnprintableAsciiChar () 
```





**Warning:**

The behavior of this function is not standard: a character is considered unprintable if it is &lt;= 0x20 or == 0x7F. In particular, the space character is unprintable. 




**Returns:**

the number of characters that were removed 





        

<hr>



### function clear 

```C++
inline void sead::BufferedSafeStringBase::clear () 
```




<hr>



### function convertFromMultiByteString 

```C++
s32 sead::BufferedSafeStringBase::convertFromMultiByteString (
    const SafeStringBase < char > & str,
    s32 str_length
) 
```




<hr>



### function convertFromWideCharString 

```C++
s32 sead::BufferedSafeStringBase::convertFromWideCharString (
    const SafeStringBase < char16 > & str,
    s32 str_length
) 
```




<hr>



### function copy 

_Copy up to copyLength characters to the beginning of the string, then writes NUL._ 
```C++
s32 sead::BufferedSafeStringBase::copy (
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```





**Parameters:**


* `src` Source string 
* `copyLength` Number of characters from src to copy (must not cause a buffer overflow) 




        

<hr>



### function copyAt 

_Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer._ 
```C++
inline s32 sead::BufferedSafeStringBase::copyAt (
    s32 at,
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```





**Parameters:**


* `at` Start position (-1 for end of string) 
* `src` Source string 
* `copyLength` Number of characters from src to copy (must not cause a buffer overflow) 




        

<hr>



### function copyAtWithTerminate 

_Copy up to copyLength characters to the specified position, then_ _always_ _writes NUL._
```C++
inline s32 sead::BufferedSafeStringBase::copyAtWithTerminate (
    s32 at,
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```





**Parameters:**


* `at` Start position (-1 for end of string) 
* `src` Source string 
* `copyLength` Number of characters from src to copy (must not cause a buffer overflow) 




        

<hr>



### function cutOffCopy 

_Copy up to copyLength characters to the beginning of the string, then writes NUL._ 
```C++
inline s32 sead::BufferedSafeStringBase::cutOffCopy (
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```



Silently truncates the source string if the buffer is too small. 

**Parameters:**


* `src` Source string 
* `copyLength` Number of characters from src to copy 




        

<hr>



### function cutOffCopyAt 

_Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer._ 
```C++
inline s32 sead::BufferedSafeStringBase::cutOffCopyAt (
    s32 at,
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```



Silently truncates the source string if the buffer is too small. 

**Parameters:**


* `at` Start position (-1 for end of string) 
* `src` Source string 
* `copyLength` Number of characters from src to copy 




        

<hr>



### function format [1/3]

```C++
s32 sead::BufferedSafeStringBase::format (
    const T * format,
    ...
) 
```




<hr>



### function format [2/3]

```C++
s32 sead::BufferedSafeStringBase::format (
    const char * formatStr,
    ...
) 
```




<hr>



### function format [3/3]

```C++
s32 sead::BufferedSafeStringBase::format (
    const char16 * formatStr,
    ...
) 
```




<hr>



### function formatV [1/3]

```C++
s32 sead::BufferedSafeStringBase::formatV (
    const T * format,
    va_list args
) 
```




<hr>



### function formatV [2/3]

```C++
s32 sead::BufferedSafeStringBase::formatV (
    const char * formatStr,
    va_list args
) 
```




<hr>



### function formatV [3/3]

```C++
s32 sead::BufferedSafeStringBase::formatV (
    const char16 * formatStr,
    va_list args
) 
```




<hr>



### function getBuffer 

```C++
inline T * sead::BufferedSafeStringBase::getBuffer () 
```




<hr>



### function getBufferSize 

```C++
inline s32 sead::BufferedSafeStringBase::getBufferSize () const
```




<hr>



### function if 

```C++
inline sead::BufferedSafeStringBase::if (
    size <= 0
) 
```




<hr>



### function operator[] 

```C++
const T & sead::BufferedSafeStringBase::operator[] (
    s32 idx
) const
```




<hr>



### function prepend 

_Append prepend\_length characters from str._ 
```C++
s32 sead::BufferedSafeStringBase::prepend (
    const SafeStringBase < T > & str,
    s32 prepend_length=-1
) 
```





**Returns:**

the new length 





        

<hr>



### function removeSuffix 

_Remove the specified suffix from the string if it ends with the suffix._ 
```C++
inline s32 sead::BufferedSafeStringBase::removeSuffix (
    const SafeStringBase < T > & suffix
) 
```



Alias of trimMatchedString. 

**Returns:**

the new length 





        

<hr>



### function replaceChar 

```C++
inline s32 sead::BufferedSafeStringBase::replaceChar (
    T old_char,
    T new_char
) 
```





**Returns:**

the number of characters that were replaced 





        

<hr>



### function replaceCharList 

```C++
inline s32 sead::BufferedSafeStringBase::replaceCharList (
    const SafeStringBase < T > & old_chars,
    const SafeStringBase < T > & new_chars
) 
```





**Returns:**

the number of characters that were replaced 





        

<hr>



### function replaceString 

_Replace occurrences of old\_str in this string with new\_str._ 
```C++
inline s32 sead::BufferedSafeStringBase::replaceString (
    const SafeStringBase < T > & old_str,
    const SafeStringBase < T > & new_str
) 
```





**Returns:**

the number of replaced occurrences 





        

<hr>



### function rstrip 

_Remove trailing characters that are in the specified list._ 
```C++
s32 sead::BufferedSafeStringBase::rstrip (
    const T * characters
) 
```





**Parameters:**


* `characters` List of characters to remove 



**Returns:**

the number of characters that were removed 





        

<hr>



### function rstripUnprintableAsciiChars 

_Remove trailing characters that are unprintable._ 
```C++
s32 sead::BufferedSafeStringBase::rstripUnprintableAsciiChars () 
```





**Warning:**

The behavior of this function is not standard: a character is considered unprintable if it is &lt;= 0x20 or == 0x7F. In particular, the space character is unprintable. 




**Returns:**

the number of characters that were removed 





        

<hr>



### function setReplaceString 

_Set the contents of this string to target\_str, after replacing occurrences of old\_str in target\_str with new\_str._ 
```C++
inline s32 sead::BufferedSafeStringBase::setReplaceString (
    const SafeStringBase < T > & target_str,
    const SafeStringBase < T > & old_str,
    const SafeStringBase < T > & new_str
) 
```





**Returns:**

the number of replaced occurrences 





        

<hr>



### function trim 

_Trim a string to only keep trimLength characters._ 
```C++
inline s32 sead::BufferedSafeStringBase::trim (
    s32 trim_length
) 
```





**Returns:**

the new length 





        

<hr>



### function trimMatchedString 

_Remove the specified suffix from the string if it ends with the suffix._ 
```C++
inline s32 sead::BufferedSafeStringBase::trimMatchedString (
    const SafeStringBase < T > & suffix
) 
```





**Returns:**

the new length 





        

<hr>
## Protected Attributes Documentation




### variable mBufferSize 

```C++
s32 sead::BufferedSafeStringBase< T >::mBufferSize;
```




<hr>
## Protected Functions Documentation




### function convertFromOtherType\_ 

```C++
template<typename OtherType>
s32 sead::BufferedSafeStringBase::convertFromOtherType_ (
    const SafeStringBase < OtherType > & src,
    s32 src_size
) 
```




<hr>



### function getMutableStringTop\_ 

```C++
inline T * sead::BufferedSafeStringBase::getMutableStringTop_ () 
```




<hr>
## Protected Static Functions Documentation




### function formatImpl\_ 

```C++
static s32 sead::BufferedSafeStringBase::formatImpl_ (
    T * dst,
    s32 dst_size,
    const T * format,
    va_list arg
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadSafeString.h`

