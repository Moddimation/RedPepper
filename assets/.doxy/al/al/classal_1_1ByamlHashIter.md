

# Class al::ByamlHashIter



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ByamlHashIter**](classal_1_1ByamlHashIter.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* | [**mData**](#variable-mdata)  <br> |
|  [**uintptr\_t**](structal_1_1NameToCreator.md) | [**mDataPtr**](#variable-mdataptr)  <br> |
|  [**const**](structal_1_1NameToCreator.md) Header \* | [**mHeader**](#variable-mheader)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ByamlHashIter**](#function-byamlhashiter) ([**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* data) <br> |
|  [**const**](structal_1_1NameToCreator.md) [**ByamlHashPair**](classal_1_1ByamlHashPair.md) \* | [**findPair**](#function-findpair) ([**int**](structal_1_1NameToCreator.md) keyIdx) const<br> |
|  [**bool**](structal_1_1NameToCreator.md) | [**getDataByKey**](#function-getdatabykey) ([**ByamlData**](classal_1_1ByamlData.md) \* out, [**int**](structal_1_1NameToCreator.md) index) const<br> |




























## Public Attributes Documentation




### variable mData 

```C++
const u8* al::ByamlHashIter::mData;
```




<hr>



### variable mDataPtr 

```C++
uintptr_t al::ByamlHashIter::mDataPtr;
```




<hr>



### variable mHeader 

```C++
const Header* al::ByamlHashIter::mHeader;
```




<hr>
## Public Functions Documentation




### function ByamlHashIter 

```C++
inline al::ByamlHashIter::ByamlHashIter (
    const  u8 * data
) 
```




<hr>



### function findPair 

```C++
const  ByamlHashPair * al::ByamlHashIter::findPair (
    int keyIdx
) const
```




<hr>



### function getDataByKey 

```C++
bool al::ByamlHashIter::getDataByKey (
    ByamlData * out,
    int index
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Yaml/alByamlHashIter.h`

