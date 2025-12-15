

# Class sead::FileDevice



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FileDevice**](classsead_1_1FileDevice.md)








Inherits the following classes: [sead::TListNode](classsead_1_1TListNode.md),  [sead::IDisposer](classsead_1_1IDisposer.md)












## Classes

| Type | Name |
| ---: | :--- |
| struct | [**LoadArg**](structsead_1_1FileDevice_1_1LoadArg.md) <br> |
| struct | [**SaveArg**](structsead_1_1FileDevice_1_1SaveArg.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**FileOpenFlag**](#enum-fileopenflag)  <br> |
| enum  | [**SeekOrigin**](#enum-seekorigin)  <br> |






## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1IDisposer.md#enum-heapnulloption)  <br> |












## Public Attributes inherited from sead::TListNode

See [sead::TListNode](classsead_1_1TListNode.md)

| Type | Name |
| ---: | :--- |
|  T | [**mData**](classsead_1_1TListNode.md#variable-mdata)  <br> |
|  [**TList**](classsead_1_1TList.md)&lt; T &gt; \* | [**mList**](classsead_1_1TListNode.md#variable-mlist)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const s32 | [**cBufferMinAlignment**](#variable-cbufferminalignment)   = `0x40`<br> |
























































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FileDevice**](#function-filedevice-12) () <br> |
|   | [**FileDevice**](#function-filedevice-22) (const [**SafeString**](classsead_1_1SafeStringBase.md) & name) <br> |
|  bool | [**close**](#function-close) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  bool | [**closeDirectory**](#function-closedirectory) ([**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle) <br> |
|  bool | [**flush**](#function-flush) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  u32 | [**getCurrentSeekPos**](#function-getcurrentseekpos) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  const [**SafeString**](classsead_1_1SafeStringBase.md) & | [**getDriveName**](#function-getdrivename) () const<br> |
|  u32 | [**getFileSize**](#function-getfilesize-12) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
|  u32 | [**getFileSize**](#function-getfilesize-22) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  s32 | [**getLastRawError**](#function-getlastrawerror) () const<br> |
|  bool | [**hasPermission**](#function-haspermission) () const<br> |
|  bool | [**isAvailable**](#function-isavailable) () const<br> |
|  bool | [**isExistDirectory**](#function-isexistdirectory) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
|  bool | [**isExistFile**](#function-isexistfile) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
| virtual bool | [**isMatchDevice\_**](#function-ismatchdevice_) (const [**HandleBase**](classsead_1_1HandleBase.md) \* handle) const<br> |
|  bool | [**makeDirectory**](#function-makedirectory) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path, u32 x) <br> |
|  bool | [**makeDirectoryWithParent**](#function-makedirectorywithparent) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path, u32 x) <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**open**](#function-open) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, const [**SafeString**](classsead_1_1SafeStringBase.md) & path, FileOpenFlag flag, u32 divSize=0) <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**openDirectory**](#function-opendirectory) ([**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
|  u32 | [**read**](#function-read) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, u8 \* data, u32 size) <br> |
|  u32 | [**readDirectory**](#function-readdirectory) ([**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle, [**DirectoryEntry**](structsead_1_1DirectoryEntry.md) \* entries, u32 num\_entries) <br> |
|  bool | [**remove**](#function-remove) (const [**SafeString**](classsead_1_1SafeStringBase.md) & str) <br> |
| virtual void | [**resolveDirectoryPath**](#function-resolvedirectorypath) ([**BufferedSafeString**](classsead_1_1BufferedSafeStringBase.md) \* out, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) const<br> |
| virtual void | [**resolveFilePath**](#function-resolvefilepath) ([**BufferedSafeString**](classsead_1_1BufferedSafeStringBase.md) \* out, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) const<br> |
|  bool | [**save**](#function-save) ([**SaveArg**](structsead_1_1FileDevice_1_1SaveArg.md) & arg) <br> |
|  bool | [**seek**](#function-seek) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, s32 offset, SeekOrigin origin) <br> |
|  void | [**setDriveName**](#function-setdrivename) (const [**SafeString**](classsead_1_1SafeStringBase.md) & name) <br> |
|  void | [**setHasPermission**](#function-sethaspermission) (bool perm) <br> |
| virtual void | [**traceDirectoryPath**](#function-tracedirectorypath) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path) const<br> |
| virtual void | [**traceFilePath**](#function-tracefilepath) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path) const<br> |
|  bool | [**tryClose**](#function-tryclose) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  bool | [**tryCloseDirectory**](#function-tryclosedirectory) ([**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle) <br> |
|  bool | [**tryFlush**](#function-tryflush) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  bool | [**tryGetCurrentSeekPos**](#function-trygetcurrentseekpos) (u32 \* seekPos, [**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  bool | [**tryGetFileSize**](#function-trygetfilesize-12) (u32 \* fileSize, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
|  bool | [**tryGetFileSize**](#function-trygetfilesize-22) (u32 \* size, [**FileHandle**](classsead_1_1FileHandle.md) \* handle) <br> |
|  bool | [**tryIsExistDirectory**](#function-tryisexistdirectory) (bool \* exists, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
|  bool | [**tryIsExistFile**](#function-tryisexistfile) (bool \* exists, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
|  u8 \* | [**tryLoad**](#function-tryload) ([**LoadArg**](structsead_1_1FileDevice_1_1LoadArg.md) & arg) <br> |
|  bool | [**tryMakeDirectory**](#function-trymakedirectory) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path, u32) <br> |
|  bool | [**tryMakeDirectoryWithParent**](#function-trymakedirectorywithparent) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path, u32) <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**tryOpen**](#function-tryopen) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, const [**SafeString**](classsead_1_1SafeStringBase.md) & path, FileOpenFlag flag, u32 divSize=0) <br> |
|  [**FileDevice**](classsead_1_1FileDevice.md) \* | [**tryOpenDirectory**](#function-tryopendirectory) ([**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) <br> |
|  bool | [**tryRead**](#function-tryread) (u32 \* bytesRead, [**FileHandle**](classsead_1_1FileHandle.md) \* handle, u8 \* outBuffer, u32 bytesToRead) <br> |
|  bool | [**tryReadDirectory**](#function-tryreaddirectory) (u32 \* entriesRead, [**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle, [**DirectoryEntry**](structsead_1_1DirectoryEntry.md) \* entries, u32 entriesToRead) <br> |
|  bool | [**tryRemove**](#function-tryremove) (const [**SafeString**](classsead_1_1SafeStringBase.md) & str) <br> |
|  bool | [**trySave**](#function-trysave) ([**SaveArg**](structsead_1_1FileDevice_1_1SaveArg.md) & arg) <br> |
|  bool | [**trySeek**](#function-tryseek) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, s32 offset, SeekOrigin origin) <br> |
|  bool | [**tryWrite**](#function-trywrite) (u32 \* bytesWritten, [**FileHandle**](classsead_1_1FileHandle.md) \* handle, const u8 \* inBuffer, u32 bytesToWrite) <br> |
|  u32 | [**write**](#function-write) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, const u8 \* data, u32 size) <br> |
| virtual  | [**~FileDevice**](#function-filedevice) () <br> |


## Public Functions inherited from sead::TListNode

See [sead::TListNode](classsead_1_1TListNode.md)

| Type | Name |
| ---: | :--- |
|   | [**TListNode**](classsead_1_1TListNode.md#function-tlistnode-12) () <br> |
|   | [**TListNode**](classsead_1_1TListNode.md#function-tlistnode-22) (T data) <br> |
|  void | [**erase**](classsead_1_1TListNode.md#function-erase) () <br> |


## Public Functions inherited from sead::ListNode

See [sead::ListNode](classsead_1_1ListNode.md)

| Type | Name |
| ---: | :--- |
|   | [**ListNode**](classsead_1_1ListNode.md#function-listnode) () <br> |
|  bool | [**isLinked**](classsead_1_1ListNode.md#function-islinked) () const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**next**](classsead_1_1ListNode.md#function-next) () const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**prev**](classsead_1_1ListNode.md#function-prev) () const<br> |


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-22) ([**Heap**](classsead_1_1Heap.md) \* disposer\_heap, HeapNullOption option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1IDisposer.md#function-idisposer) () <br> |








## Public Static Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|  u32 | [**getListNodeOffset**](classsead_1_1IDisposer.md#function-getlistnodeoffset) () <br> |


















## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**FixedSafeString**](classsead_1_1FixedSafeString.md)&lt; 32 &gt; | [**mDriveName**](#variable-mdrivename)  <br> |
|  bool | [**mPermission**](#variable-mpermission)  <br> |
































































## Protected Functions

| Type | Name |
| ---: | :--- |
| virtual bool | [**doCloseDirectory\_**](#function-doclosedirectory_) ([**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle) = 0<br> |
| virtual bool | [**doClose\_**](#function-doclose_) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) = 0<br> |
| virtual bool | [**doFlush\_**](#function-doflush_) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle) = 0<br> |
| virtual bool | [**doGetCurrentSeekPos\_**](#function-dogetcurrentseekpos_) (u32 \* seekPos, [**FileHandle**](classsead_1_1FileHandle.md) \* handle) = 0<br> |
| virtual bool | [**doGetFileSize\_**](#function-dogetfilesize_-12) (u32 \* fileSize, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) = 0<br> |
| virtual bool | [**doGetFileSize\_**](#function-dogetfilesize_-22) (u32 \* fileSize, [**FileHandle**](classsead_1_1FileHandle.md) \* handle) = 0<br> |
| virtual s32 | [**doGetLastRawError\_**](#function-dogetlastrawerror_) () const = 0<br> |
| virtual bool | [**doIsAvailable\_**](#function-doisavailable_) () const = 0<br> |
| virtual bool | [**doIsExistDirectory\_**](#function-doisexistdirectory_) (bool \* exists, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) = 0<br> |
| virtual bool | [**doIsExistFile\_**](#function-doisexistfile_) (bool \* exists, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) = 0<br> |
| virtual u8 \* | [**doLoad\_**](#function-doload_) ([**LoadArg**](structsead_1_1FileDevice_1_1LoadArg.md) & arg) <br> |
| virtual bool | [**doMakeDirectory\_**](#function-domakedirectory_) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path, u32) = 0<br> |
| virtual [**FileDevice**](classsead_1_1FileDevice.md) \* | [**doOpenDirectory\_**](#function-doopendirectory_) ([**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) = 0<br> |
| virtual [**FileDevice**](classsead_1_1FileDevice.md) \* | [**doOpen\_**](#function-doopen_) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, const [**SafeString**](classsead_1_1SafeStringBase.md) & path, FileOpenFlag flag) = 0<br> |
| virtual bool | [**doReadDirectory\_**](#function-doreaddirectory_) (u32 \* entriesRead, [**DirectoryHandle**](classsead_1_1DirectoryHandle.md) \* handle, [**DirectoryEntry**](structsead_1_1DirectoryEntry.md) \* entries, u32 entriesToRead) = 0<br> |
| virtual bool | [**doRead\_**](#function-doread_) (u32 \* bytesRead, [**FileHandle**](classsead_1_1FileHandle.md) \* handle, u8 \* outBuffer, u32 bytesToRead) = 0<br> |
| virtual bool | [**doRemove\_**](#function-doremove_) (const [**SafeString**](classsead_1_1SafeStringBase.md) & str) = 0<br> |
| virtual void | [**doResolvePath\_**](#function-doresolvepath_) ([**BufferedSafeString**](classsead_1_1BufferedSafeStringBase.md) \* out, const [**SafeString**](classsead_1_1SafeStringBase.md) & path) const<br> |
| virtual bool | [**doSave\_**](#function-dosave_) ([**SaveArg**](structsead_1_1FileDevice_1_1SaveArg.md) & arg) <br> |
| virtual bool | [**doSeek\_**](#function-doseek_) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, s32 offset, SeekOrigin origin) = 0<br> |
| virtual void | [**doTracePath\_**](#function-dotracepath_) (const [**SafeString**](classsead_1_1SafeStringBase.md) & path) const<br> |
| virtual bool | [**doWrite\_**](#function-dowrite_) (u32 \* bytesWritten, [**FileHandle**](classsead_1_1FileHandle.md) \* handle, const u8 \* inBuffer, u32 bytesToWrite) = 0<br> |
|  [**HandleBuffer**](classsead_1_1SafeArray.md) & | [**getHandleBaseHandleBuffer\_**](#function-gethandlebasehandlebuffer_) ([**HandleBase**](classsead_1_1HandleBase.md) \* handle) const<br> |
|  void | [**setFileHandleDivSize\_**](#function-setfilehandledivsize_) ([**FileHandle**](classsead_1_1FileHandle.md) \* handle, u32 divSize) const<br> |
|  void | [**setHandleBaseFileDevice\_**](#function-sethandlebasefiledevice_) ([**HandleBase**](classsead_1_1HandleBase.md) \* handle, [**FileDevice**](classsead_1_1FileDevice.md) \* device) const<br> |
|  void | [**setHandleBaseOriginalFileDevice\_**](#function-sethandlebaseoriginalfiledevice_) ([**HandleBase**](classsead_1_1HandleBase.md) \* handle, [**FileDevice**](classsead_1_1FileDevice.md) \* device) const<br> |






## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1Heap.md) \* | [**getDisposerHeap\_**](classsead_1_1IDisposer.md#function-getdisposerheap_) () const<br> |










## Public Types Documentation




### enum FileOpenFlag 

```C++
enum sead::FileDevice::FileOpenFlag {
    cFileOpenFlag_ReadOnly = 0,
    cFileOpenFlag_WriteOnly = 1,
    cFileOpenFlag_ReadWrite = 2,
    cFileOpenFlag_Create = 3
};
```




<hr>



### enum SeekOrigin 

```C++
enum sead::FileDevice::SeekOrigin {
    cSeekOrigin_Begin = 0,
    cSeekOrigin_Current = 1,
    cSeekOrigin_End = 2
};
```




<hr>
## Public Static Attributes Documentation




### variable cBufferMinAlignment 

```C++
const s32 sead::FileDevice::cBufferMinAlignment;
```




<hr>
## Public Functions Documentation




### function FileDevice [1/2]

```C++
inline sead::FileDevice::FileDevice () 
```




<hr>



### function FileDevice [2/2]

```C++
inline explicit sead::FileDevice::FileDevice (
    const SafeString & name
) 
```




<hr>



### function close 

```C++
inline bool sead::FileDevice::close (
    FileHandle * handle
) 
```




<hr>



### function closeDirectory 

```C++
inline bool sead::FileDevice::closeDirectory (
    DirectoryHandle * handle
) 
```




<hr>



### function flush 

```C++
inline bool sead::FileDevice::flush (
    FileHandle * handle
) 
```




<hr>



### function getCurrentSeekPos 

```C++
inline u32 sead::FileDevice::getCurrentSeekPos (
    FileHandle * handle
) 
```




<hr>



### function getDriveName 

```C++
inline const SafeString & sead::FileDevice::getDriveName () const
```




<hr>



### function getFileSize [1/2]

```C++
inline u32 sead::FileDevice::getFileSize (
    const SafeString & path
) 
```




<hr>



### function getFileSize [2/2]

```C++
inline u32 sead::FileDevice::getFileSize (
    FileHandle * handle
) 
```




<hr>



### function getLastRawError 

```C++
s32 sead::FileDevice::getLastRawError () const
```




<hr>



### function hasPermission 

```C++
inline bool sead::FileDevice::hasPermission () const
```




<hr>



### function isAvailable 

```C++
bool sead::FileDevice::isAvailable () const
```




<hr>



### function isExistDirectory 

```C++
inline bool sead::FileDevice::isExistDirectory (
    const SafeString & path
) 
```




<hr>



### function isExistFile 

```C++
inline bool sead::FileDevice::isExistFile (
    const SafeString & path
) 
```




<hr>



### function isMatchDevice\_ 

```C++
virtual bool sead::FileDevice::isMatchDevice_ (
    const HandleBase * handle
) const
```




<hr>



### function makeDirectory 

```C++
inline bool sead::FileDevice::makeDirectory (
    const SafeString & path,
    u32 x
) 
```




<hr>



### function makeDirectoryWithParent 

```C++
inline bool sead::FileDevice::makeDirectoryWithParent (
    const SafeString & path,
    u32 x
) 
```




<hr>



### function open 

```C++
inline FileDevice * sead::FileDevice::open (
    FileHandle * handle,
    const SafeString & path,
    FileOpenFlag flag,
    u32 divSize=0
) 
```




<hr>



### function openDirectory 

```C++
inline FileDevice * sead::FileDevice::openDirectory (
    DirectoryHandle * handle,
    const SafeString & path
) 
```




<hr>



### function read 

```C++
inline u32 sead::FileDevice::read (
    FileHandle * handle,
    u8 * data,
    u32 size
) 
```




<hr>



### function readDirectory 

```C++
inline u32 sead::FileDevice::readDirectory (
    DirectoryHandle * handle,
    DirectoryEntry * entries,
    u32 num_entries
) 
```




<hr>



### function remove 

```C++
inline bool sead::FileDevice::remove (
    const SafeString & str
) 
```




<hr>



### function resolveDirectoryPath 

```C++
virtual void sead::FileDevice::resolveDirectoryPath (
    BufferedSafeString * out,
    const SafeString & path
) const
```




<hr>



### function resolveFilePath 

```C++
virtual void sead::FileDevice::resolveFilePath (
    BufferedSafeString * out,
    const SafeString & path
) const
```




<hr>



### function save 

```C++
inline bool sead::FileDevice::save (
    SaveArg & arg
) 
```




<hr>



### function seek 

```C++
inline bool sead::FileDevice::seek (
    FileHandle * handle,
    s32 offset,
    SeekOrigin origin
) 
```




<hr>



### function setDriveName 

```C++
inline void sead::FileDevice::setDriveName (
    const SafeString & name
) 
```




<hr>



### function setHasPermission 

```C++
inline void sead::FileDevice::setHasPermission (
    bool perm
) 
```




<hr>



### function traceDirectoryPath 

```C++
virtual void sead::FileDevice::traceDirectoryPath (
    const SafeString & path
) const
```




<hr>



### function traceFilePath 

```C++
virtual void sead::FileDevice::traceFilePath (
    const SafeString & path
) const
```




<hr>



### function tryClose 

```C++
bool sead::FileDevice::tryClose (
    FileHandle * handle
) 
```




<hr>



### function tryCloseDirectory 

```C++
bool sead::FileDevice::tryCloseDirectory (
    DirectoryHandle * handle
) 
```




<hr>



### function tryFlush 

```C++
bool sead::FileDevice::tryFlush (
    FileHandle * handle
) 
```




<hr>



### function tryGetCurrentSeekPos 

```C++
bool sead::FileDevice::tryGetCurrentSeekPos (
    u32 * seekPos,
    FileHandle * handle
) 
```




<hr>



### function tryGetFileSize [1/2]

```C++
bool sead::FileDevice::tryGetFileSize (
    u32 * fileSize,
    const SafeString & path
) 
```




<hr>



### function tryGetFileSize [2/2]

```C++
bool sead::FileDevice::tryGetFileSize (
    u32 * size,
    FileHandle * handle
) 
```




<hr>



### function tryIsExistDirectory 

```C++
bool sead::FileDevice::tryIsExistDirectory (
    bool * exists,
    const SafeString & path
) 
```




<hr>



### function tryIsExistFile 

```C++
bool sead::FileDevice::tryIsExistFile (
    bool * exists,
    const SafeString & path
) 
```




<hr>



### function tryLoad 

```C++
u8 * sead::FileDevice::tryLoad (
    LoadArg & arg
) 
```




<hr>



### function tryMakeDirectory 

```C++
bool sead::FileDevice::tryMakeDirectory (
    const SafeString & path,
    u32
) 
```




<hr>



### function tryMakeDirectoryWithParent 

```C++
bool sead::FileDevice::tryMakeDirectoryWithParent (
    const SafeString & path,
    u32
) 
```




<hr>



### function tryOpen 

```C++
FileDevice * sead::FileDevice::tryOpen (
    FileHandle * handle,
    const SafeString & path,
    FileOpenFlag flag,
    u32 divSize=0
) 
```




<hr>



### function tryOpenDirectory 

```C++
FileDevice * sead::FileDevice::tryOpenDirectory (
    DirectoryHandle * handle,
    const SafeString & path
) 
```




<hr>



### function tryRead 

```C++
bool sead::FileDevice::tryRead (
    u32 * bytesRead,
    FileHandle * handle,
    u8 * outBuffer,
    u32 bytesToRead
) 
```




<hr>



### function tryReadDirectory 

```C++
bool sead::FileDevice::tryReadDirectory (
    u32 * entriesRead,
    DirectoryHandle * handle,
    DirectoryEntry * entries,
    u32 entriesToRead
) 
```




<hr>



### function tryRemove 

```C++
bool sead::FileDevice::tryRemove (
    const SafeString & str
) 
```




<hr>



### function trySave 

```C++
bool sead::FileDevice::trySave (
    SaveArg & arg
) 
```




<hr>



### function trySeek 

```C++
bool sead::FileDevice::trySeek (
    FileHandle * handle,
    s32 offset,
    SeekOrigin origin
) 
```




<hr>



### function tryWrite 

```C++
bool sead::FileDevice::tryWrite (
    u32 * bytesWritten,
    FileHandle * handle,
    const u8 * inBuffer,
    u32 bytesToWrite
) 
```




<hr>



### function write 

```C++
inline u32 sead::FileDevice::write (
    FileHandle * handle,
    const u8 * data,
    u32 size
) 
```




<hr>



### function ~FileDevice 

```C++
virtual sead::FileDevice::~FileDevice () 
```




<hr>
## Protected Attributes Documentation




### variable mDriveName 

```C++
FixedSafeString<32> sead::FileDevice::mDriveName;
```




<hr>



### variable mPermission 

```C++
bool sead::FileDevice::mPermission;
```




<hr>
## Protected Functions Documentation




### function doCloseDirectory\_ 

```C++
virtual bool sead::FileDevice::doCloseDirectory_ (
    DirectoryHandle * handle
) = 0
```




<hr>



### function doClose\_ 

```C++
virtual bool sead::FileDevice::doClose_ (
    FileHandle * handle
) = 0
```




<hr>



### function doFlush\_ 

```C++
virtual bool sead::FileDevice::doFlush_ (
    FileHandle * handle
) = 0
```




<hr>



### function doGetCurrentSeekPos\_ 

```C++
virtual bool sead::FileDevice::doGetCurrentSeekPos_ (
    u32 * seekPos,
    FileHandle * handle
) = 0
```




<hr>



### function doGetFileSize\_ [1/2]

```C++
virtual bool sead::FileDevice::doGetFileSize_ (
    u32 * fileSize,
    const SafeString & path
) = 0
```




<hr>



### function doGetFileSize\_ [2/2]

```C++
virtual bool sead::FileDevice::doGetFileSize_ (
    u32 * fileSize,
    FileHandle * handle
) = 0
```




<hr>



### function doGetLastRawError\_ 

```C++
virtual s32 sead::FileDevice::doGetLastRawError_ () const = 0
```




<hr>



### function doIsAvailable\_ 

```C++
virtual bool sead::FileDevice::doIsAvailable_ () const = 0
```




<hr>



### function doIsExistDirectory\_ 

```C++
virtual bool sead::FileDevice::doIsExistDirectory_ (
    bool * exists,
    const SafeString & path
) = 0
```




<hr>



### function doIsExistFile\_ 

```C++
virtual bool sead::FileDevice::doIsExistFile_ (
    bool * exists,
    const SafeString & path
) = 0
```




<hr>



### function doLoad\_ 

```C++
virtual u8 * sead::FileDevice::doLoad_ (
    LoadArg & arg
) 
```




<hr>



### function doMakeDirectory\_ 

```C++
virtual bool sead::FileDevice::doMakeDirectory_ (
    const SafeString & path,
    u32
) = 0
```




<hr>



### function doOpenDirectory\_ 

```C++
virtual FileDevice * sead::FileDevice::doOpenDirectory_ (
    DirectoryHandle * handle,
    const SafeString & path
) = 0
```




<hr>



### function doOpen\_ 

```C++
virtual FileDevice * sead::FileDevice::doOpen_ (
    FileHandle * handle,
    const SafeString & path,
    FileOpenFlag flag
) = 0
```




<hr>



### function doReadDirectory\_ 

```C++
virtual bool sead::FileDevice::doReadDirectory_ (
    u32 * entriesRead,
    DirectoryHandle * handle,
    DirectoryEntry * entries,
    u32 entriesToRead
) = 0
```




<hr>



### function doRead\_ 

```C++
virtual bool sead::FileDevice::doRead_ (
    u32 * bytesRead,
    FileHandle * handle,
    u8 * outBuffer,
    u32 bytesToRead
) = 0
```




<hr>



### function doRemove\_ 

```C++
virtual bool sead::FileDevice::doRemove_ (
    const SafeString & str
) = 0
```




<hr>



### function doResolvePath\_ 

```C++
virtual void sead::FileDevice::doResolvePath_ (
    BufferedSafeString * out,
    const SafeString & path
) const
```




<hr>



### function doSave\_ 

```C++
virtual bool sead::FileDevice::doSave_ (
    SaveArg & arg
) 
```




<hr>



### function doSeek\_ 

```C++
virtual bool sead::FileDevice::doSeek_ (
    FileHandle * handle,
    s32 offset,
    SeekOrigin origin
) = 0
```




<hr>



### function doTracePath\_ 

```C++
virtual void sead::FileDevice::doTracePath_ (
    const SafeString & path
) const
```




<hr>



### function doWrite\_ 

```C++
virtual bool sead::FileDevice::doWrite_ (
    u32 * bytesWritten,
    FileHandle * handle,
    const u8 * inBuffer,
    u32 bytesToWrite
) = 0
```




<hr>



### function getHandleBaseHandleBuffer\_ 

```C++
HandleBuffer & sead::FileDevice::getHandleBaseHandleBuffer_ (
    HandleBase * handle
) const
```




<hr>



### function setFileHandleDivSize\_ 

```C++
void sead::FileDevice::setFileHandleDivSize_ (
    FileHandle * handle,
    u32 divSize
) const
```




<hr>



### function setHandleBaseFileDevice\_ 

```C++
void sead::FileDevice::setHandleBaseFileDevice_ (
    HandleBase * handle,
    FileDevice * device
) const
```




<hr>



### function setHandleBaseOriginalFileDevice\_ 

```C++
void sead::FileDevice::setHandleBaseOriginalFileDevice_ (
    HandleBase * handle,
    FileDevice * device
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/filedevice/seadFileDevice.h`

