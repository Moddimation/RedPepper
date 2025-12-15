

# Class sead::BufferedSafeStringBase

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**BufferedSafeStringBase**](classsead_1_1BufferedSafeStringBase.md)








Inherits the following classes: [sead::SafeStringBase](classsead_1_1SafeStringBase.md)


Inherited by the following classes: [sead::FixedSafeStringBase](classsead_1_1FixedSafeStringBase.md),  [sead::FixedSafeStringBase](classsead_1_1FixedSafeStringBase.md)




















## Public Attributes

| Type | Name |
| ---: | :--- |
|   | [**else**](#variable-else)   = `/* multi line expression */`<br> |
|  s32 | [**size**](#variable-size)  <br> |






## Public Static Attributes inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1SafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  const [**SafeStringBase**](classsead_1_1SafeStringBase.md) | [**cEmptyString**](classsead_1_1SafeStringBase.md#variable-cemptystring)  <br> |
|  const T | [**cLineBreakChar**](classsead_1_1SafeStringBase.md#variable-clinebreakchar)  <br> |
|  const s32 | [**cMaximumLength**](classsead_1_1SafeStringBase.md#variable-cmaximumlength)   = `0x80000`<br> |
|  const T | [**cNullChar**](classsead_1_1SafeStringBase.md#variable-cnullchar)   = `0`<br> |


























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**BufferedSafeStringBase**](#function-bufferedsafestringbase) (const [**BufferedSafeStringBase**](classsead_1_1BufferedSafeStringBase.md) &) <br> |
|   | [**\_\_attribute\_\_**](#function-__attribute__) ((always\_inline)) <br> |
|  s32 | [**append**](#function-append-13) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & str, s32 append\_length=-1) <br>_Append append\_length characters from str._  |
|  s32 | [**append**](#function-append-23) (T c) <br>_Append a character._  |
|  s32 | [**append**](#function-append-33) (T c, s32 n) <br>_Append a character n times._  |
|  s32 | [**appendWithFormat**](#function-appendwithformat-13) (const T \* formatStr, ...) <br> |
|  s32 | [**appendWithFormat**](#function-appendwithformat-23) (const char \* formatStr, ...) <br> |
|  s32 | [**appendWithFormat**](#function-appendwithformat-33) (const char16 \* formatStr, ...) <br> |
|  s32 | [**appendWithFormatV**](#function-appendwithformatv-13) (const T \* formatStr, va\_list args) <br> |
|  s32 | [**appendWithFormatV**](#function-appendwithformatv-23) (const char \* formatStr, va\_list args) <br> |
|  s32 | [**appendWithFormatV**](#function-appendwithformatv-33) (const char16 \* formatStr, va\_list args) <br> |
|  s32 | [**chop**](#function-chop) (s32 num) <br> |
|  s32 | [**chopMatchedChar**](#function-chopmatchedchar-12) (T c) <br> |
|  s32 | [**chopMatchedChar**](#function-chopmatchedchar-22) (const T \* characters) <br> |
|  s32 | [**chopUnprintableAsciiChar**](#function-chopunprintableasciichar) () <br> |
|  void | [**clear**](#function-clear) () <br> |
|  s32 | [**convertFromMultiByteString**](#function-convertfrommultibytestring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; char &gt; & str, s32 str\_length) <br> |
|  s32 | [**convertFromWideCharString**](#function-convertfromwidecharstring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; char16 &gt; & str, s32 str\_length) <br> |
|  s32 | [**copy**](#function-copy) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**copyAt**](#function-copyat) (s32 at, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**copyAtWithTerminate**](#function-copyatwithterminate) (s32 at, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**cutOffCopy**](#function-cutoffcopy) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**cutOffCopyAt**](#function-cutoffcopyat) (s32 at, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**format**](#function-format-13) (const T \* format, ...) <br> |
|  s32 | [**format**](#function-format-23) (const char \* formatStr, ...) <br> |
|  s32 | [**format**](#function-format-33) (const char16 \* formatStr, ...) <br> |
|  s32 | [**formatV**](#function-formatv-13) (const T \* format, va\_list args) <br> |
|  s32 | [**formatV**](#function-formatv-23) (const char \* formatStr, va\_list args) <br> |
|  s32 | [**formatV**](#function-formatv-33) (const char16 \* formatStr, va\_list args) <br> |
|  T \* | [**getBuffer**](#function-getbuffer) () <br> |
|  s32 | [**getBufferSize**](#function-getbuffersize) () const<br> |
|   | [**if**](#function-if) (size&lt;= 0) <br> |
|  const T & | [**operator[]**](#function-operator) (s32 idx) const<br> |
|  s32 | [**prepend**](#function-prepend) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & str, s32 prepend\_length=-1) <br> |
|  s32 | [**removeSuffix**](#function-removesuffix) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & suffix) <br> |
|  s32 | [**replaceChar**](#function-replacechar) (T old\_char, T new\_char) <br> |
|  s32 | [**replaceCharList**](#function-replacecharlist) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & old\_chars, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & new\_chars) <br> |
|  s32 | [**replaceString**](#function-replacestring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & new\_str) <br> |
|  s32 | [**rstrip**](#function-rstrip) (const T \* characters) <br> |
|  s32 | [**rstripUnprintableAsciiChars**](#function-rstripunprintableasciichars) () <br> |
|  s32 | [**setReplaceString**](#function-setreplacestring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & target\_str, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & new\_str) <br> |
|  s32 | [**trim**](#function-trim) (s32 trim\_length) <br> |
|  s32 | [**trimMatchedString**](#function-trimmatchedstring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & suffix) <br> |


## Public Functions inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1SafeStringBase.md)

| Type | Name |
| ---: | :--- |
|   | [**SafeStringBase**](classsead_1_1SafeStringBase.md#function-safestringbase-13) () <br> |
|   | [**SafeStringBase**](classsead_1_1SafeStringBase.md#function-safestringbase-23) (const T \* str) <br> |
|   | [**SafeStringBase**](classsead_1_1SafeStringBase.md#function-safestringbase-33) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md) & other) <br> |
| virtual void | [**assureTerminationImpl\_**](classsead_1_1SafeStringBase.md#function-assureterminationimpl_) () const<br> |
|  const T \* | [**cstr**](classsead_1_1SafeStringBase.md#function-cstr) () const<br> |
|  bool | [**isEqual**](classsead_1_1SafeStringBase.md#function-isequal) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & str) const<br> |
| virtual  | [**~SafeStringBase**](classsead_1_1SafeStringBase.md#function-safestringbase) () <br> |














## Protected Attributes

| Type | Name |
| ---: | :--- |
|  s32 | [**mBufferSize**](#variable-mbuffersize)  <br> |


## Protected Attributes inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1SafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  const T \* | [**mStringTop**](classsead_1_1SafeStringBase.md#variable-mstringtop)  <br> |






























## Protected Functions

| Type | Name |
| ---: | :--- |
|  s32 | [**convertFromOtherType\_**](#function-convertfromothertype_) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; OtherType &gt; & src, s32 src\_size) <br> |
|  T \* | [**getMutableStringTop\_**](#function-getmutablestringtop_) () <br> |


## Protected Functions inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1SafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  const T & | [**unsafeAt\_**](classsead_1_1SafeStringBase.md#function-unsafeat_) (s32 idx) const<br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  s32 | [**formatImpl\_**](#function-formatimpl_) (T \* dst, s32 dst\_size, const T \* format, va\_list arg) <br> |




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

```C++
s32 sead::BufferedSafeStringBase::chop (
    s32 num
) 
```



Remove num characters from the end of the string. 

**Returns:**

the number of characters that were removed 





        

<hr>



### function chopMatchedChar [1/2]

```C++
s32 sead::BufferedSafeStringBase::chopMatchedChar (
    T c
) 
```



Remove the last character if it is equal to c. 

**Returns:**

the number of characters that were removed 





        

<hr>



### function chopMatchedChar [2/2]

```C++
s32 sead::BufferedSafeStringBase::chopMatchedChar (
    const T * characters
) 
```



Remove the last character if it is equal to any of the specified characters. 

**Parameters:**


* `characters` List of characters to remove 



**Returns:**

the number of characters that were removed 





        

<hr>



### function chopUnprintableAsciiChar 

```C++
s32 sead::BufferedSafeStringBase::chopUnprintableAsciiChar () 
```



Remove the last character if it is unprintable. 

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

```C++
s32 sead::BufferedSafeStringBase::copy (
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```



Copy up to copyLength characters to the beginning of the string, then writes NUL. 

**Parameters:**


* `src` Source string 
* `copyLength` Number of characters from src to copy (must not cause a buffer overflow) 




        

<hr>



### function copyAt 

```C++
inline s32 sead::BufferedSafeStringBase::copyAt (
    s32 at,
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```



Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer. 

**Parameters:**


* `at` Start position (-1 for end of string) 
* `src` Source string 
* `copyLength` Number of characters from src to copy (must not cause a buffer overflow) 




        

<hr>



### function copyAtWithTerminate 

```C++
inline s32 sead::BufferedSafeStringBase::copyAtWithTerminate (
    s32 at,
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```



Copy up to copyLength characters to the specified position, then _always_ writes NUL. 

**Parameters:**


* `at` Start position (-1 for end of string) 
* `src` Source string 
* `copyLength` Number of characters from src to copy (must not cause a buffer overflow) 




        

<hr>



### function cutOffCopy 

```C++
inline s32 sead::BufferedSafeStringBase::cutOffCopy (
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```



Copy up to copyLength characters to the beginning of the string, then writes NUL. Silently truncates the source string if the buffer is too small. 

**Parameters:**


* `src` Source string 
* `copyLength` Number of characters from src to copy 




        

<hr>



### function cutOffCopyAt 

```C++
inline s32 sead::BufferedSafeStringBase::cutOffCopyAt (
    s32 at,
    const SafeStringBase < T > & src,
    s32 copyLength=-1
) 
```



Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer. Silently truncates the source string if the buffer is too small. 

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
    size<= 0
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

```C++
s32 sead::BufferedSafeStringBase::prepend (
    const SafeStringBase < T > & str,
    s32 prepend_length=-1
) 
```



Append prepend\_length characters from str. 

**Returns:**

the new length 





        

<hr>



### function removeSuffix 

```C++
inline s32 sead::BufferedSafeStringBase::removeSuffix (
    const SafeStringBase < T > & suffix
) 
```



Remove the specified suffix from the string if it ends with the suffix. Alias of trimMatchedString. 

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

```C++
inline s32 sead::BufferedSafeStringBase::replaceString (
    const SafeStringBase < T > & old_str,
    const SafeStringBase < T > & new_str
) 
```



Replace occurrences of old\_str in this string with new\_str. 

**Returns:**

the number of replaced occurrences 





        

<hr>



### function rstrip 

```C++
s32 sead::BufferedSafeStringBase::rstrip (
    const T * characters
) 
```



Remove trailing characters that are in the specified list. 

**Parameters:**


* `characters` List of characters to remove 



**Returns:**

the number of characters that were removed 





        

<hr>



### function rstripUnprintableAsciiChars 

```C++
s32 sead::BufferedSafeStringBase::rstripUnprintableAsciiChars () 
```



Remove trailing characters that are unprintable. 

**Warning:**

The behavior of this function is not standard: a character is considered unprintable if it is &lt;= 0x20 or == 0x7F. In particular, the space character is unprintable. 




**Returns:**

the number of characters that were removed 





        

<hr>



### function setReplaceString 

```C++
inline s32 sead::BufferedSafeStringBase::setReplaceString (
    const SafeStringBase < T > & target_str,
    const SafeStringBase < T > & old_str,
    const SafeStringBase < T > & new_str
) 
```



Set the contents of this string to target\_str, after replacing occurrences of old\_str in target\_str with new\_str. 

**Returns:**

the number of replaced occurrences 





        

<hr>



### function trim 

```C++
inline s32 sead::BufferedSafeStringBase::trim (
    s32 trim_length
) 
```



Trim a string to only keep trimLength characters. 

**Returns:**

the new length 





        

<hr>



### function trimMatchedString 

```C++
inline s32 sead::BufferedSafeStringBase::trimMatchedString (
    const SafeStringBase < T > & suffix
) 
```



Remove the specified suffix from the string if it ends with the suffix. 

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

