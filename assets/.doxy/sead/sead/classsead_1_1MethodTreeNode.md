

# Class sead::MethodTreeNode



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**MethodTreeNode**](classsead_1_1MethodTreeNode.md)








Inherits the following classes: [sead::IDisposer](classsead_1_1IDisposer.md),  [sead::TTreeNode](classsead_1_1TTreeNode.md),  [sead::INamable](classsead_1_1INamable.md)














## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**IDelegate2**](classsead_1_1IDelegate2.md)&lt; [**MethodTreeNode**](classsead_1_1MethodTreeNode.md) \*, PauseFlag &gt; | [**PauseEventDelegate**](#typedef-pauseeventdelegate)  <br> |
| enum  | [**PauseFlag**](#enum-pauseflag)  <br> |


## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1IDisposer.md#enum-heapnulloption)  <br> |


































































































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**call**](#function-call) () <br> |
|  void | [**detachAll**](#function-detachall) () <br> |
|  void | [**pushBackChild**](#function-pushbackchild) ([**MethodTreeNode**](classsead_1_1MethodTreeNode.md) \* node) <br> |
|  void | [**pushFrontChild**](#function-pushfrontchild) ([**MethodTreeNode**](classsead_1_1MethodTreeNode.md) \* node) <br> |
|  void | [**setPauseFlag**](#function-setpauseflag) (PauseFlag flag) <br> |
| virtual  | [**~MethodTreeNode**](#function-methodtreenode) () <br> |


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-22) ([**Heap**](classsead_1_1Heap.md) \* disposer\_heap, HeapNullOption option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1IDisposer.md#function-idisposer) () <br> |


## Public Functions inherited from sead::TTreeNode

See [sead::TTreeNode](classsead_1_1TTreeNode.md)

| Type | Name |
| ---: | :--- |
|   | [**TTreeNode**](classsead_1_1TTreeNode.md#function-ttreenode-12) () <br> |
|   | [**TTreeNode**](classsead_1_1TTreeNode.md#function-ttreenode-22) (T data) <br> |
|  [**TTreeNode**](classsead_1_1TTreeNode.md) \* | [**child**](classsead_1_1TTreeNode.md#function-child) () const<br> |
|  [**TTreeNode**](classsead_1_1TTreeNode.md) \* | [**findRoot**](classsead_1_1TTreeNode.md#function-findroot-12) () <br> |
|  const [**TTreeNode**](classsead_1_1TTreeNode.md) \* | [**findRoot**](classsead_1_1TTreeNode.md#function-findroot-22) () const<br> |
|  void | [**insertAfterSelf**](classsead_1_1TTreeNode.md#function-insertafterself) ([**TTreeNode**](classsead_1_1TTreeNode.md) \* node) <br> |
|  void | [**insertBeforeSelf**](classsead_1_1TTreeNode.md#function-insertbeforeself) ([**TTreeNode**](classsead_1_1TTreeNode.md) \* node) <br> |
|  [**TTreeNode**](classsead_1_1TTreeNode.md) \* | [**next**](classsead_1_1TTreeNode.md#function-next) () const<br> |
|  [**TTreeNode**](classsead_1_1TTreeNode.md) \* | [**parent**](classsead_1_1TTreeNode.md#function-parent) () const<br> |
|  [**TTreeNode**](classsead_1_1TTreeNode.md) \* | [**prev**](classsead_1_1TTreeNode.md#function-prev) () const<br> |
|  void | [**pushBackChild**](classsead_1_1TTreeNode.md#function-pushbackchild) ([**TTreeNode**](classsead_1_1TTreeNode.md) \* node) <br> |
|  void | [**pushBackSibling**](classsead_1_1TTreeNode.md#function-pushbacksibling) ([**TTreeNode**](classsead_1_1TTreeNode.md) \* node) <br> |
|  void | [**pushFrontChild**](classsead_1_1TTreeNode.md#function-pushfrontchild) ([**TTreeNode**](classsead_1_1TTreeNode.md) \* node) <br> |
|  T & | [**value**](classsead_1_1TTreeNode.md#function-value-12) () <br> |
|  const T & | [**value**](classsead_1_1TTreeNode.md#function-value-22) () const<br> |


## Public Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1TreeNode.md)

| Type | Name |
| ---: | :--- |
|   | [**TreeNode**](classsead_1_1TreeNode.md#function-treenode) () <br> |
|  void | [**clearLinks**](classsead_1_1TreeNode.md#function-clearlinks) () <br> |
|  s32 | [**countChildren**](classsead_1_1TreeNode.md#function-countchildren) () const<br> |
|  void | [**detachAll**](classsead_1_1TreeNode.md#function-detachall) () <br> |
|  void | [**detachSubTree**](classsead_1_1TreeNode.md#function-detachsubtree) () <br> |
|  [**TreeNode**](classsead_1_1TreeNode.md) \* | [**findRoot**](classsead_1_1TreeNode.md#function-findroot-12) () <br> |
|  const [**TreeNode**](classsead_1_1TreeNode.md) \* | [**findRoot**](classsead_1_1TreeNode.md#function-findroot-22) () const<br> |
|  void | [**insertAfterSelf**](classsead_1_1TreeNode.md#function-insertafterself) ([**TreeNode**](classsead_1_1TreeNode.md) \* node) <br> |
|  void | [**insertBeforeSelf**](classsead_1_1TreeNode.md#function-insertbeforeself) ([**TreeNode**](classsead_1_1TreeNode.md) \* node) <br> |
|  void | [**pushBackChild**](classsead_1_1TreeNode.md#function-pushbackchild) ([**TreeNode**](classsead_1_1TreeNode.md) \* node) <br> |
|  void | [**pushBackSibling**](classsead_1_1TreeNode.md#function-pushbacksibling) ([**TreeNode**](classsead_1_1TreeNode.md) \* node) <br> |
|  void | [**pushFrontChild**](classsead_1_1TreeNode.md#function-pushfrontchild) ([**TreeNode**](classsead_1_1TreeNode.md) \* node) <br> |


## Public Functions inherited from sead::INamable

See [sead::INamable](classsead_1_1INamable.md)

| Type | Name |
| ---: | :--- |
|   | [**INamable**](classsead_1_1INamable.md#function-inamable-12) () <br> |
|   | [**INamable**](classsead_1_1INamable.md#function-inamable-22) (const [**SafeString**](classsead_1_1SafeStringBase.md) & name) <br> |
|  const [**SafeString**](classsead_1_1SafeStringBase.md) & | [**getName**](classsead_1_1INamable.md#function-getname) () const<br> |
|  void | [**setName**](classsead_1_1INamable.md#function-setname) (const [**SafeString**](classsead_1_1SafeStringBase.md) & name) <br> |




## Public Static Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|  u32 | [**getListNodeOffset**](classsead_1_1IDisposer.md#function-getlistnodeoffset) () <br> |
































## Protected Attributes inherited from sead::TTreeNode

See [sead::TTreeNode](classsead_1_1TTreeNode.md)

| Type | Name |
| ---: | :--- |
|  T | [**mData**](classsead_1_1TTreeNode.md#variable-mdata)  <br> |


## Protected Attributes inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1TreeNode.md)

| Type | Name |
| ---: | :--- |
|  [**TreeNode**](classsead_1_1TreeNode.md) \* | [**mChild**](classsead_1_1TreeNode.md#variable-mchild)  <br> |
|  [**TreeNode**](classsead_1_1TreeNode.md) \* | [**mNext**](classsead_1_1TreeNode.md#variable-mnext)  <br> |
|  [**TreeNode**](classsead_1_1TreeNode.md) \* | [**mParent**](classsead_1_1TreeNode.md#variable-mparent)  <br> |
|  [**TreeNode**](classsead_1_1TreeNode.md) \* | [**mPrev**](classsead_1_1TreeNode.md#variable-mprev)  <br> |












































































## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1Heap.md) \* | [**getDisposerHeap\_**](classsead_1_1IDisposer.md#function-getdisposerheap_) () const<br> |




## Protected Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1TreeNode.md)

| Type | Name |
| ---: | :--- |
|  void | [**clearChildLinksRecursively\_**](classsead_1_1TreeNode.md#function-clearchildlinksrecursively_) () <br> |














## Public Types Documentation




### typedef PauseEventDelegate 

```C++
typedef IDelegate2<MethodTreeNode*, PauseFlag> sead::MethodTreeNode::PauseEventDelegate;
```




<hr>



### enum PauseFlag 

```C++
enum sead::MethodTreeNode::PauseFlag {
    cPause_None = 0,
    cPause_Self = 1,
    cPause_Child = 2,
    cPause_Both = 3
};
```




<hr>
## Public Functions Documentation




### function call 

```C++
void sead::MethodTreeNode::call () 
```




<hr>



### function detachAll 

```C++
void sead::MethodTreeNode::detachAll () 
```




<hr>



### function pushBackChild 

```C++
void sead::MethodTreeNode::pushBackChild (
    MethodTreeNode * node
) 
```




<hr>



### function pushFrontChild 

```C++
void sead::MethodTreeNode::pushFrontChild (
    MethodTreeNode * node
) 
```




<hr>



### function setPauseFlag 

```C++
void sead::MethodTreeNode::setPauseFlag (
    PauseFlag flag
) 
```




<hr>



### function ~MethodTreeNode 

```C++
inline virtual sead::MethodTreeNode::~MethodTreeNode () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadMethodTree.h`

