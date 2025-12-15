

# Class sead::FixedSafeStringBase

**template &lt;typename T, s32 L&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FixedSafeStringBase**](classsead_1_1FixedSafeStringBase.md)








Inherits the following classes: [sead::BufferedSafeStringBase](classsead_1_1BufferedSafeStringBase.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  T | [**mBuffer**](#variable-mbuffer)  <br> |


## Public Attributes inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1BufferedSafeStringBase.md)

| Type | Name |
| ---: | :--- |
|   | [**else**](classsead_1_1BufferedSafeStringBase.md#variable-else)   = `/* multi line expression */`<br> |
|  s32 | [**size**](classsead_1_1BufferedSafeStringBase.md#variable-size)  <br> |








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
|   | [**FixedSafeStringBase**](#function-fixedsafestringbase-13) () <br> |
|   | [**FixedSafeStringBase**](#function-fixedsafestringbase-23) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & str) <br> |
|   | [**FixedSafeStringBase**](#function-fixedsafestringbase-33) (const [**FixedSafeStringBase**](classsead_1_1FixedSafeStringBase.md) & str) <br> |
|  [**FixedSafeStringBase**](classsead_1_1FixedSafeStringBase.md) & | [**operator=**](#function-operator) (const [**FixedSafeStringBase**](classsead_1_1FixedSafeStringBase.md) & other) <br> |


## Public Functions inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1BufferedSafeStringBase.md)

| Type | Name |
| ---: | :--- |
|   | [**BufferedSafeStringBase**](classsead_1_1BufferedSafeStringBase.md#function-bufferedsafestringbase) (const [**BufferedSafeStringBase**](classsead_1_1BufferedSafeStringBase.md) &) <br> |
|   | [**\_\_attribute\_\_**](classsead_1_1BufferedSafeStringBase.md#function-__attribute__) ((always\_inline)) <br> |
|  s32 | [**append**](classsead_1_1BufferedSafeStringBase.md#function-append-13) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & str, s32 append\_length=-1) <br>_Append append\_length characters from str._  |
|  s32 | [**append**](classsead_1_1BufferedSafeStringBase.md#function-append-23) (T c) <br>_Append a character._  |
|  s32 | [**append**](classsead_1_1BufferedSafeStringBase.md#function-append-33) (T c, s32 n) <br>_Append a character n times._  |
|  s32 | [**appendWithFormat**](classsead_1_1BufferedSafeStringBase.md#function-appendwithformat-13) (const T \* formatStr, ...) <br> |
|  s32 | [**appendWithFormat**](classsead_1_1BufferedSafeStringBase.md#function-appendwithformat-23) (const char \* formatStr, ...) <br> |
|  s32 | [**appendWithFormat**](classsead_1_1BufferedSafeStringBase.md#function-appendwithformat-33) (const char16 \* formatStr, ...) <br> |
|  s32 | [**appendWithFormatV**](classsead_1_1BufferedSafeStringBase.md#function-appendwithformatv-13) (const T \* formatStr, va\_list args) <br> |
|  s32 | [**appendWithFormatV**](classsead_1_1BufferedSafeStringBase.md#function-appendwithformatv-23) (const char \* formatStr, va\_list args) <br> |
|  s32 | [**appendWithFormatV**](classsead_1_1BufferedSafeStringBase.md#function-appendwithformatv-33) (const char16 \* formatStr, va\_list args) <br> |
|  s32 | [**chop**](classsead_1_1BufferedSafeStringBase.md#function-chop) (s32 num) <br> |
|  s32 | [**chopMatchedChar**](classsead_1_1BufferedSafeStringBase.md#function-chopmatchedchar-12) (T c) <br> |
|  s32 | [**chopMatchedChar**](classsead_1_1BufferedSafeStringBase.md#function-chopmatchedchar-22) (const T \* characters) <br> |
|  s32 | [**chopUnprintableAsciiChar**](classsead_1_1BufferedSafeStringBase.md#function-chopunprintableasciichar) () <br> |
|  void | [**clear**](classsead_1_1BufferedSafeStringBase.md#function-clear) () <br> |
|  s32 | [**convertFromMultiByteString**](classsead_1_1BufferedSafeStringBase.md#function-convertfrommultibytestring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; char &gt; & str, s32 str\_length) <br> |
|  s32 | [**convertFromWideCharString**](classsead_1_1BufferedSafeStringBase.md#function-convertfromwidecharstring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; char16 &gt; & str, s32 str\_length) <br> |
|  s32 | [**copy**](classsead_1_1BufferedSafeStringBase.md#function-copy) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**copyAt**](classsead_1_1BufferedSafeStringBase.md#function-copyat) (s32 at, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**copyAtWithTerminate**](classsead_1_1BufferedSafeStringBase.md#function-copyatwithterminate) (s32 at, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**cutOffCopy**](classsead_1_1BufferedSafeStringBase.md#function-cutoffcopy) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**cutOffCopyAt**](classsead_1_1BufferedSafeStringBase.md#function-cutoffcopyat) (s32 at, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & src, s32 copyLength=-1) <br> |
|  s32 | [**format**](classsead_1_1BufferedSafeStringBase.md#function-format-13) (const T \* format, ...) <br> |
|  s32 | [**format**](classsead_1_1BufferedSafeStringBase.md#function-format-23) (const char \* formatStr, ...) <br> |
|  s32 | [**format**](classsead_1_1BufferedSafeStringBase.md#function-format-33) (const char16 \* formatStr, ...) <br> |
|  s32 | [**formatV**](classsead_1_1BufferedSafeStringBase.md#function-formatv-13) (const T \* format, va\_list args) <br> |
|  s32 | [**formatV**](classsead_1_1BufferedSafeStringBase.md#function-formatv-23) (const char \* formatStr, va\_list args) <br> |
|  s32 | [**formatV**](classsead_1_1BufferedSafeStringBase.md#function-formatv-33) (const char16 \* formatStr, va\_list args) <br> |
|  T \* | [**getBuffer**](classsead_1_1BufferedSafeStringBase.md#function-getbuffer) () <br> |
|  s32 | [**getBufferSize**](classsead_1_1BufferedSafeStringBase.md#function-getbuffersize) () const<br> |
|   | [**if**](classsead_1_1BufferedSafeStringBase.md#function-if) (size&lt;= 0) <br> |
|  const T & | [**operator[]**](classsead_1_1BufferedSafeStringBase.md#function-operator) (s32 idx) const<br> |
|  s32 | [**prepend**](classsead_1_1BufferedSafeStringBase.md#function-prepend) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & str, s32 prepend\_length=-1) <br> |
|  s32 | [**removeSuffix**](classsead_1_1BufferedSafeStringBase.md#function-removesuffix) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & suffix) <br> |
|  s32 | [**replaceChar**](classsead_1_1BufferedSafeStringBase.md#function-replacechar) (T old\_char, T new\_char) <br> |
|  s32 | [**replaceCharList**](classsead_1_1BufferedSafeStringBase.md#function-replacecharlist) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & old\_chars, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & new\_chars) <br> |
|  s32 | [**replaceString**](classsead_1_1BufferedSafeStringBase.md#function-replacestring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & new\_str) <br> |
|  s32 | [**rstrip**](classsead_1_1BufferedSafeStringBase.md#function-rstrip) (const T \* characters) <br> |
|  s32 | [**rstripUnprintableAsciiChars**](classsead_1_1BufferedSafeStringBase.md#function-rstripunprintableasciichars) () <br> |
|  s32 | [**setReplaceString**](classsead_1_1BufferedSafeStringBase.md#function-setreplacestring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & target\_str, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & old\_str, const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & new\_str) <br> |
|  s32 | [**trim**](classsead_1_1BufferedSafeStringBase.md#function-trim) (s32 trim\_length) <br> |
|  s32 | [**trimMatchedString**](classsead_1_1BufferedSafeStringBase.md#function-trimmatchedstring) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; T &gt; & suffix) <br> |


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






















## Protected Attributes inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1BufferedSafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  s32 | [**mBufferSize**](classsead_1_1BufferedSafeStringBase.md#variable-mbuffersize)  <br> |


## Protected Attributes inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1SafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  const T \* | [**mStringTop**](classsead_1_1SafeStringBase.md#variable-mstringtop)  <br> |














































## Protected Functions inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1BufferedSafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  s32 | [**convertFromOtherType\_**](classsead_1_1BufferedSafeStringBase.md#function-convertfromothertype_) (const [**SafeStringBase**](classsead_1_1SafeStringBase.md)&lt; OtherType &gt; & src, s32 src\_size) <br> |
|  T \* | [**getMutableStringTop\_**](classsead_1_1BufferedSafeStringBase.md#function-getmutablestringtop_) () <br> |


## Protected Functions inherited from sead::SafeStringBase

See [sead::SafeStringBase](classsead_1_1SafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  const T & | [**unsafeAt\_**](classsead_1_1SafeStringBase.md#function-unsafeat_) (s32 idx) const<br> |




## Protected Static Functions inherited from sead::BufferedSafeStringBase

See [sead::BufferedSafeStringBase](classsead_1_1BufferedSafeStringBase.md)

| Type | Name |
| ---: | :--- |
|  s32 | [**formatImpl\_**](classsead_1_1BufferedSafeStringBase.md#function-formatimpl_) (T \* dst, s32 dst\_size, const T \* format, va\_list arg) <br> |




## Public Attributes Documentation




### variable mBuffer 

```C++
T sead::FixedSafeStringBase< T, L >::mBuffer[L];
```




<hr>
## Public Functions Documentation




### function FixedSafeStringBase [1/3]

```C++
inline sead::FixedSafeStringBase::FixedSafeStringBase () 
```




<hr>



### function FixedSafeStringBase [2/3]

```C++
inline sead::FixedSafeStringBase::FixedSafeStringBase (
    const SafeStringBase < T > & str
) 
```




<hr>



### function FixedSafeStringBase [3/3]

```C++
inline sead::FixedSafeStringBase::FixedSafeStringBase (
    const FixedSafeStringBase & str
) 
```




<hr>



### function operator= 

```C++
inline FixedSafeStringBase & sead::FixedSafeStringBase::operator= (
    const FixedSafeStringBase & other
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadSafeString.h`

