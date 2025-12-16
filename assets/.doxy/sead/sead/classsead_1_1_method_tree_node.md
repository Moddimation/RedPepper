

# Class sead::MethodTreeNode



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**MethodTreeNode**](classsead_1_1_method_tree_node.md)





* `#include <seadMethodTree.h>`



Inherits the following classes: [sead::IDisposer](classsead_1_1_i_disposer.md),  [sead::TTreeNode](classsead_1_1_t_tree_node.md),  [sead::INamable](classsead_1_1_i_namable.md)














## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**IDelegate2**](classsead_1_1_i_delegate2.md)&lt; [**MethodTreeNode**](classsead_1_1_method_tree_node.md) \*, [**PauseFlag**](classsead_1_1_method_tree_node.md#enum-pauseflag) &gt; | [**PauseEventDelegate**](#typedef-pauseeventdelegate)  <br> |
| enum  | [**PauseFlag**](#enum-pauseflag)  <br> |


## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption)  <br> |


































































































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**call**](#function-call) () <br> |
|  void | [**detachAll**](#function-detachall) () <br> |
|  void | [**pushBackChild**](#function-pushbackchild) ([**MethodTreeNode**](classsead_1_1_method_tree_node.md) \* node) <br> |
|  void | [**pushFrontChild**](#function-pushfrontchild) ([**MethodTreeNode**](classsead_1_1_method_tree_node.md) \* node) <br> |
|  void | [**setPauseFlag**](#function-setpauseflag) ([**PauseFlag**](classsead_1_1_method_tree_node.md#enum-pauseflag) flag) <br> |
| virtual  | [**~MethodTreeNode**](#function-methodtreenode) () <br> |


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-22) ([**Heap**](classsead_1_1_heap.md) \* disposer\_heap, [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption) option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1_i_disposer.md#function-idisposer) () <br> |


## Public Functions inherited from sead::TTreeNode

See [sead::TTreeNode](classsead_1_1_t_tree_node.md)

| Type | Name |
| ---: | :--- |
|   | [**TTreeNode**](classsead_1_1_t_tree_node.md#function-ttreenode-12) () <br> |
|   | [**TTreeNode**](classsead_1_1_t_tree_node.md#function-ttreenode-22) (T data) <br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**child**](classsead_1_1_t_tree_node.md#function-child) () const<br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**findRoot**](classsead_1_1_t_tree_node.md#function-findroot-12) () <br> |
|  const [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**findRoot**](classsead_1_1_t_tree_node.md#function-findroot-22) () const<br> |
|  void | [**insertAfterSelf**](classsead_1_1_t_tree_node.md#function-insertafterself) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  void | [**insertBeforeSelf**](classsead_1_1_t_tree_node.md#function-insertbeforeself) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**next**](classsead_1_1_t_tree_node.md#function-next) () const<br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**parent**](classsead_1_1_t_tree_node.md#function-parent) () const<br> |
|  [**TTreeNode**](classsead_1_1_t_tree_node.md) \* | [**prev**](classsead_1_1_t_tree_node.md#function-prev) () const<br> |
|  void | [**pushBackChild**](classsead_1_1_t_tree_node.md#function-pushbackchild) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  void | [**pushBackSibling**](classsead_1_1_t_tree_node.md#function-pushbacksibling) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  void | [**pushFrontChild**](classsead_1_1_t_tree_node.md#function-pushfrontchild) ([**TTreeNode**](classsead_1_1_t_tree_node.md) \* node) <br> |
|  T & | [**value**](classsead_1_1_t_tree_node.md#function-value-12) () <br> |
|  const T & | [**value**](classsead_1_1_t_tree_node.md#function-value-22) () const<br> |


## Public Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1_tree_node.md)

| Type | Name |
| ---: | :--- |
|   | [**TreeNode**](classsead_1_1_tree_node.md#function-treenode) () <br> |
|  void | [**clearLinks**](classsead_1_1_tree_node.md#function-clearlinks) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**countChildren**](classsead_1_1_tree_node.md#function-countchildren) () const<br> |
|  void | [**detachAll**](classsead_1_1_tree_node.md#function-detachall) () <br> |
|  void | [**detachSubTree**](classsead_1_1_tree_node.md#function-detachsubtree) () <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**findRoot**](classsead_1_1_tree_node.md#function-findroot-12) () <br> |
|  const [**TreeNode**](classsead_1_1_tree_node.md) \* | [**findRoot**](classsead_1_1_tree_node.md#function-findroot-22) () const<br> |
|  void | [**insertAfterSelf**](classsead_1_1_tree_node.md#function-insertafterself) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**insertBeforeSelf**](classsead_1_1_tree_node.md#function-insertbeforeself) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushBackChild**](classsead_1_1_tree_node.md#function-pushbackchild) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushBackSibling**](classsead_1_1_tree_node.md#function-pushbacksibling) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |
|  void | [**pushFrontChild**](classsead_1_1_tree_node.md#function-pushfrontchild) ([**TreeNode**](classsead_1_1_tree_node.md) \* node) <br> |


## Public Functions inherited from sead::INamable

See [sead::INamable](classsead_1_1_i_namable.md)

| Type | Name |
| ---: | :--- |
|   | [**INamable**](classsead_1_1_i_namable.md#function-inamable-12) () <br> |
|   | [**INamable**](classsead_1_1_i_namable.md#function-inamable-22) (const [**SafeString**](namespacesead.md#typedef-safestring) & name) <br> |
|  const [**SafeString**](namespacesead.md#typedef-safestring) & | [**getName**](classsead_1_1_i_namable.md#function-getname) () const<br> |
|  void | [**setName**](classsead_1_1_i_namable.md#function-setname) (const [**SafeString**](namespacesead.md#typedef-safestring) & name) <br> |




## Public Static Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getListNodeOffset**](classsead_1_1_i_disposer.md#function-getlistnodeoffset) () <br> |
































## Protected Attributes inherited from sead::TTreeNode

See [sead::TTreeNode](classsead_1_1_t_tree_node.md)

| Type | Name |
| ---: | :--- |
|  T | [**mData**](classsead_1_1_t_tree_node.md#variable-mdata)  <br> |


## Protected Attributes inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1_tree_node.md)

| Type | Name |
| ---: | :--- |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mChild**](classsead_1_1_tree_node.md#variable-mchild)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mNext**](classsead_1_1_tree_node.md#variable-mnext)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mParent**](classsead_1_1_tree_node.md#variable-mparent)  <br> |
|  [**TreeNode**](classsead_1_1_tree_node.md) \* | [**mPrev**](classsead_1_1_tree_node.md#variable-mprev)  <br> |












































































## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getDisposerHeap\_**](classsead_1_1_i_disposer.md#function-getdisposerheap_) () const<br> |




## Protected Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1_tree_node.md)

| Type | Name |
| ---: | :--- |
|  void | [**clearChildLinksRecursively\_**](classsead_1_1_tree_node.md#function-clearchildlinksrecursively_) () <br> |














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

