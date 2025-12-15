

# Class sead::TaskBase



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskBase**](classsead_1_1TaskBase.md)








Inherits the following classes: [sead::TTreeNode](classsead_1_1TTreeNode.md),  [sead::IDisposer](classsead_1_1IDisposer.md),  [sead::INamable](classsead_1_1INamable.md)


Inherited by the following classes: [sead::CalculateTask](classsead_1_1CalculateTask.md)










## Classes

| Type | Name |
| ---: | :--- |
| struct | [**CreateArg**](structsead_1_1TaskBase_1_1CreateArg.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**TList**](classsead_1_1TList.md)&lt; [**TaskBase**](classsead_1_1TaskBase.md) \* &gt; | [**List**](#typedef-list)  <br> |
| typedef [**TListNode**](classsead_1_1TListNode.md)&lt; [**TaskBase**](classsead_1_1TaskBase.md) \* &gt; | [**ListNode**](#typedef-listnode)  <br> |
| enum  | [**State**](#enum-state)  <br> |
| enum  | [**Tag**](#enum-tag)  <br> |






## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1IDisposer.md#enum-heapnulloption)  <br> |














## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**TaskClassID**](classsead_1_1TaskClassID.md) | [**mClassID**](#variable-mclassid)  <br> |
|  [**HeapArray**](classsead_1_1HeapArray.md) | [**mHeapArray**](#variable-mheaparray)  <br> |
|  [**BitFlag32**](classsead_1_1BitFlag.md) | [**mInternalFlag**](#variable-minternalflag)  <br> |
|  [**TaskParameter**](classsead_1_1TaskParameter.md) \* | [**mParameter**](#variable-mparameter)  <br> |
|  State | [**mState**](#variable-mstate)  <br> |
|  Tag | [**mTag**](#variable-mtag)  <br> |
|  [**ListNode**](classsead_1_1TListNode.md) | [**mTaskListNode**](#variable-mtasklistnode)  <br> |
|  [**TaskMgr**](classsead_1_1TaskMgr.md) \* | [**mTaskMgr**](#variable-mtaskmgr)  <br> |
















































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TaskBase**](#function-taskbase-12) (const [**TaskConstructArg**](structsead_1_1TaskConstructArg.md) & arg) <br> |
|   | [**TaskBase**](#function-taskbase-22) (const [**TaskConstructArg**](structsead_1_1TaskConstructArg.md) & arg, const char \* name) <br> |
| virtual void | [**attachCalcImpl**](#function-attachcalcimpl) () = 0<br> |
| virtual void | [**attachDrawImpl**](#function-attachdrawimpl) () = 0<br> |
| virtual void | [**detachCalcImpl**](#function-detachcalcimpl) () = 0<br> |
| virtual void | [**detachDrawImpl**](#function-detachdrawimpl) () = 0<br> |
| virtual void | [**enter**](#function-enter) () <br> |
| virtual void | [**enterCommon**](#function-entercommon) () <br> |
| virtual void | [**exit**](#function-exit) () <br> |
| virtual const [**RuntimeTypeInfo::Interface**](classsead_1_1RuntimeTypeInfo_1_1Interface.md) \* | [**getCorrespondingMethodTreeMgrTypeInfo**](#function-getcorrespondingmethodtreemgrtypeinfo) () const = 0<br> |
|  class DelegateThread \* | [**getFramework**](#function-getframework) () const<br> |
| virtual [**MethodTreeNode**](classsead_1_1MethodTreeNode.md) \* | [**getMethodTreeNode**](#function-getmethodtreenode) (s32 method\_type) = 0<br> |
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

