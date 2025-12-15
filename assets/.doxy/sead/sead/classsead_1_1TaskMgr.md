

# Class sead::TaskMgr



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TaskMgr**](classsead_1_1TaskMgr.md)




















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**InitializeArg**](structsead_1_1TaskMgr_1_1InitializeArg.md) <br> |






## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**TaskBase::List**](classsead_1_1TList.md) | [**mActiveList**](#variable-mactivelist)  <br> |
|  [**MethodTreeNode**](classsead_1_1MethodTreeNode.md) | [**mCalcDestructionTreeNode**](#variable-mcalcdestructiontreenode)  <br> |
|  [**CriticalSection**](classsead_1_1CriticalSection.md) | [**mCriticalSection**](#variable-mcriticalsection)  <br> |
|  [**TaskBase::List**](classsead_1_1TList.md) | [**mDestroyableList**](#variable-mdestroyablelist)  <br> |
|  [**TaskBase::List**](classsead_1_1TList.md) | [**mDyingList**](#variable-mdyinglist)  <br> |
|  [**HeapArray**](classsead_1_1HeapArray.md) | [**mHeapArray**](#variable-mheaparray)  <br> |
|  [**TaskMgr::InitializeArg**](structsead_1_1TaskMgr_1_1InitializeArg.md) | [**mInitializeArg**](#variable-minitializearg)  <br> |
|  u32 | [**mMaxCreateQueueSize**](#variable-mmaxcreatequeuesize)  <br> |
|  NullFaderTask \* | [**mNullFaderTask**](#variable-mnullfadertask)  <br> |
|  Framework \* | [**mParentFramework**](#variable-mparentframework)  <br> |
|  [**TaskBase::List**](classsead_1_1TList.md) | [**mPrepareDoneList**](#variable-mpreparedonelist)  <br> |
|  [**TaskBase::List**](classsead_1_1TList.md) | [**mPrepareList**](#variable-mpreparelist)  <br> |
|  DelegateThread \* | [**mPrepareThread**](#variable-mpreparethread)  <br> |
|  [**TaskBase**](classsead_1_1TaskBase.md) \* | [**mRootTask**](#variable-mroottask)  <br> |
|  [**TaskBase::CreateArg**](structsead_1_1TaskBase_1_1CreateArg.md) | [**mRootTaskCreateArg**](#variable-mroottaskcreatearg)  <br> |
|  [**TaskBase::List**](classsead_1_1TList.md) | [**mStaticList**](#variable-mstaticlist)  <br> |
|  TaskCreateContextMgr \* | [**mTaskCreateContextMgr**](#variable-mtaskcreatecontextmgr)  <br> |
|  u32 | [**useless1**](#variable-useless1)  <br> |
|  u32 | [**useless2**](#variable-useless2)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TaskMgr**](#function-taskmgr) (const [**InitializeArg**](structsead_1_1TaskMgr_1_1InitializeArg.md) & arg) <br> |
|  void | [**appendToList\_**](#function-appendtolist_) ([**TaskBase::List**](classsead_1_1TList.md) & ls, [**TaskBase**](classsead_1_1TaskBase.md) \* task) <br> |
|  bool | [**changeTaskState\_**](#function-changetaskstate_) ([**TaskBase**](classsead_1_1TaskBase.md) \* task, TaskBase::State state) <br> |
|  void | [**destroyTaskSync**](#function-destroytasksync) ([**TaskBase**](classsead_1_1TaskBase.md) \* task) <br> |
|  void | [**doDestroyTask\_**](#function-dodestroytask_) ([**TaskBase**](classsead_1_1TaskBase.md) \* task) <br> |
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

