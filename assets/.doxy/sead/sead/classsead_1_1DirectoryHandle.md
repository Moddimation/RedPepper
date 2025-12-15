

# Class sead::DirectoryHandle



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**DirectoryHandle**](classsead_1_1DirectoryHandle.md)








Inherits the following classes: [sead::HandleBase](classsead_1_1HandleBase.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**DirectoryHandle**](#function-directoryhandle) () <br> |
|  bool | [**close**](#function-close) () <br> |
|  u32 | [**read**](#function-read) ([**DirectoryEntry**](structsead_1_1DirectoryEntry.md) \* entries, u32 count) <br> |
|  bool | [**tryClose**](#function-tryclose) () <br> |
|  bool | [**tryRead**](#function-tryread) (u32 \* actual\_count, [**DirectoryEntry**](structsead_1_1DirectoryEntry.md) \* entries, u32 count) <br> |
| virtual  | [**~DirectoryHandle**](#function-directoryhandle) () <br> |


## Public Functions inherited from sead::HandleBase

See [sead::HandleBase](classsead_1_1HandleBase.md)

| Type | Name |
| ---: | :--- |
|   | [**HandleBase**](classsead_1_1HandleBase.md#function-handlebase) () <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**getDevice**](classsead_1_1HandleBase.md#function-getdevice) () const<br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**getOriginalDevice**](classsead_1_1HandleBase.md#function-getoriginaldevice) () const<br> |
|  bool | [**isOpened**](classsead_1_1HandleBase.md#function-isopened) () const<br> |
| virtual  | [**~HandleBase**](classsead_1_1HandleBase.md#function-handlebase) () <br> |
















## Protected Attributes inherited from sead::HandleBase

See [sead::HandleBase](classsead_1_1HandleBase.md)

| Type | Name |
| ---: | :--- |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**mDevice**](classsead_1_1HandleBase.md#variable-mdevice)  <br> |
|  [**HandleBuffer**](classsead_1_1SafeArray.md) | [**mHandleBuffer**](classsead_1_1HandleBase.md#variable-mhandlebuffer)  <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**mOriginalDevice**](classsead_1_1HandleBase.md#variable-moriginaldevice)  <br> |






































## Public Functions Documentation




### function DirectoryHandle 

```C++
inline sead::DirectoryHandle::DirectoryHandle () 
```




<hr>



### function close 

```C++
bool sead::DirectoryHandle::close () 
```




<hr>



### function read 

```C++
u32 sead::DirectoryHandle::read (
    DirectoryEntry * entries,
    u32 count
) 
```




<hr>



### function tryClose 

```C++
bool sead::DirectoryHandle::tryClose () 
```




<hr>



### function tryRead 

```C++
bool sead::DirectoryHandle::tryRead (
    u32 * actual_count,
    DirectoryEntry * entries,
    u32 count
) 
```




<hr>



### function ~DirectoryHandle 

```C++
inline virtual sead::DirectoryHandle::~DirectoryHandle () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/filedevice/seadFileDevice.h`

