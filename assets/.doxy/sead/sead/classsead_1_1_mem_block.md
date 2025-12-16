

# Class sead::MemBlock



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**MemBlock**](classsead_1_1_mem_block.md)





* `#include <seadMemBlock.h>`







































## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**FindManageArea**](#function-findmanagearea) (void \* ptr) <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getOffset**](#function-getoffset) () <br> |






## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**u16**](_l_m_s___types_8h.md#typedef-u16) | [**mHeapCheckTag**](#variable-mheapchecktag)  <br> |
|  [**ListNode**](classsead_1_1_list_node.md) | [**mListNode**](#variable-mlistnode)  <br> |
|  [**u16**](_l_m_s___types_8h.md#typedef-u16) | [**mOffset**](#variable-moffset)  <br> |
|  size\_t | [**mSize**](#variable-msize)  <br> |




















## Public Static Functions Documentation




### function FindManageArea 

```C++
static MemBlock * sead::MemBlock::FindManageArea (
    void * ptr
) 
```




<hr>



### function getOffset 

```C++
static inline u32 sead::MemBlock::getOffset () 
```




<hr>
## Protected Attributes Documentation




### variable mHeapCheckTag 

```C++
u16 sead::MemBlock::mHeapCheckTag;
```




<hr>



### variable mListNode 

```C++
ListNode sead::MemBlock::mListNode;
```




<hr>



### variable mOffset 

```C++
u16 sead::MemBlock::mOffset;
```




<hr>



### variable mSize 

```C++
size_t sead::MemBlock::mSize;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadMemBlock.h`

