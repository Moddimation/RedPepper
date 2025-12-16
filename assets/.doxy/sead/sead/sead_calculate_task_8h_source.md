

# File seadCalculateTask.h

[**File List**](files.md) **>** [**framework**](dir_979677a47ea60edf45c582211eb7937f.md) **>** [**seadCalculateTask.h**](sead_calculate_task_8h.md)

[Go to the documentation of this file](sead_calculate_task_8h.md)


```C++
#pragma once

#include <framework/seadMethodTree.h>
#include <framework/seadTaskBase.h>

namespace sead {

class CalculateTask : public TaskBase {
    SEAD_RTTI_OVERRIDE(CalculateTask, TaskBase)

public:
    explicit CalculateTask(const TaskConstructArg& arg);
    CalculateTask(const TaskConstructArg& arg, const char* name);
    virtual ~CalculateTask();
    virtual void pauseCalc(bool b);
    virtual void pauseDraw(bool b);
    virtual void pauseCalcRec(bool b);
    virtual void pauseDrawRec(bool b);
    virtual void pauseCalcChild(bool b);
    virtual void pauseDrawChild(bool b);
    virtual void attachCalcImpl();
    virtual void attachDrawImpl();
    virtual void detachCalcImpl();
    virtual void detachDrawImpl();
    virtual const RuntimeTypeInfo::Interface* getCorrespondingMethodTreeMgrTypeInfo() const;
    virtual MethodTreeNode* getMethodTreeNode(s32 method_type);

    virtual void calc() {}

protected:
    MethodTreeNode mCalcNode;
};

}  // namespace sead
```


