

# Class sead::IDisposer



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**IDisposer**](classsead_1_1IDisposer.md)










Inherited by the following classes: [sead::CriticalSection](classsead_1_1CriticalSection.md),  [sead::FileDevice](classsead_1_1FileDevice.md),  [sead::Heap](classsead_1_1Heap.md),  [sead::MethodTreeNode](classsead_1_1MethodTreeNode.md),  [sead::TaskBase](classsead_1_1TaskBase.md)












## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](#enum-heapnulloption)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](#function-idisposer-12) () <br> |
|   | [**IDisposer**](#function-idisposer-22) ([**Heap**](classsead_1_1Heap.md) \* disposer\_heap, HeapNullOption option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](#function-idisposer) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  u32 | [**getListNodeOffset**](#function-getlistnodeoffset) () <br> |






















## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1Heap.md) \* | [**getDisposerHeap\_**](#function-getdisposerheap_) () const<br> |




## Public Types Documentation




### enum HeapNullOption 

```C++
enum sead::IDisposer::HeapNullOption {
    HeapNullOption_AlwaysUseSpecifiedHeap = 0,
    HeapNullOption_UseSpecifiedOrContainHeap = 1,
    HeapNullOption_DoNotAppendDisposerIfNoHeapSpecified = 2,
    HeapNullOption_UseSpecifiedOrCurrentHeap = 3
};
```




<hr>
## Public Functions Documentation




### function IDisposer [1/2]

```C++
sead::IDisposer::IDisposer () 
```




<hr>



### function IDisposer [2/2]

```C++
explicit sead::IDisposer::IDisposer (
    Heap * disposer_heap,
    HeapNullOption option=HeapNullOption_UseSpecifiedOrCurrentHeap
) 
```




<hr>



### function ~IDisposer 

```C++
virtual sead::IDisposer::~IDisposer () 
```




<hr>
## Public Static Functions Documentation




### function getListNodeOffset 

```C++
static inline u32 sead::IDisposer::getListNodeOffset () 
```




<hr>
## Protected Functions Documentation




### function getDisposerHeap\_ 

```C++
inline Heap * sead::IDisposer::getDisposerHeap_ () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadDisposer.h`

