

# Class al::ByamlIter



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ByamlIter**](classal_1_1ByamlIter.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**const**](structal_1_1NameToCreator.md) [**ByamlContainerHeader**](classal_1_1ByamlContainerHeader.md) \* | [**mContainerHeader**](#variable-mcontainerheader)  <br> |
|  [**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* | [**mData**](#variable-mdata)  <br> |
|  [**const**](structal_1_1NameToCreator.md) [**ByamlHeader**](classal_1_1ByamlHeader.md) \* | [**mHeader**](#variable-mheader)  <br> |
|  [**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* | [**mRootNode**](#variable-mrootnode)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ByamlIter**](#function-byamliter-14) () <br> |
|   | [**ByamlIter**](#function-byamliter-24) ([**const**](structal_1_1NameToCreator.md) [**ByamlIter**](classal_1_1ByamlIter.md) & other) <br> |
|   | [**ByamlIter**](#function-byamliter-34) ([**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* data) <br> |
|   | [**ByamlIter**](#function-byamliter-44) ([**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* data, [**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* rootNode) <br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**getByamlDataAndKeyName**](#function-getbyamldataandkeyname) ([**ByamlData**](classal_1_1ByamlData.md) \* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \*\* key, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**getByamlDataByIndex**](#function-getbyamldatabyindex) ([**ByamlData**](classal_1_1ByamlData.md) \* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**getByamlDataByKey**](#function-getbyamldatabykey) ([**ByamlData**](classal_1_1ByamlData.md) \* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**getByamlDataByKeyIndex**](#function-getbyamldatabykeyindex) ([**ByamlData**](classal_1_1ByamlData.md) \* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**const**](structal_1_1NameToCreator.md) [**ByamlHeader**](classal_1_1ByamlHeader.md) \* | [**getHeader**](#function-getheader) () const<br> |
|  [**ByamlIter**](classal_1_1ByamlIter.md) | [**getIterByIndex**](#function-getiterbyindex) ([**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**ByamlIter**](classal_1_1ByamlIter.md) | [**getIterByKey**](#function-getiterbykey) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**int**](structal_1_1NameToCreator.md) | [**getKeyIndex**](#function-getkeyindex) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**getKeyName**](#function-getkeyname) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \*\* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**int**](structal_1_1NameToCreator.md) | [**getSize**](#function-getsize) () const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isEqualData**](#function-isequaldata) ([**const**](structal_1_1NameToCreator.md) [**ByamlIter**](classal_1_1ByamlIter.md) & other) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isExistKey**](#function-isexistkey) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isTypeArray**](#function-istypearray) () const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isTypeContainer**](#function-istypecontainer) () const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isTypeHash**](#function-istypehash) () const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**isValid**](#function-isvalid) () const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryConvertBinary**](#function-tryconvertbinary) ([**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \*\* out, [**int**](structal_1_1NameToCreator.md) \* size, [**const**](structal_1_1NameToCreator.md) [**ByamlData**](classal_1_1ByamlData.md) \* data) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryConvertBool**](#function-tryconvertbool) ([**bool**](structal_1_1NameToCreator.md) \* out, [**const**](structal_1_1NameToCreator.md) [**ByamlData**](classal_1_1ByamlData.md) \* data) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryConvertFloat**](#function-tryconvertfloat) ([**float**](structal_1_1NameToCreator.md) \* out, [**const**](structal_1_1NameToCreator.md) [**ByamlData**](classal_1_1ByamlData.md) \* data) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryConvertInt**](#function-tryconvertint) ([**int**](structal_1_1NameToCreator.md) \* out, [**const**](structal_1_1NameToCreator.md) [**ByamlData**](classal_1_1ByamlData.md) \* data) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryConvertIter**](#function-tryconvertiter) ([**ByamlIter**](classal_1_1ByamlIter.md) \* iter, [**const**](structal_1_1NameToCreator.md) [**ByamlData**](classal_1_1ByamlData.md) \* data) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryConvertString**](#function-tryconvertstring) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \*\* out, [**const**](structal_1_1NameToCreator.md) [**ByamlData**](classal_1_1ByamlData.md) \* data) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetBinaryByIndex**](#function-trygetbinarybyindex) ([**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \*\* out, [**int**](structal_1_1NameToCreator.md) \* size, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetBinaryByKey**](#function-trygetbinarybykey) ([**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \*\* out, [**int**](structal_1_1NameToCreator.md) \* size, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetBoolByIndex**](#function-trygetboolbyindex) ([**bool**](structal_1_1NameToCreator.md) \* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetBoolByKey**](#function-trygetboolbykey) ([**bool**](structal_1_1NameToCreator.md) \* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetFloatByIndex**](#function-trygetfloatbyindex) ([**float**](structal_1_1NameToCreator.md) \* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetFloatByKey**](#function-trygetfloatbykey) ([**float**](structal_1_1NameToCreator.md) \* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetIntByIndex**](#function-trygetintbyindex) ([**int**](structal_1_1NameToCreator.md) \* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetIntByKey**](#function-trygetintbykey) ([**int**](structal_1_1NameToCreator.md) \* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetIterAndKeyNameByIndex**](#function-trygetiterandkeynamebyindex) ([**ByamlIter**](classal_1_1ByamlIter.md) \* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \*\* key, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetIterByIndex**](#function-trygetiterbyindex) ([**ByamlIter**](classal_1_1ByamlIter.md) \* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetIterByKey**](#function-trygetiterbykey) ([**ByamlIter**](classal_1_1ByamlIter.md) \* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetStringByIndex**](#function-trygetstringbyindex) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \*\* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**tryGetStringByKey**](#function-trygetstringbykey) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \*\* out, [**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* key) const<br> |




























## Public Attributes Documentation




### variable mContainerHeader 

```C++
const ByamlContainerHeader* al::ByamlIter::mContainerHeader;
```




<hr>



### variable mData 

```C++
const u8* al::ByamlIter::mData;
```




<hr>



### variable mHeader 

```C++
const ByamlHeader* al::ByamlIter::mHeader;
```




<hr>



### variable mRootNode 

```C++
const u8* al::ByamlIter::mRootNode;
```




<hr>
## Public Functions Documentation




### function ByamlIter [1/4]

```C++
al::ByamlIter::ByamlIter () 
```




<hr>



### function ByamlIter [2/4]

```C++
al::ByamlIter::ByamlIter (
    const  ByamlIter & other
) 
```




<hr>



### function ByamlIter [3/4]

```C++
al::ByamlIter::ByamlIter (
    const  u8 * data
) 
```




<hr>



### function ByamlIter [4/4]

```C++
al::ByamlIter::ByamlIter (
    const  u8 * data,
    const  u8 * rootNode
) 
```




<hr>



### function getByamlDataAndKeyName 

```C++
bool al::ByamlIter::getByamlDataAndKeyName (
    ByamlData * out,
    const  char ** key,
    int index
) const
```




<hr>



### function getByamlDataByIndex 

```C++
bool al::ByamlIter::getByamlDataByIndex (
    ByamlData * out,
    int index
) const
```




<hr>



### function getByamlDataByKey 

```C++
bool al::ByamlIter::getByamlDataByKey (
    ByamlData * out,
    const  char * key
) const
```




<hr>



### function getByamlDataByKeyIndex 

```C++
bool al::ByamlIter::getByamlDataByKeyIndex (
    ByamlData * out,
    int index
) const
```




<hr>



### function getHeader 

```C++
inline const  ByamlHeader * al::ByamlIter::getHeader () const
```




<hr>



### function getIterByIndex 

```C++
ByamlIter al::ByamlIter::getIterByIndex (
    int index
) const
```




<hr>



### function getIterByKey 

```C++
ByamlIter al::ByamlIter::getIterByKey (
    const  char * key
) const
```




<hr>



### function getKeyIndex 

```C++
int al::ByamlIter::getKeyIndex (
    const  char * key
) const
```




<hr>



### function getKeyName 

```C++
bool al::ByamlIter::getKeyName (
    const  char ** out,
    int index
) const
```




<hr>



### function getSize 

```C++
int al::ByamlIter::getSize () const
```




<hr>



### function isEqualData 

```C++
bool al::ByamlIter::isEqualData (
    const  ByamlIter & other
) const
```




<hr>



### function isExistKey 

```C++
bool al::ByamlIter::isExistKey (
    const  char * key
) const
```




<hr>



### function isTypeArray 

```C++
bool al::ByamlIter::isTypeArray () const
```




<hr>



### function isTypeContainer 

```C++
bool al::ByamlIter::isTypeContainer () const
```




<hr>



### function isTypeHash 

```C++
bool al::ByamlIter::isTypeHash () const
```




<hr>



### function isValid 

```C++
bool al::ByamlIter::isValid () const
```




<hr>



### function tryConvertBinary 

```C++
bool al::ByamlIter::tryConvertBinary (
    const  u8 ** out,
    int * size,
    const  ByamlData * data
) const
```




<hr>



### function tryConvertBool 

```C++
bool al::ByamlIter::tryConvertBool (
    bool * out,
    const  ByamlData * data
) const
```




<hr>



### function tryConvertFloat 

```C++
bool al::ByamlIter::tryConvertFloat (
    float * out,
    const  ByamlData * data
) const
```




<hr>



### function tryConvertInt 

```C++
bool al::ByamlIter::tryConvertInt (
    int * out,
    const  ByamlData * data
) const
```




<hr>



### function tryConvertIter 

```C++
bool al::ByamlIter::tryConvertIter (
    ByamlIter * iter,
    const  ByamlData * data
) const
```




<hr>



### function tryConvertString 

```C++
bool al::ByamlIter::tryConvertString (
    const  char ** out,
    const  ByamlData * data
) const
```




<hr>



### function tryGetBinaryByIndex 

```C++
bool al::ByamlIter::tryGetBinaryByIndex (
    const  u8 ** out,
    int * size,
    int index
) const
```




<hr>



### function tryGetBinaryByKey 

```C++
bool al::ByamlIter::tryGetBinaryByKey (
    const  u8 ** out,
    int * size,
    const  char * key
) const
```




<hr>



### function tryGetBoolByIndex 

```C++
bool al::ByamlIter::tryGetBoolByIndex (
    bool * out,
    int index
) const
```




<hr>



### function tryGetBoolByKey 

```C++
bool al::ByamlIter::tryGetBoolByKey (
    bool * out,
    const  char * key
) const
```




<hr>



### function tryGetFloatByIndex 

```C++
bool al::ByamlIter::tryGetFloatByIndex (
    float * out,
    int index
) const
```




<hr>



### function tryGetFloatByKey 

```C++
bool al::ByamlIter::tryGetFloatByKey (
    float * out,
    const  char * key
) const
```




<hr>



### function tryGetIntByIndex 

```C++
bool al::ByamlIter::tryGetIntByIndex (
    int * out,
    int index
) const
```




<hr>



### function tryGetIntByKey 

```C++
bool al::ByamlIter::tryGetIntByKey (
    int * out,
    const  char * key
) const
```




<hr>



### function tryGetIterAndKeyNameByIndex 

```C++
bool al::ByamlIter::tryGetIterAndKeyNameByIndex (
    ByamlIter * out,
    const  char ** key,
    int index
) const
```




<hr>



### function tryGetIterByIndex 

```C++
bool al::ByamlIter::tryGetIterByIndex (
    ByamlIter * out,
    int index
) const
```




<hr>



### function tryGetIterByKey 

```C++
bool al::ByamlIter::tryGetIterByKey (
    ByamlIter * out,
    const  char * key
) const
```




<hr>



### function tryGetStringByIndex 

```C++
bool al::ByamlIter::tryGetStringByIndex (
    const  char ** out,
    int index
) const
```




<hr>



### function tryGetStringByKey 

```C++
bool al::ByamlIter::tryGetStringByKey (
    const  char ** out,
    const  char * key
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Yaml/alByamlIter.h`

