

# Class sead::TaskBase



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskBase**](classsead_1_1_task_base.md)





* `#include <seadTaskBase.h>`



Inherits the following classes: [sead::TTreeNode](classsead_1_1_t_tree_node.md),  [sead::IDisposer](classsead_1_1_i_disposer.md),  [sead::INamable](classsead_1_1_i_namable.md)


Inherited by the following classes: [sead::CalculateTask](classsead_1_1_calculate_task.md)










## Classes

| Type | Name |
| ---: | :--- |
| struct | [**CreateArg**](structsead_1_1_task_base_1_1_create_arg.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**TList**](classsead_1_1_t_list.md)&lt; [**TaskBase**](classsead_1_1_task_base.md) \* &gt; | [**List**](#typedef-list)  <br> |
| typedef [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**TaskBase**](classsead_1_1_task_base.md) \* &gt; | [**ListNode**](#typedef-listnode)  <br> |
| enum  | [**State**](#enum-state)  <br> |
| enum  | [**Tag**](#enum-tag)  <br> |






## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption)  <br> |














## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**TaskClassID**](classsead_1_1_task_class_i_d.md) | [**mClassID**](#variable-mclassid)  <br> |
|  [**HeapArray**](classsead_1_1_heap_array.md) | [**mHeapArray**](#variable-mheaparray)  <br> |
|  [**BitFlag32**](namespacesead.md#typedef-bitflag32) | [**mInternalFlag**](#variable-minternalflag)  <br> |
|  [**TaskParameter**](classsead_1_1_task_parameter.md) \* | [**mParameter**](#variable-mparameter)  <br> |
|  [**State**](classsead_1_1_task_base.md#enum-state) | [**mState**](#variable-mstate)  <br> |
|  [**Tag**](classsead_1_1_task_base.md#enum-tag) | [**mTag**](#variable-mtag)  <br> |
|  [**ListNode**](classsead_1_1_task_base.md#typedef-listnode) | [**mTaskListNode**](#variable-mtasklistnode)  <br> |
|  [**TaskMgr**](classsead_1_1_task_mgr.md) \* | [**mTaskMgr**](#variable-mtaskmgr)  <br> |
















































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TaskBase**](#function-taskbase-12) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg) <br> |
|   | [**TaskBase**](#function-taskbase-22) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg, const char \* name) <br> |
| virtual void | [**attachCalcImpl**](#function-attachcalcimpl) () = 0<br> |
| virtual void | [**attachDrawImpl**](#function-attachdrawimpl) () = 0<br> |
| virtual void | [**detachCalcImpl**](#function-detachcalcimpl) () = 0<br> |
| virtual void | [**detachDrawImpl**](#function-detachdrawimpl) () = 0<br> |
| virtual void | [**enter**](#function-enter) () <br> |
| virtual void | [**enterCommon**](#function-entercommon) () <br> |
| virtual void | [**exit**](#function-exit) () <br> |
| virtual const [**RuntimeTypeInfo::Interface**](classsead_1_1_runtime_type_info_1_1_interface.md) \* | [**getCorrespondingMethodTreeMgrTypeInfo**](#function-getcorrespondingmethodtreemgrtypeinfo) () const = 0<br> |
|  class DelegateThread \* | [**getFramework**](#function-getframework) () const<br> |
| virtual [**MethodTreeNode**](classsead_1_1_method_tree_node.md) \* | [**getMethodTreeNode**](#function-getmethodtreenode) ([**s32**](_l_m_s___types_8h.md#typedef-s32) method\_type) = 0<br> |
| virtual void | [**onDestroy**](#function-ondestroy) () <br> |
| virtual void | [**onEvent**](#function-onevent) (const TaskEvent &) <br> |
| virtual void | [**pauseCalc**](#function-pausecalc) (bool b) = 0<br> |
| virtual void | [**pauseCalcChild**](#function-pausecalcchild) (bool b) <br> |
| virtual void | [**pauseCalcRec**](#function-pausecalcrec) (bool b) = 0<br> |
| virtual void | [**pauseDraw**](#function-pausedraw) (bool b) = 0<br> |
| virtual void | [**pauseDrawChild**](#function-pausedrawchild) (bool b) <br> |
| virtual void | [**pauseDrawRec**](#function-pausedrawrec) (bool b) = 0<br> |
| virtual void | [**prepare**](#function-prepare) () <br> |
| virtual  | [**~TaskBase**](#function-taskbase) () <br> |


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


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-22) ([**Heap**](classsead_1_1_heap.md) \* disposer\_heap, [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption) option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1_i_disposer.md#function-idisposer) () <br> |


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
















































































## Protected Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1_tree_node.md)

| Type | Name |
| ---: | :--- |
|  void | [**clearChildLinksRecursively\_**](classsead_1_1_tree_node.md#function-clearchildlinksrecursively_) () <br> |


## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getDisposerHeap\_**](classsead_1_1_i_disposer.md#function-getdisposerheap_) () const<br> |














## Public Types Documentation




### typedef List 

```C++
typedef TList<TaskBase*> sead::TaskBase::List;
```




<hr>



### typedef ListNode 

```C++
typedef TListNode<TaskBase*> sead::TaskBase::ListNode;
```




<hr>



### enum State 

```C++
enum sead::TaskBase::State {
    cCreated = 0,
    cPrepare = 1,
    cPrepareDone = 2,
    cSleep = 3,
    cRunning = 4,
    cDying = 5,
    cDestroyable = 6,
    cDead = 7
};
```




<hr>



### enum Tag 

```C++
enum sead::TaskBase::Tag {
    cSystem = 0,
    cApp = 1
};
```




<hr>
## Public Attributes Documentation




### variable mClassID 

```C++
TaskClassID sead::TaskBase::mClassID;
```




<hr>



### variable mHeapArray 

```C++
HeapArray sead::TaskBase::mHeapArray;
```




<hr>



### variable mInternalFlag 

```C++
BitFlag32 sead::TaskBase::mInternalFlag;
```




<hr>



### variable mParameter 

```C++
TaskParameter* sead::TaskBase::mParameter;
```




<hr>



### variable mState 

```C++
State sead::TaskBase::mState;
```




<hr>



### variable mTag 

```C++
Tag sead::TaskBase::mTag;
```




<hr>



### variable mTaskListNode 

```C++
ListNode sead::TaskBase::mTaskListNode;
```




<hr>



### variable mTaskMgr 

```C++
TaskMgr* sead::TaskBase::mTaskMgr;
```




<hr>
## Public Functions Documentation




### function TaskBase [1/2]

```C++
explicit sead::TaskBase::TaskBase (
    const TaskConstructArg & arg
) 
```




<hr>



### function TaskBase [2/2]

```C++
sead::TaskBase::TaskBase (
    const TaskConstructArg & arg,
    const char * name
) 
```




<hr>



### function attachCalcImpl 

```C++
virtual void sead::TaskBase::attachCalcImpl () = 0
```




<hr>



### function attachDrawImpl 

```C++
virtual void sead::TaskBase::attachDrawImpl () = 0
```




<hr>



### function detachCalcImpl 

```C++
virtual void sead::TaskBase::detachCalcImpl () = 0
```




<hr>



### function detachDrawImpl 

```C++
virtual void sead::TaskBase::detachDrawImpl () = 0
```




<hr>



### function enter 

```C++
virtual void sead::TaskBase::enter () 
```




<hr>



### function enterCommon 

```C++
virtual void sead::TaskBase::enterCommon () 
```




<hr>



### function exit 

```C++
virtual void sead::TaskBase::exit () 
```




<hr>



### function getCorrespondingMethodTreeMgrTypeInfo 

```C++
virtual const RuntimeTypeInfo::Interface * sead::TaskBase::getCorrespondingMethodTreeMgrTypeInfo () const = 0
```




<hr>



### function getFramework 

```C++
class DelegateThread * sead::TaskBase::getFramework () const
```




<hr>



### function getMethodTreeNode 

```C++
virtual MethodTreeNode * sead::TaskBase::getMethodTreeNode (
    s32 method_type
) = 0
```




<hr>



### function onDestroy 

```C++
virtual void sead::TaskBase::onDestroy () 
```




<hr>



### function onEvent 

```C++
virtual void sead::TaskBase::onEvent (
    const TaskEvent &
) 
```




<hr>



### function pauseCalc 

```C++
virtual void sead::TaskBase::pauseCalc (
    bool b
) = 0
```




<hr>



### function pauseCalcChild 

```C++
virtual void sead::TaskBase::pauseCalcChild (
    bool b
) 
```




<hr>



### function pauseCalcRec 

```C++
virtual void sead::TaskBase::pauseCalcRec (
    bool b
) = 0
```




<hr>



### function pauseDraw 

```C++
virtual void sead::TaskBase::pauseDraw (
    bool b
) = 0
```




<hr>



### function pauseDrawChild 

```C++
virtual void sead::TaskBase::pauseDrawChild (
    bool b
) 
```




<hr>



### function pauseDrawRec 

```C++
virtual void sead::TaskBase::pauseDrawRec (
    bool b
) = 0
```




<hr>



### function prepare 

```C++
virtual void sead::TaskBase::prepare () 
```




<hr>



### function ~TaskBase 

```C++
virtual sead::TaskBase::~TaskBase () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadTaskBase.h`

