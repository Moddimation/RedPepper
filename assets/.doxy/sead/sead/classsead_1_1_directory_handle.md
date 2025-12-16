

# Class sead::DirectoryHandle



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**DirectoryHandle**](classsead_1_1_directory_handle.md)





* `#include <seadFileDevice.h>`



Inherits the following classes: [sead::HandleBase](classsead_1_1_handle_base.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**DirectoryHandle**](#function-directoryhandle) () <br> |
|  bool | [**close**](#function-close) () <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**read**](#function-read) ([**DirectoryEntry**](structsead_1_1_directory_entry.md) \* entries, [**u32**](_l_m_s___types_8h.md#typedef-u32) count) <br> |
|  bool | [**tryClose**](#function-tryclose) () <br> |
|  bool | [**tryRead**](#function-tryread) ([**u32**](_l_m_s___types_8h.md#typedef-u32) \* actual\_count, [**DirectoryEntry**](structsead_1_1_directory_entry.md) \* entries, [**u32**](_l_m_s___types_8h.md#typedef-u32) count) <br> |
| virtual  | [**~DirectoryHandle**](#function-directoryhandle) () <br> |


## Public Functions inherited from sead::HandleBase

See [sead::HandleBase](classsead_1_1_handle_base.md)

| Type | Name |
| ---: | :--- |
|   | [**HandleBase**](classsead_1_1_handle_base.md#function-handlebase) () <br> |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**getDevice**](classsead_1_1_handle_base.md#function-getdevice) () const<br> |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**getOriginalDevice**](classsead_1_1_handle_base.md#function-getoriginaldevice) () const<br> |
|  bool | [**isOpened**](classsead_1_1_handle_base.md#function-isopened) () const<br> |
| virtual  | [**~HandleBase**](classsead_1_1_handle_base.md#function-handlebase) () <br> |
















## Protected Attributes inherited from sead::HandleBase

See [sead::HandleBase](classsead_1_1_handle_base.md)

| Type | Name |
| ---: | :--- |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**mDevice**](classsead_1_1_handle_base.md#variable-mdevice)  <br> |
|  [**HandleBuffer**](namespacesead.md#typedef-handlebuffer) | [**mHandleBuffer**](classsead_1_1_handle_base.md#variable-mhandlebuffer)  <br> |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**mOriginalDevice**](classsead_1_1_handle_base.md#variable-moriginaldevice)  <br> |






































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

