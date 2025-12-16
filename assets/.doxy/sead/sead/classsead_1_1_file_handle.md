

# Class sead::FileHandle



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FileHandle**](classsead_1_1_file_handle.md)





* `#include <seadFileDevice.h>`



Inherits the following classes: [sead::HandleBase](classsead_1_1_handle_base.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FileHandle**](#function-filehandle) () <br> |
|  bool | [**close**](#function-close) () <br> |
|  bool | [**flush**](#function-flush) () <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getCurrentSeekPos**](#function-getcurrentseekpos) () <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getDivSize**](#function-getdivsize) () const<br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getFileSize**](#function-getfilesize) () <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**read**](#function-read) ([**u8**](_l_m_s___types_8h.md#typedef-u8) \* outBuffer, [**u32**](_l_m_s___types_8h.md#typedef-u32) bytesToRead) <br> |
|  bool | [**seek**](#function-seek) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**FileDevice::SeekOrigin**](classsead_1_1_file_device.md#enum-seekorigin) origin) <br> |
|  bool | [**tryClose**](#function-tryclose) () <br> |
|  bool | [**tryFlush**](#function-tryflush) () <br> |
|  bool | [**tryGetCurrentSeekPos**](#function-trygetcurrentseekpos) ([**u32**](_l_m_s___types_8h.md#typedef-u32) \* pos) <br> |
|  bool | [**tryGetFileSize**](#function-trygetfilesize) ([**u32**](_l_m_s___types_8h.md#typedef-u32) \* size) <br> |
|  bool | [**tryRead**](#function-tryread) ([**u32**](_l_m_s___types_8h.md#typedef-u32) \* actual\_size, [**u8**](_l_m_s___types_8h.md#typedef-u8) \* data, [**u32**](_l_m_s___types_8h.md#typedef-u32) size) <br> |
|  bool | [**trySeek**](#function-tryseek) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**FileDevice::SeekOrigin**](classsead_1_1_file_device.md#enum-seekorigin) origin) <br> |
|  bool | [**tryWrite**](#function-trywrite) ([**u32**](_l_m_s___types_8h.md#typedef-u32) \* actual\_size, const [**u8**](_l_m_s___types_8h.md#typedef-u8) \* data, [**u32**](_l_m_s___types_8h.md#typedef-u32) size) <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**write**](#function-write) (const [**u8**](_l_m_s___types_8h.md#typedef-u8) \* data, [**u32**](_l_m_s___types_8h.md#typedef-u32) size) <br> |
| virtual  | [**~FileHandle**](#function-filehandle) () <br> |


## Public Functions inherited from sead::HandleBase

See [sead::HandleBase](classsead_1_1_handle_base.md)

| Type | Name |
| ---: | :--- |
|   | [**HandleBase**](classsead_1_1_handle_base.md#function-handlebase) () <br> |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**getDevice**](classsead_1_1_handle_base.md#function-getdevice) () const<br> |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**getOriginalDevice**](classsead_1_1_handle_base.md#function-getoriginaldevice) () const<br> |
|  bool | [**isOpened**](classsead_1_1_handle_base.md#function-isopened) () const<br> |
| virtual  | [**~HandleBase**](classsead_1_1_handle_base.md#function-handlebase) () <br> |














## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mDivSize**](#variable-mdivsize)  <br> |


## Protected Attributes inherited from sead::HandleBase

See [sead::HandleBase](classsead_1_1_handle_base.md)

| Type | Name |
| ---: | :--- |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**mDevice**](classsead_1_1_handle_base.md#variable-mdevice)  <br> |
|  [**HandleBuffer**](namespacesead.md#typedef-handlebuffer) | [**mHandleBuffer**](classsead_1_1_handle_base.md#variable-mhandlebuffer)  <br> |
|  [**FileDevice**](classsead_1_1_file_device.md) \* | [**mOriginalDevice**](classsead_1_1_handle_base.md#variable-moriginaldevice)  <br> |






































## Public Functions Documentation




### function FileHandle 

```C++
inline sead::FileHandle::FileHandle () 
```




<hr>



### function close 

```C++
bool sead::FileHandle::close () 
```




<hr>



### function flush 

```C++
bool sead::FileHandle::flush () 
```




<hr>



### function getCurrentSeekPos 

```C++
u32 sead::FileHandle::getCurrentSeekPos () 
```




<hr>



### function getDivSize 

```C++
inline u32 sead::FileHandle::getDivSize () const
```




<hr>



### function getFileSize 

```C++
u32 sead::FileHandle::getFileSize () 
```




<hr>



### function read 

```C++
u32 sead::FileHandle::read (
    u8 * outBuffer,
    u32 bytesToRead
) 
```




<hr>



### function seek 

```C++
bool sead::FileHandle::seek (
    s32 offset,
    FileDevice::SeekOrigin origin
) 
```




<hr>



### function tryClose 

```C++
bool sead::FileHandle::tryClose () 
```




<hr>



### function tryFlush 

```C++
bool sead::FileHandle::tryFlush () 
```




<hr>



### function tryGetCurrentSeekPos 

```C++
bool sead::FileHandle::tryGetCurrentSeekPos (
    u32 * pos
) 
```




<hr>



### function tryGetFileSize 

```C++
bool sead::FileHandle::tryGetFileSize (
    u32 * size
) 
```




<hr>



### function tryRead 

```C++
bool sead::FileHandle::tryRead (
    u32 * actual_size,
    u8 * data,
    u32 size
) 
```




<hr>



### function trySeek 

```C++
bool sead::FileHandle::trySeek (
    s32 offset,
    FileDevice::SeekOrigin origin
) 
```




<hr>



### function tryWrite 

```C++
bool sead::FileHandle::tryWrite (
    u32 * actual_size,
    const u8 * data,
    u32 size
) 
```




<hr>



### function write 

```C++
u32 sead::FileHandle::write (
    const u8 * data,
    u32 size
) 
```




<hr>



### function ~FileHandle 

```C++
inline virtual sead::FileHandle::~FileHandle () 
```




<hr>
## Protected Attributes Documentation




### variable mDivSize 

```C++
s32 sead::FileHandle::mDivSize;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/filedevice/seadFileDevice.h`

