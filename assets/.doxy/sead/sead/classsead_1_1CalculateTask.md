

# Class sead::CalculateTask



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**CalculateTask**](classsead_1_1CalculateTask.md)








Inherits the following classes: [sead::TaskBase](classsead_1_1TaskBase.md)


Inherited by the following classes: [sead::ControllerMgr](classsead_1_1ControllerMgr.md)














## Public Types inherited from sead::TaskBase

See [sead::TaskBase](classsead_1_1TaskBase.md)

| Type | Name |
| ---: | :--- |
| typedef [**TList**](classsead_1_1TList.md)&lt; [**TaskBase**](classsead_1_1TaskBase.md) \* &gt; | [**List**](classsead_1_1TaskBase.md#typedef-list)  <br> |
| typedef [**TListNode**](classsead_1_1TListNode.md)&lt; [**TaskBase**](classsead_1_1TaskBase.md) \* &gt; | [**ListNode**](classsead_1_1TaskBase.md#typedef-listnode)  <br> |
| enum  | [**State**](classsead_1_1TaskBase.md#enum-state)  <br> |
| enum  | [**Tag**](classsead_1_1TaskBase.md#enum-tag)  <br> |






## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1IDisposer.md#enum-heapnulloption)  <br> |


















## Public Attributes inherited from sead::TaskBase

See [sead::TaskBase](classsead_1_1TaskBase.md)

| Type | Name |
| ---: | :--- |
|  [**TaskClassID**](classsead_1_1TaskClassID.md) | [**mClassID**](classsead_1_1TaskBase.md#variable-mclassid)  <br> |
|  [**HeapArray**](classsead_1_1HeapArray.md) | [**mHeapArray**](classsead_1_1TaskBase.md#variable-mheaparray)  <br> |
|  [**BitFlag32**](classsead_1_1BitFlag.md) | [**mInternalFlag**](classsead_1_1TaskBase.md#variable-minternalflag)  <br> |
|  [**TaskParameter**](classsead_1_1TaskParameter.md) \* | [**mParameter**](classsead_1_1TaskBase.md#variable-mparameter)  <br> |
|  State | [**mState**](classsead_1_1TaskBase.md#variable-mstate)  <br> |
|  Tag | [**mTag**](classsead_1_1TaskBase.md#variable-mtag)  <br> |
|  [**ListNode**](classsead_1_1TListNode.md) | [**mTaskListNode**](classsead_1_1TaskBase.md#variable-mtasklistnode)  <br> |
|  [**TaskMgr**](classsead_1_1TaskMgr.md) \* | [**mTaskMgr**](classsead_1_1TaskBase.md#variable-mtaskmgr)  <br> |






























































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**CalculateTask**](#function-calculatetask-12) (const [**TaskConstructArg**](structsead_1_1TaskConstructArg.md) & arg) <br> |
|   | [**CalculateTask**](#function-calculatetask-22) (const [**TaskConstructArg**](structsead_1_1TaskConstructArg.md) & arg, const char \* name) <br> |
| virtual void | [**attachCalcImpl**](#function-attachcalcimpl) () <br> |
| virtual void | [**attachDrawImpl**](#function-attachdrawimpl) () <br> |
| virtual void | [**calc**](#function-calc) () <br> |
| virtual void | [**detachCalcImpl**](#function-detachcalcimpl) () <br> |
| virtual void | [**detachDrawImpl**](#function-detachdrawimpl) () <br> |
| virtual const [**RuntimeTypeInfo::Interface**](classsead_1_1RuntimeTypeInfo_1_1Interface.md) \* | [**getCorrespondingMethodTreeMgrTypeInfo**](#function-getcorrespondingmethodtreemgrtypeinfo) () const<br> |
| virtual [**MethodTreeNode**](classsead_1_1MethodTreeNode.md) \* | [**getMethodTreeNode**](#function-getmethodtreenode) (s32 method\_type) <br> |
| virtual void | [**pauseCalc**](#function-pausecalc) (bool b) <br> |
| virtual void | [**pauseCalcChild**](#function-pausecalcchild) (bool b) <br> |
| virtual void | [**pauseCalcRec**](#function-pausecalcrec) (bool b) <br> |
| virtual void | [**pauseDraw**](#function-pausedraw) (bool b) <br> |
| virtual void | [**pauseDrawChild**](#function-pausedrawchild) (bool b) <br> |
| virtual void | [**pauseDrawRec**](#function-pausedrawrec) (bool b) <br> |
| virtual  | [**~CalculateTask**](#function-calculatetask) () <br> |


## Public Functions inherited from sead::TaskBase

See [sead::TaskBase](classsead_1_1TaskBase.md)

| Type | Name |
| ---: | :--- |
|   | [**TaskBase**](classsead_1_1TaskBase.md#function-taskbase-12) (const [**TaskConstructArg**](structsead_1_1TaskConstructArg.md) & arg) <br> |
|   | [**TaskBase**](classsead_1_1TaskBase.md#function-taskbase-22) (const [**TaskConstructArg**](structsead_1_1TaskConstructArg.md) & arg, const char \* name) <br> |
| virtual void | [**attachCalcImpl**](classsead_1_1TaskBase.md#function-attachcalcimpl) () = 0<br> |
| virtual void | [**attachDrawImpl**](classsead_1_1TaskBase.md#function-attachdrawimpl) () = 0<br> |
| virtual void | [**detachCalcImpl**](classsead_1_1TaskBase.md#function-detachcalcimpl) () = 0<br> |
| virtual void | [**detachDrawImpl**](classsead_1_1TaskBase.md#function-detachdrawimpl) () = 0<br> |
| virtual void | [**enter**](classsead_1_1TaskBase.md#function-enter) () <br> |
| virtual void | [**enterCommon**](classsead_1_1TaskBase.md#function-entercommon) () <br> |
| virtual void | [**exit**](classsead_1_1TaskBase.md#function-exit) () <br> |
| virtual const [**RuntimeTypeInfo::Interface**](classsead_1_1RuntimeTypeInfo_1_1Interface.md) \* | [**getCorrespondingMethodTreeMgrTypeInfo**](classsead_1_1TaskBase.md#function-getcorrespondingmethodtreemgrtypeinfo) () const = 0<br> |
|  class DelegateThread \* | [**getFramework**](classsead_1_1TaskBase.md#function-getframework) () const<br> |
| virtual [**MethodTreeNode**](classsead_1_1MethodTreeNode.md) \* | [**getMethodTreeNode**](classsead_1_1TaskBase.md#function-getmethodtreenode) (s32 method\_type) = 0<br> |
| virtual void | [**onDestroy**](classsead_1_1TaskBase.md#function-ondestroy) () <br> |
| virtual void | [**onEvent**](classsead_1_1TaskBase.md#function-onevent) (const TaskEvent &) <br> |
| virtual void | [**pauseCalc**](classsead_1_1TaskBase.md#function-pausecalc) (bool b) = 0<br> |
| virtual void | [**pauseCalcChild**](classsead_1_1TaskBase.md#function-pausecalcchild) (bool b) <br> |
| virtual void | [**pauseCalcRec**](classsead_1_1TaskBase.md#function-pausecalcrec) (bool b) = 0<br> |
| virtual void | [**pauseDraw**](classsead_1_1TaskBase.md#function-pausedraw) (bool b) = 0<br> |
| virtual void | [**pauseDrawChild**](classsead_1_1TaskBase.md#function-pausedrawchild) (bool b) <br> |
| virtual void | [**pauseDrawRec**](classsead_1_1TaskBase.md#function-pausedrawrec) (bool b) = 0<br> |
| virtual void | [**prepare**](classsead_1_1TaskBase.md#function-prepare) () <br> |
| virtual  | [**~TaskBase**](classsead_1_1TaskBase.md#function-taskbase) () <br> |


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


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-22) ([**Heap**](classsead_1_1Heap.md) \* disposer\_heap, HeapNullOption option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1IDisposer.md#function-idisposer) () <br> |


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




























## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**MethodTreeNode**](classsead_1_1MethodTreeNode.md) | [**mCalcNode**](#variable-mcalcnode)  <br> |




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
































































































## Protected Functions inherited from sead::TreeNode

See [sead::TreeNode](classsead_1_1TreeNode.md)

| Type | Name |
| ---: | :--- |
|  void | [**clearChildLinksRecursively\_**](classsead_1_1TreeNode.md#function-clearchildlinksrecursively_) () <br> |


## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1Heap.md) \* | [**getDisposerHeap\_**](classsead_1_1IDisposer.md#function-getdisposerheap_) () const<br> |
















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



Implements [*sead::TaskBase::attachCalcImpl*](classsead_1_1TaskBase.md#function-attachcalcimpl)


<hr>



### function attachDrawImpl 

```C++
virtual void sead::CalculateTask::attachDrawImpl () 
```



Implements [*sead::TaskBase::attachDrawImpl*](classsead_1_1TaskBase.md#function-attachdrawimpl)


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



Implements [*sead::TaskBase::detachCalcImpl*](classsead_1_1TaskBase.md#function-detachcalcimpl)


<hr>



### function detachDrawImpl 

```C++
virtual void sead::CalculateTask::detachDrawImpl () 
```



Implements [*sead::TaskBase::detachDrawImpl*](classsead_1_1TaskBase.md#function-detachdrawimpl)


<hr>



### function getCorrespondingMethodTreeMgrTypeInfo 

```C++
virtual const RuntimeTypeInfo::Interface * sead::CalculateTask::getCorrespondingMethodTreeMgrTypeInfo () const
```



Implements [*sead::TaskBase::getCorrespondingMethodTreeMgrTypeInfo*](classsead_1_1TaskBase.md#function-getcorrespondingmethodtreemgrtypeinfo)


<hr>



### function getMethodTreeNode 

```C++
virtual MethodTreeNode * sead::CalculateTask::getMethodTreeNode (
    s32 method_type
) 
```



Implements [*sead::TaskBase::getMethodTreeNode*](classsead_1_1TaskBase.md#function-getmethodtreenode)


<hr>



### function pauseCalc 

```C++
virtual void sead::CalculateTask::pauseCalc (
    bool b
) 
```



Implements [*sead::TaskBase::pauseCalc*](classsead_1_1TaskBase.md#function-pausecalc)


<hr>



### function pauseCalcChild 

```C++
virtual void sead::CalculateTask::pauseCalcChild (
    bool b
) 
```



Implements [*sead::TaskBase::pauseCalcChild*](classsead_1_1TaskBase.md#function-pausecalcchild)


<hr>



### function pauseCalcRec 

```C++
virtual void sead::CalculateTask::pauseCalcRec (
    bool b
) 
```



Implements [*sead::TaskBase::pauseCalcRec*](classsead_1_1TaskBase.md#function-pausecalcrec)


<hr>



### function pauseDraw 

```C++
virtual void sead::CalculateTask::pauseDraw (
    bool b
) 
```



Implements [*sead::TaskBase::pauseDraw*](classsead_1_1TaskBase.md#function-pausedraw)


<hr>



### function pauseDrawChild 

```C++
virtual void sead::CalculateTask::pauseDrawChild (
    bool b
) 
```



Implements [*sead::TaskBase::pauseDrawChild*](classsead_1_1TaskBase.md#function-pausedrawchild)


<hr>



### function pauseDrawRec 

```C++
virtual void sead::CalculateTask::pauseDrawRec (
    bool b
) 
```



Implements [*sead::TaskBase::pauseDrawRec*](classsead_1_1TaskBase.md#function-pausedrawrec)


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

