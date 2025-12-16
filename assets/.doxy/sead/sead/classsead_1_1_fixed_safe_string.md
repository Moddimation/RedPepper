

# Class sead::FixedSafeString

**template &lt;[**s32**](_l_m_s___types_8h.md#typedef-s32) L&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FixedSafeString**](classsead_1_1_fixed_safe_string.md)





* `#include <seadSafeString.h>`



Inherits the following classes: [sead::FixedSafeStringBase](classsead_1_1_fixed_safe_string_base.md)
































## Public Attributes inherited from sead::FixedSafeStringBase

See [sead::FixedSafeStringBase](classsead_1_1_fixed_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  T | [**mBuffer**](classsead_1_1_fixed_safe_string_base.md#variable-mbuffer)  <br> |


## Public Attributes inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1_buffered_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|   | [**else**](classsead_1_1_buffered_safe_string_base.md#variable-else)   = `/* multi line expression */`<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**size**](classsead_1_1_buffered_safe_string_base.md#variable-size)  <br> |










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
|   | [**FixedSafeString**](#function-fixedsafestring-13) () <br> |
|   | [**FixedSafeString**](#function-fixedsafestring-23) (const [**SafeString**](namespacesead.md#typedef-safestring) & str) <br> |
|   | [**FixedSafeString**](#function-fixedsafestring-33) (const [**FixedSafeString**](classsead_1_1_fixed_safe_string.md) & other) <br> |
|  [**FixedSafeString**](classsead_1_1_fixed_safe_string.md) & | [**operator=**](#function-operator) (const [**FixedSafeString**](classsead_1_1_fixed_safe_string.md) & other) <br> |


## Public Functions inherited from sead::FixedSafeStringBase

See [sead::FixedSafeStringBase](classsead_1_1_fixed_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|   | [**FixedSafeStringBase**](classsead_1_1_fixed_safe_string_base.md#function-fixedsafestringbase-13) () <br> |
|   | [**FixedSafeStringBase**](classsead_1_1_fixed_safe_string_base.md#function-fixedsafestringbase-23) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & str) <br> |
|   | [**FixedSafeStringBase**](classsead_1_1_fixed_safe_string_base.md#function-fixedsafestringbase-33) (const [**FixedSafeStringBase**](classsead_1_1_fixed_safe_string_base.md) & str) <br> |
|  [**FixedSafeStringBase**](classsead_1_1_fixed_safe_string_base.md) & | [**operator=**](classsead_1_1_fixed_safe_string_base.md#function-operator) (const [**FixedSafeStringBase**](classsead_1_1_fixed_safe_string_base.md) & other) <br> |


## Public Functions inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1_buffered_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|   | [**BufferedSafeStringBase**](classsead_1_1_buffered_safe_string_base.md#function-bufferedsafestringbase) (const [**BufferedSafeStringBase**](classsead_1_1_buffered_safe_string_base.md) &) <br> |
|   | [**\_\_attribute\_\_**](classsead_1_1_buffered_safe_string_base.md#function-__attribute__) ((always\_inline)) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**append**](classsead_1_1_buffered_safe_string_base.md#function-append-13) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) append\_length=-1) <br>_Append append\_length characters from str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**append**](classsead_1_1_buffered_safe_string_base.md#function-append-23) (T c) <br>_Append a character._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**append**](classsead_1_1_buffered_safe_string_base.md#function-append-33) (T c, [**s32**](_l_m_s___types_8h.md#typedef-s32) n) <br>_Append a character n times._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormat**](classsead_1_1_buffered_safe_string_base.md#function-appendwithformat-13) (const T \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormat**](classsead_1_1_buffered_safe_string_base.md#function-appendwithformat-23) (const char \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormat**](classsead_1_1_buffered_safe_string_base.md#function-appendwithformat-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormatV**](classsead_1_1_buffered_safe_string_base.md#function-appendwithformatv-13) (const T \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormatV**](classsead_1_1_buffered_safe_string_base.md#function-appendwithformatv-23) (const char \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**appendWithFormatV**](classsead_1_1_buffered_safe_string_base.md#function-appendwithformatv-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chop**](classsead_1_1_buffered_safe_string_base.md#function-chop) ([**s32**](_l_m_s___types_8h.md#typedef-s32) num) <br>_Remove num characters from the end of the string._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chopMatchedChar**](classsead_1_1_buffered_safe_string_base.md#function-chopmatchedchar-12) (T c) <br>_Remove the last character if it is equal to c._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chopMatchedChar**](classsead_1_1_buffered_safe_string_base.md#function-chopmatchedchar-22) (const T \* characters) <br>_Remove the last character if it is equal to any of the specified characters._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**chopUnprintableAsciiChar**](classsead_1_1_buffered_safe_string_base.md#function-chopunprintableasciichar) () <br>_Remove the last character if it is unprintable._  |
|  void | [**clear**](classsead_1_1_buffered_safe_string_base.md#function-clear) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**convertFromMultiByteString**](classsead_1_1_buffered_safe_string_base.md#function-convertfrommultibytestring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; char &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) str\_length) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**convertFromWideCharString**](classsead_1_1_buffered_safe_string_base.md#function-convertfromwidecharstring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; [**char16**](sead_types_8h.md#typedef-char16) &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) str\_length) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**copy**](classsead_1_1_buffered_safe_string_base.md#function-copy) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the beginning of the string, then writes NUL._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**copyAt**](classsead_1_1_buffered_safe_string_base.md#function-copyat) ([**s32**](_l_m_s___types_8h.md#typedef-s32) at, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**copyAtWithTerminate**](classsead_1_1_buffered_safe_string_base.md#function-copyatwithterminate) ([**s32**](_l_m_s___types_8h.md#typedef-s32) at, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the specified position, then_ _always_ _writes NUL._ |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**cutOffCopy**](classsead_1_1_buffered_safe_string_base.md#function-cutoffcopy) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the beginning of the string, then writes NUL._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**cutOffCopyAt**](classsead_1_1_buffered_safe_string_base.md#function-cutoffcopyat) ([**s32**](_l_m_s___types_8h.md#typedef-s32) at, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) copyLength=-1) <br>_Copy up to copyLength characters to the specified position, then writes NUL if the copy makes this string longer._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**format**](classsead_1_1_buffered_safe_string_base.md#function-format-13) (const T \* format, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**format**](classsead_1_1_buffered_safe_string_base.md#function-format-23) (const char \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**format**](classsead_1_1_buffered_safe_string_base.md#function-format-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, ...) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatV**](classsead_1_1_buffered_safe_string_base.md#function-formatv-13) (const T \* format, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatV**](classsead_1_1_buffered_safe_string_base.md#function-formatv-23) (const char \* formatStr, va\_list args) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatV**](classsead_1_1_buffered_safe_string_base.md#function-formatv-33) (const [**char16**](sead_types_8h.md#typedef-char16) \* formatStr, va\_list args) <br> |
|  T \* | [**getBuffer**](classsead_1_1_buffered_safe_string_base.md#function-getbuffer) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**getBufferSize**](classsead_1_1_buffered_safe_string_base.md#function-getbuffersize) () const<br> |
|   | [**if**](classsead_1_1_buffered_safe_string_base.md#function-if) ([**size**](classsead_1_1_buffered_safe_string_base.md#variable-size)&lt;= 0) <br> |
|  const T & | [**operator[]**](classsead_1_1_buffered_safe_string_base.md#function-operator) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx) const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**prepend**](classsead_1_1_buffered_safe_string_base.md#function-prepend) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & str, [**s32**](_l_m_s___types_8h.md#typedef-s32) prepend\_length=-1) <br>_Append prepend\_length characters from str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**removeSuffix**](classsead_1_1_buffered_safe_string_base.md#function-removesuffix) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & suffix) <br>_Remove the specified suffix from the string if it ends with the suffix._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**replaceChar**](classsead_1_1_buffered_safe_string_base.md#function-replacechar) (T old\_char, T new\_char) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**replaceCharList**](classsead_1_1_buffered_safe_string_base.md#function-replacecharlist) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & old\_chars, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & new\_chars) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**replaceString**](classsead_1_1_buffered_safe_string_base.md#function-replacestring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & new\_str) <br>_Replace occurrences of old\_str in this string with new\_str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**rstrip**](classsead_1_1_buffered_safe_string_base.md#function-rstrip) (const T \* characters) <br>_Remove trailing characters that are in the specified list._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**rstripUnprintableAsciiChars**](classsead_1_1_buffered_safe_string_base.md#function-rstripunprintableasciichars) () <br>_Remove trailing characters that are unprintable._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**setReplaceString**](classsead_1_1_buffered_safe_string_base.md#function-setreplacestring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & target\_str, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & new\_str) <br>_Set the contents of this string to target\_str, after replacing occurrences of old\_str in target\_str with new\_str._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**trim**](classsead_1_1_buffered_safe_string_base.md#function-trim) ([**s32**](_l_m_s___types_8h.md#typedef-s32) trim\_length) <br>_Trim a string to only keep trimLength characters._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**trimMatchedString**](classsead_1_1_buffered_safe_string_base.md#function-trimmatchedstring) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; T &gt; & suffix) <br>_Remove the specified suffix from the string if it ends with the suffix._  |


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






























## Protected Attributes inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1_buffered_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mBufferSize**](classsead_1_1_buffered_safe_string_base.md#variable-mbuffersize)  <br> |


## Protected Attributes inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  const T \* | [**mStringTop**](classsead_1_1_safe_string_base.md#variable-mstringtop)  <br> |






























































## Protected Functions inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1_buffered_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**convertFromOtherType\_**](classsead_1_1_buffered_safe_string_base.md#function-convertfromothertype_) (const [**SafeStringBase**](classsead_1_1_safe_string_base.md)&lt; OtherType &gt; & src, [**s32**](_l_m_s___types_8h.md#typedef-s32) src\_size) <br> |
|  T \* | [**getMutableStringTop\_**](classsead_1_1_buffered_safe_string_base.md#function-getmutablestringtop_) () <br> |


## Protected Functions inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  const T & | [**unsafeAt\_**](classsead_1_1_safe_string_base.md#function-unsafeat_) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx) const<br> |






## Protected Static Functions inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1_buffered_safe_string_base.md)

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**formatImpl\_**](classsead_1_1_buffered_safe_string_base.md#function-formatimpl_) (T \* dst, [**s32**](_l_m_s___types_8h.md#typedef-s32) dst\_size, const T \* format, va\_list arg) <br> |




## Public Functions Documentation




### function FixedSafeString [1/3]

```C++
inline sead::FixedSafeString::FixedSafeString () 
```




<hr>



### function FixedSafeString [2/3]

```C++
inline sead::FixedSafeString::FixedSafeString (
    const SafeString & str
) 
```




<hr>



### function FixedSafeString [3/3]

```C++
inline sead::FixedSafeString::FixedSafeString (
    const FixedSafeString & other
) 
```




<hr>



### function operator= 

```C++
inline FixedSafeString & sead::FixedSafeString::operator= (
    const FixedSafeString & other
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadSafeString.h`

