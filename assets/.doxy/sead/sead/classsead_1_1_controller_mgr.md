

# Class sead::ControllerMgr



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ControllerMgr**](classsead_1_1_controller_mgr.md)





* `#include <seadControllerMgr.h>`



Inherits the following classes: [sead::CalculateTask](classsead_1_1_calculate_task.md)


















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


















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**PtrArray**](classsead_1_1_ptr_array.md)&lt; [**Controller**](classsead_1_1_controller.md) &gt; | [**mControllers**](#variable-mcontrollers)  <br> |
|  [**OffsetList**](classsead_1_1_offset_list.md)&lt; ControlDevice &gt; | [**mDevices**](#variable-mdevices)  <br> |




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
|   | [**ControllerMgr**](#function-controllermgr-12) () <br> |
|   | [**ControllerMgr**](#function-controllermgr-22) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg) <br> |
| virtual void | [**calc**](#function-calc) () <br> |
|  void | [**finalize**](#function-finalize) () <br> |
|  void | [**finalizeDefault**](#function-finalizedefault) () <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**findControllerPort**](#function-findcontrollerport) (const [**Controller**](classsead_1_1_controller.md) \* controller) const<br> |
|  ControlDevice \* | [**getControlDevice**](#function-getcontroldevice) ([**ControllerDefine::DeviceId**](classsead_1_1_controller_define.md#enum-deviceid) id) const<br> |
|  T | [**getControlDeviceAs**](#function-getcontroldeviceas) () const<br> |
|  [**Controller**](classsead_1_1_controller.md) \* | [**getController**](#function-getcontroller) (int port) <br> |
|  ControllerAddon \* | [**getControllerAddon**](#function-getcontrolleraddon) ([**s32**](_l_m_s___types_8h.md#typedef-s32) index, [**ControllerDefine::AddonId**](classsead_1_1_controller_define.md#enum-addonid) id) const<br> |
|  T | [**getControllerAddonAs**](#function-getcontrolleraddonas) ([**s32**](_l_m_s___types_8h.md#typedef-s32) index) const<br> |
|  ControllerAddon \* | [**getControllerAddonByOrder**](#function-getcontrolleraddonbyorder) ([**s32**](_l_m_s___types_8h.md#typedef-s32) controller\_index, [**ControllerDefine::AddonId**](classsead_1_1_controller_define.md#enum-addonid) addon\_id, int addon\_index) const<br> |
|  [**Controller**](classsead_1_1_controller.md) \* | [**getControllerByOrder**](#function-getcontrollerbyorder) ([**ControllerDefine::ControllerId**](classsead_1_1_controller_define.md#enum-controllerid) id, [**s32**](_l_m_s___types_8h.md#typedef-s32) index) const<br> |
|  T | [**getControllerByOrderAs**](#function-getcontrollerbyorderas) ([**s32**](_l_m_s___types_8h.md#typedef-s32) index) const<br> |
|  DelegateThread \* | [**getFramework**](#function-getframework) () const<br> |
|  void | [**initialize**](#function-initialize) ([**s32**](_l_m_s___types_8h.md#typedef-s32) controller\_max, [**Heap**](classsead_1_1_heap.md) \* heap) <br> |
|  void | [**initializeDefault**](#function-initializedefault) ([**Heap**](classsead_1_1_heap.md) \* heap) <br> |
| virtual void | [**prepare**](#function-prepare) () <br> |
| virtual  | [**~ControllerMgr**](#function-controllermgr) () <br> |


## Public Functions inherited from sead::CalculateTask

See [sead::CalculateTask](classsead_1_1_calculate_task.md)

| Type | Name |
| ---: | :--- |
|   | [**CalculateTask**](classsead_1_1_calculate_task.md#function-calculatetask-12) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg) <br> |
|   | [**CalculateTask**](classsead_1_1_calculate_task.md#function-calculatetask-22) (const [**TaskConstructArg**](structsead_1_1_task_construct_arg.md) & arg, const char \* name) <br> |
| virtual void | [**attachCalcImpl**](classsead_1_1_calculate_task.md#function-attachcalcimpl) () <br> |
| virtual void | [**attachDrawImpl**](classsead_1_1_calculate_task.md#function-attachdrawimpl) () <br> |
| virtual void | [**calc**](classsead_1_1_calculate_task.md#function-calc) () <br> |
| virtual void | [**detachCalcImpl**](classsead_1_1_calculate_task.md#function-detachcalcimpl) () <br> |
| virtual void | [**detachDrawImpl**](classsead_1_1_calculate_task.md#function-detachdrawimpl) () <br> |
| virtual const [**RuntimeTypeInfo::Interface**](classsead_1_1_runtime_type_info_1_1_interface.md) \* | [**getCorrespondingMethodTreeMgrTypeInfo**](classsead_1_1_calculate_task.md#function-getcorrespondingmethodtreemgrtypeinfo) () const<br> |
| virtual [**MethodTreeNode**](classsead_1_1_method_tree_node.md) \* | [**getMethodTreeNode**](classsead_1_1_calculate_task.md#function-getmethodtreenode) ([**s32**](_l_m_s___types_8h.md#typedef-s32) method\_type) <br> |
| virtual void | [**pauseCalc**](classsead_1_1_calculate_task.md#function-pausecalc) (bool b) <br> |
| virtual void | [**pauseCalcChild**](classsead_1_1_calculate_task.md#function-pausecalcchild) (bool b) <br> |
| virtual void | [**pauseCalcRec**](classsead_1_1_calculate_task.md#function-pausecalcrec) (bool b) <br> |
| virtual void | [**pauseDraw**](classsead_1_1_calculate_task.md#function-pausedraw) (bool b) <br> |
| virtual void | [**pauseDrawChild**](classsead_1_1_calculate_task.md#function-pausedrawchild) (bool b) <br> |
| virtual void | [**pauseDrawRec**](classsead_1_1_calculate_task.md#function-pausedrawrec) (bool b) <br> |
| virtual  | [**~CalculateTask**](classsead_1_1_calculate_task.md#function-calculatetask) () <br> |


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


































## Protected Attributes inherited from sead::CalculateTask

See [sead::CalculateTask](classsead_1_1_calculate_task.md)

| Type | Name |
| ---: | :--- |
|  [**MethodTreeNode**](classsead_1_1_method_tree_node.md) | [**mCalcNode**](classsead_1_1_calculate_task.md#variable-mcalcnode)  <br> |




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


















## Public Attributes Documentation




### variable mControllers 

```C++
PtrArray<Controller> sead::ControllerMgr::mControllers;
```




<hr>



### variable mDevices 

```C++
OffsetList<ControlDevice> sead::ControllerMgr::mDevices;
```




<hr>
## Public Functions Documentation




### function ControllerMgr [1/2]

```C++
sead::ControllerMgr::ControllerMgr () 
```




<hr>



### function ControllerMgr [2/2]

```C++
explicit sead::ControllerMgr::ControllerMgr (
    const TaskConstructArg & arg
) 
```




<hr>



### function calc 

```C++
virtual void sead::ControllerMgr::calc () 
```



Implements [*sead::CalculateTask::calc*](classsead_1_1_calculate_task.md#function-calc)


<hr>



### function finalize 

```C++
void sead::ControllerMgr::finalize () 
```




<hr>



### function finalizeDefault 

```C++
void sead::ControllerMgr::finalizeDefault () 
```




<hr>



### function findControllerPort 

```C++
s32 sead::ControllerMgr::findControllerPort (
    const Controller * controller
) const
```




<hr>



### function getControlDevice 

```C++
ControlDevice * sead::ControllerMgr::getControlDevice (
    ControllerDefine::DeviceId id
) const
```




<hr>



### function getControlDeviceAs 

```C++
template<typename T>
T sead::ControllerMgr::getControlDeviceAs () const
```




<hr>



### function getController 

```C++
inline Controller * sead::ControllerMgr::getController (
    int port
) 
```




<hr>



### function getControllerAddon 

```C++
ControllerAddon * sead::ControllerMgr::getControllerAddon (
    s32 index,
    ControllerDefine::AddonId id
) const
```




<hr>



### function getControllerAddonAs 

```C++
template<typename T>
T sead::ControllerMgr::getControllerAddonAs (
    s32 index
) const
```




<hr>



### function getControllerAddonByOrder 

```C++
ControllerAddon * sead::ControllerMgr::getControllerAddonByOrder (
    s32 controller_index,
    ControllerDefine::AddonId addon_id,
    int addon_index
) const
```




<hr>



### function getControllerByOrder 

```C++
Controller * sead::ControllerMgr::getControllerByOrder (
    ControllerDefine::ControllerId id,
    s32 index
) const
```




<hr>



### function getControllerByOrderAs 

```C++
template<typename T>
T sead::ControllerMgr::getControllerByOrderAs (
    s32 index
) const
```




<hr>



### function getFramework 

```C++
DelegateThread * sead::ControllerMgr::getFramework () const
```




<hr>



### function initialize 

```C++
void sead::ControllerMgr::initialize (
    s32 controller_max,
    Heap * heap
) 
```




<hr>



### function initializeDefault 

```C++
void sead::ControllerMgr::initializeDefault (
    Heap * heap
) 
```




<hr>



### function prepare 

```C++
virtual void sead::ControllerMgr::prepare () 
```



Implements [*sead::TaskBase::prepare*](classsead_1_1_task_base.md#function-prepare)


<hr>



### function ~ControllerMgr 

```C++
virtual sead::ControllerMgr::~ControllerMgr () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/controller/seadControllerMgr.h`

