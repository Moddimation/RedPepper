

# Class al::ByamlStringTableIter



[**ClassList**](annotated.md) **>** [**al**](namespaceal.md) **>** [**ByamlStringTableIter**](classal_1_1ByamlStringTableIter.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* | [**mData**](#variable-mdata)  <br> |
|  [**uintptr\_t**](structal_1_1NameToCreator.md) | [**mDataPtr**](#variable-mdataptr)  <br> |
|  [**const**](structal_1_1NameToCreator.md) Header \* | [**mHeader**](#variable-mheader)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ByamlStringTableIter**](#function-byamlstringtableiter) ([**const**](structal_1_1NameToCreator.md) [**u8**](structal_1_1NameToCreator.md) \* data) <br> |
|  [**int**](structal_1_1NameToCreator.md) | [**findStringIndex**](#function-findstringindex) ([**const**](structal_1_1NameToCreator.md) [**char**](structal_1_1NameToCreator.md) \* str) const<br> |
|  [**const**](structal_1_1NameToCreator.md) [**u32**](structal_1_1NameToCreator.md) \* | [**getAddressTable**](#function-getaddresstable) () const<br> |




























## Public Attributes Documentation




### variable mData 

```C++
const u8* al::ByamlStringTableIter::mData;
```




<hr>



### variable mDataPtr 

```C++
uintptr_t al::ByamlStringTableIter::mDataPtr;
```




<hr>



### variable mHeader 

```C++
const Header* al::ByamlStringTableIter::mHeader;
```




<hr>
## Public Functions Documentation




### function ByamlStringTableIter 

```C++
inline al::ByamlStringTableIter::ByamlStringTableIter (
    const  u8 * data
) 
```




<hr>



### function findStringIndex 

```C++
int al::ByamlStringTableIter::findStringIndex (
    const  char * str
) const
```




<hr>



### function getAddressTable 

```C++
inline const  u32 * al::ByamlStringTableIter::getAddressTable () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/al/include/Yaml/alByamlStringTableIter.h`

