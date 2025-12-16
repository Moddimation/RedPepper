

# File seadTaskID.h

[**File List**](files.md) **>** [**framework**](dir_979677a47ea60edf45c582211eb7937f.md) **>** [**seadTaskID.h**](sead_task_i_d_8h.md)

[Go to the documentation of this file](sead_task_i_d_8h.md)


```C++
#ifndef SEAD_TASK_ID_H_
#define SEAD_TASK_ID_H_

#include <basis/seadTypes.h>

namespace sead {
class HeapArray;
class TaskBase;
class TaskMgr;
class TaskParameter;

struct TaskConstructArg {
    TaskConstructArg() {};

    HeapArray* heap_array;
    TaskMgr* mgr;
    TaskParameter* param;
};

template <typename T>
TaskBase* TTaskFactory(const TaskConstructArg&);

typedef TaskBase* (*TaskFactory)(const TaskConstructArg&);

class TaskClassID {
public:
    enum Type { cInvalid = 0, cInt = 1, cFactory = 2, cString = 3 };

public:
    Type mType;

    union {
        s32 mInt;
        TaskFactory mFactory;
        const char* mString;
    } mID;
};

class TaskUserID {
public:
    s32 mID;
};

}  // namespace sead

#endif  // SEAD_TASK_ID_H_
```


