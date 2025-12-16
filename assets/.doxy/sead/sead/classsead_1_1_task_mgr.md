

# Class sead::TaskMgr



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskMgr**](classsead_1_1_task_mgr.md)





* `#include <seadTaskMgr.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**InitializeArg**](structsead_1_1_task_mgr_1_1_initialize_arg.md) <br> |






## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**TaskBase::List**](classsead_1_1_task_base.md#typedef-list) | [**mActiveList**](#variable-mactivelist)  <br> |
|  [**MethodTreeNode**](classsead_1_1_method_tree_node.md) | [**mCalcDestructionTreeNode**](#variable-mcalcdestructiontreenode)  <br> |
|  [**CriticalSection**](classsead_1_1_critical_section.md) | [**mCriticalSection**](#variable-mcriticalsection)  <br> |
|  [**TaskBase::List**](classsead_1_1_task_base.md#typedef-list) | [**mDestroyableList**](#variable-mdestroyablelist)  <br> |
|  [**TaskBase::List**](classsead_1_1_task_base.md#typedef-list) | [**mDyingList**](#variable-mdyinglist)  <br> |
|  [**HeapArray**](classsead_1_1_heap_array.md) | [**mHeapArray**](#variable-mheaparray)  <br> |
|  [**TaskMgr::InitializeArg**](structsead_1_1_task_mgr_1_1_initialize_arg.md) | [**mInitializeArg**](#variable-minitializearg)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**mMaxCreateQueueSize**](#variable-mmaxcreatequeuesize)  <br> |
|  NullFaderTask \* | [**mNullFaderTask**](#variable-mnullfadertask)  <br> |
|  Framework \* | [**mParentFramework**](#variable-mparentframework)  <br> |
|  [**TaskBase::List**](classsead_1_1_task_base.md#typedef-list) | [**mPrepareDoneList**](#variable-mpreparedonelist)  <br> |
|  [**TaskBase::List**](classsead_1_1_task_base.md#typedef-list) | [**mPrepareList**](#variable-mpreparelist)  <br> |
|  DelegateThread \* | [**mPrepareThread**](#variable-mpreparethread)  <br> |
|  [**TaskBase**](classsead_1_1_task_base.md) \* | [**mRootTask**](#variable-mroottask)  <br> |
|  [**TaskBase::CreateArg**](structsead_1_1_task_base_1_1_create_arg.md) | [**mRootTaskCreateArg**](#variable-mroottaskcreatearg)  <br> |
|  [**TaskBase::List**](classsead_1_1_task_base.md#typedef-list) | [**mStaticList**](#variable-mstaticlist)  <br> |
|  TaskCreateContextMgr \* | [**mTaskCreateContextMgr**](#variable-mtaskcreatecontextmgr)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**useless1**](#variable-useless1)  <br> |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**useless2**](#variable-useless2)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TaskMgr**](#function-taskmgr) (const [**InitializeArg**](structsead_1_1_task_mgr_1_1_initialize_arg.md) & arg) <br> |
|  void | [**appendToList\_**](#function-appendtolist_) ([**TaskBase::List**](classsead_1_1_task_base.md#typedef-list) & ls, [**TaskBase**](classsead_1_1_task_base.md) \* task) <br> |
|  bool | [**changeTaskState\_**](#function-changetaskstate_) ([**TaskBase**](classsead_1_1_task_base.md) \* task, [**TaskBase::State**](classsead_1_1_task_base.md#enum-state) state) <br> |
|  void | [**destroyTaskSync**](#function-destroytasksync) ([**TaskBase**](classsead_1_1_task_base.md) \* task) <br> |
|  void | [**doDestroyTask\_**](#function-dodestroytask_) ([**TaskBase**](classsead_1_1_task_base.md) \* task) <br> |
|  void | [**finalize**](#function-finalize) () <br> |




























## Public Attributes Documentation




### variable mActiveList 

```C++
TaskBase::List sead::TaskMgr::mActiveList;
```




<hr>



### variable mCalcDestructionTreeNode 

```C++
MethodTreeNode sead::TaskMgr::mCalcDestructionTreeNode;
```




<hr>



### variable mCriticalSection 

```C++
CriticalSection sead::TaskMgr::mCriticalSection;
```




<hr>



### variable mDestroyableList 

```C++
TaskBase::List sead::TaskMgr::mDestroyableList;
```




<hr>



### variable mDyingList 

```C++
TaskBase::List sead::TaskMgr::mDyingList;
```




<hr>



### variable mHeapArray 

```C++
HeapArray sead::TaskMgr::mHeapArray;
```




<hr>



### variable mInitializeArg 

```C++
TaskMgr::InitializeArg sead::TaskMgr::mInitializeArg;
```




<hr>



### variable mMaxCreateQueueSize 

```C++
u32 sead::TaskMgr::mMaxCreateQueueSize;
```




<hr>



### variable mNullFaderTask 

```C++
NullFaderTask* sead::TaskMgr::mNullFaderTask;
```




<hr>



### variable mParentFramework 

```C++
Framework* sead::TaskMgr::mParentFramework;
```




<hr>



### variable mPrepareDoneList 

```C++
TaskBase::List sead::TaskMgr::mPrepareDoneList;
```




<hr>



### variable mPrepareList 

```C++
TaskBase::List sead::TaskMgr::mPrepareList;
```




<hr>



### variable mPrepareThread 

```C++
DelegateThread* sead::TaskMgr::mPrepareThread;
```




<hr>



### variable mRootTask 

```C++
TaskBase* sead::TaskMgr::mRootTask;
```




<hr>



### variable mRootTaskCreateArg 

```C++
TaskBase::CreateArg sead::TaskMgr::mRootTaskCreateArg;
```




<hr>



### variable mStaticList 

```C++
TaskBase::List sead::TaskMgr::mStaticList;
```




<hr>



### variable mTaskCreateContextMgr 

```C++
TaskCreateContextMgr* sead::TaskMgr::mTaskCreateContextMgr;
```




<hr>



### variable useless1 

```C++
u32 sead::TaskMgr::useless1;
```




<hr>



### variable useless2 

```C++
u32 sead::TaskMgr::useless2;
```




<hr>
## Public Functions Documentation




### function TaskMgr 

```C++
sead::TaskMgr::TaskMgr (
    const InitializeArg & arg
) 
```




<hr>



### function appendToList\_ 

```C++
void sead::TaskMgr::appendToList_ (
    TaskBase::List & ls,
    TaskBase * task
) 
```




<hr>



### function changeTaskState\_ 

```C++
bool sead::TaskMgr::changeTaskState_ (
    TaskBase * task,
    TaskBase::State state
) 
```




<hr>



### function destroyTaskSync 

```C++
void sead::TaskMgr::destroyTaskSync (
    TaskBase * task
) 
```




<hr>



### function doDestroyTask\_ 

```C++
void sead::TaskMgr::doDestroyTask_ (
    TaskBase * task
) 
```




<hr>



### function finalize 

```C++
void sead::TaskMgr::finalize () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadTaskMgr.h`

