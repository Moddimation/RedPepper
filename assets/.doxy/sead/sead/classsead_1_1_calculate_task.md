

# Class sead::CalculateTask



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**CalculateTask**](classsead_1_1_calculate_task.md)





* `#include <seadCalculateTask.h>`



Inherits the following classes: [sead::TaskBase](classsead_1_1_task_base.md)


Inherited by the following classes: [sead::ControllerMgr](classsead_1_1_controller_mgr.md)














## Public Types inherited from sead::TaskBase

See [sead::TaskBase](classsead_1_1_task_base.md)

| Type | Name |
| ---: | :--- |
| typedef [**TList**](classsead_1_1_t_list.md)&lt; [**TaskBase**](classsead_1_1_task_base.md) \* &gt; | [**List**](classsead_1_1_task_base.md#typedef-list)  <br> |
| typedef [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**TaskBase**](classsead_1_1_task_base.md) \* &gt; | [**ListNode**](classsead_1_1_task_base.md#typedef-listnode)  <br> |
| enum  | [**State**](classsead_1_1_task_base.md#enum-state)  <br> |
| enum  | [**Tag**](classsead_1_1_task_base.md#enum-tag)  <br> |






## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption)  <br> |


















## Public Attributes inherited from sead::TaskBase

See [sead::TaskBase](classsead_1_1_task_base.md)

| Type | Name |
| ---: | :--- |
|  [**TaskClassID**](classsead_1_1_task_class_i_d.md) | [**mClassID**](classsead_1_1_task_base.md#variable-mclassid)  <br> |
|  [**HeapArray**](classsead_1_1_heap_array.md) | [**mHeapArray**](classsead_1_1_task_base.md#variable-mheaparray)  <br> |
|  [**BitFlag32**](namespacesead.md#typedef-bitflag32) | [**mInternalFlag**](classsead_1_1_task_base.md#variable-minternalflag)  <br> |
|  [**TaskParameter**](classsead_1_1_task_parameter.md) \* | [**mParameter**](classsead_1_1_task_base.md#variable-mparameter)  <br> |
|  [**State**](classsead_1_1_task_base.md#enum-state) | [**mState**](classsead_1_1_task_base.md#variable-mstate)  <br> |
|  [**Tag**](classsead_1_1_task_base.md#enum-tag) | [**mTag**](classsead_1_1_task_base.md#variable-mtag)  <br> |
|  [**ListNode**](classsead_1_1_task_base.md#typedef-listnode) | [**mTaskListNode**](classsead_1_1_task_base.md#variable-mtasklistnode)  <br> |
|  [**TaskMgr**](classsead_1_1_task_mgr.md) \* | [**mTaskMgr**](classsead_1_1_task_base.md#variable-mtaskmgr)  <br> |






























































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**CalculateTask**](#function-calculatetask-12) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg) <br> |
|   | [**CalculateTask**](#function-calculatetask-22) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg, const char \* name) <br> |
| virtual void | [**attachCalcImpl**](#function-attachcalcimpl) () <br> |
| virtual void | [**attachDrawImpl**](#function-attachdrawimpl) () <br> |
| virtual void | [**calc**](#function-calc) () <br> |
| virtual void | [**detachCalcImpl**](#function-detachcalcimpl) () <br> |
| virtual void | [**detachDrawImpl**](#function-detachdrawimpl) () <br> |
| virtual const [**RuntimeTypeInfo::Interface**](classsead_1_1_runtime_type_info_1_1_interface.md) \* | [**getCorrespondingMethodTreeMgrTypeInfo**](#function-getcorrespondingmethodtreemgrtypeinfo) () const<br> |
| virtual [**MethodTreeNode**](classsead_1_1_method_tree_node.md) \* | [**getMethodTreeNode**](#function-getmethodtreenode) ([**s32**](_l_m_s___types_8h.md#typedef-s32) method\_type) <br> |
| virtual void | [**pauseCalc**](#function-pausecalc) (bool b) <br> |
| virtual void | [**pauseCalcChild**](#function-pausecalcchild) (bool b) <br> |
| virtual void | [**pauseCalcRec**](#function-pausecalcrec) (bool b) <br> |
| virtual void | [**pauseDraw**](#function-pausedraw) (bool b) <br> |
| virtual void | [**pauseDrawChild**](#function-pausedrawchild) (bool b) <br> |
| virtual void | [**pauseDrawRec**](#function-pausedrawrec) (bool b) <br> |
| virtual  | [**~CalculateTask**](#function-calculatetask) () <br> |


## Public Functions inherited from sead::TaskBase

See [sead::TaskBase](classsead_1_1_task_base.md)

| Type | Name |
| ---: | :--- |
|   | [**TaskBase**](classsead_1_1_task_base.md#function-taskbase-12) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg) <br> |
|   | [**TaskBase**](classsead_1_1_task_base.md#function-taskbase-22) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg, const char \* name) <br> |
| virtual void | [**attachCalcImpl**](classsead_1_1_task_base.md#function-attachcalcimpl) () = 0<br> |
| virtual void | [**attachDrawImpl**](classsead_1_1_task_base.md#function-attachdrawimpl) () = 0<br> |
| virtual void | [**detachCalcImpl**](classsead_1_1_task_base.md#function-detachcalcimpl) () = 0<br> |
| virtual void | [**detachDrawImpl**](classsead_1_1_task_base.md#function-detachdrawimpl) () = 0<br> |
| virtual void | [**enter**](classsead_1_1_task_base.md#function-enter) () <br> |
| virtual void | [**enterCommon**](classsead_1_1_task_base.md#function-entercommon) () <br> |
| virtual void | [**exit**](classsead_1_1_task_base.md#function-exit) () <br> |
| virtual const [**RuntimeTypeInfo::Interface**](classsead_1_1_runtime_type_info_1_1_interface.md) \* | [**getCorrespondingMethodTreeMgrTypeInfo**](classsead_1_1_task_base.md#function-getcorrespondingmethodtreemgrtypeinfo) () const = 0<br> |
|  class DelegateThread \* | [**getFramework**](classsead_1_1_task_base.md#function-getframework) () const<br> |
| virtual [**MethodTreeNode**](classsead_1_1_method_tree_node.md) \* | [**getMethodTreeNode**](classsead_1_1_task_base.md#function-getmethodtreenode) ([**s32**](_l_m_s___types_8h.md#typedef-s32) method\_type) = 0<br> |
| virtual void | [**onDestroy**](classsead_1_1_task_base.md#function-ondestroy) () <br> |
| virtual void | [**onEvent**](classsead_1_1_task_base.md#function-onevent) (const TaskEvent &) <br> |
| virtual void | [**pauseCalc**](classsead_1_1_task_base.md#function-pausecalc) (bool b) = 0<br> |
| virtual void | [**pauseCalcChild**](classsead_1_1_task_base.md#function-pausecalcchild) (bool b) <br> |
| virtual void | [**pauseCalcRec**](classsead_1_1_task_base.md#function-pausecalcrec) (bool b) = 0<br> |
| virtual void | [**pauseDraw**](classsead_1_1_task_base.md#function-pausedraw) (bool b) = 0<br> |
| virtual void | [**pauseDrawChild**](classsead_1_1_task_base.md#function-pausedrawchild) (bool b) <br> |
| virtual void | [**pauseDrawRec**](classsead_1_1_task_base.md#function-pausedrawrec) (bool b) = 0<br> |
| virtual void | [**prepare**](classsead_1_1_task_base.md#function-prepare) () <br> |
| virtual  | [**~TaskBase**](classsead_1_1_task_base.md#function-taskbase) () <br> |


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




























## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**MethodTreeNode**](classsead_1_1_method_tree_node.md) | [**mCalcNode**](#variable-mcalcnode)  <br> |




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
















## Public Functions Documentation




### function CalculateTask [1/2]

```C++
explicit sead::CalculateTask::CalculateTask (
    const TaskConstructArg & arg
) 
```




<hr>



### function CalculateTask [2/2]

```C++
sead::CalculateTask::CalculateTask (
    const TaskConstructArg & arg,
    const char * name
) 
```




<hr>



### function attachCalcImpl 

```C++
virtual void sead::CalculateTask::attachCalcImpl () 
```



Implements [*sead::TaskBase::attachCalcImpl*](classsead_1_1_task_base.md#function-attachcalcimpl)


<hr>



### function attachDrawImpl 

```C++
virtual void sead::CalculateTask::attachDrawImpl () 
```



Implements [*sead::TaskBase::attachDrawImpl*](classsead_1_1_task_base.md#function-attachdrawimpl)


<hr>



### function calc 

```C++
inline virtual void sead::CalculateTask::calc () 
```




<hr>



### function detachCalcImpl 

```C++
virtual void sead::CalculateTask::detachCalcImpl () 
```



Implements [*sead::TaskBase::detachCalcImpl*](classsead_1_1_task_base.md#function-detachcalcimpl)


<hr>



### function detachDrawImpl 

```C++
virtual void sead::CalculateTask::detachDrawImpl () 
```



Implements [*sead::TaskBase::detachDrawImpl*](classsead_1_1_task_base.md#function-detachdrawimpl)


<hr>



### function getCorrespondingMethodTreeMgrTypeInfo 

```C++
virtual const RuntimeTypeInfo::Interface * sead::CalculateTask::getCorrespondingMethodTreeMgrTypeInfo () const
```



Implements [*sead::TaskBase::getCorrespondingMethodTreeMgrTypeInfo*](classsead_1_1_task_base.md#function-getcorrespondingmethodtreemgrtypeinfo)


<hr>



### function getMethodTreeNode 

```C++
virtual MethodTreeNode * sead::CalculateTask::getMethodTreeNode (
    s32 method_type
) 
```



Implements [*sead::TaskBase::getMethodTreeNode*](classsead_1_1_task_base.md#function-getmethodtreenode)


<hr>



### function pauseCalc 

```C++
virtual void sead::CalculateTask::pauseCalc (
    bool b
) 
```



Implements [*sead::TaskBase::pauseCalc*](classsead_1_1_task_base.md#function-pausecalc)


<hr>



### function pauseCalcChild 

```C++
virtual void sead::CalculateTask::pauseCalcChild (
    bool b
) 
```



Implements [*sead::TaskBase::pauseCalcChild*](classsead_1_1_task_base.md#function-pausecalcchild)


<hr>



### function pauseCalcRec 

```C++
virtual void sead::CalculateTask::pauseCalcRec (
    bool b
) 
```



Implements [*sead::TaskBase::pauseCalcRec*](classsead_1_1_task_base.md#function-pausecalcrec)


<hr>



### function pauseDraw 

```C++
virtual void sead::CalculateTask::pauseDraw (
    bool b
) 
```



Implements [*sead::TaskBase::pauseDraw*](classsead_1_1_task_base.md#function-pausedraw)


<hr>



### function pauseDrawChild 

```C++
virtual void sead::CalculateTask::pauseDrawChild (
    bool b
) 
```



Implements [*sead::TaskBase::pauseDrawChild*](classsead_1_1_task_base.md#function-pausedrawchild)


<hr>



### function pauseDrawRec 

```C++
virtual void sead::CalculateTask::pauseDrawRec (
    bool b
) 
```



Implements [*sead::TaskBase::pauseDrawRec*](classsead_1_1_task_base.md#function-pausedrawrec)


<hr>



### function ~CalculateTask 

```C++
virtual sead::CalculateTask::~CalculateTask () 
```




<hr>
## Protected Attributes Documentation




### variable mCalcNode 

```C++
MethodTreeNode sead::CalculateTask::mCalcNode;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadCalculateTask.h`

