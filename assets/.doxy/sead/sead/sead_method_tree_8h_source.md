

# File seadMethodTree.h

[**File List**](files.md) **>** [**framework**](dir_979677a47ea60edf45c582211eb7937f.md) **>** [**seadMethodTree.h**](sead_method_tree_8h.md)

[Go to the documentation of this file](sead_method_tree_8h.md)


```C++
#ifndef SEAD_METHODTREE_H_
#define SEAD_METHODTREE_H_

#include <container/seadTreeNode.h>
#include <heap/seadDisposer.h>
#include <prim/seadBitFlag.h>
#include <prim/seadNamable.h>
#include <prim/seadRuntimeTypeInfo.h>
#include <prim/seadStorageFor.h>

namespace sead {
class CriticalSection;

template <typename T, typename U>
class IDelegate2;

class MethodTreeNode : public IDisposer, public TTreeNode<MethodTreeNode*>, public INamable {
    SEAD_RTTI_BASE(MethodTreeNode)

public:
    enum PauseFlag {
        cPause_None = 0,
        cPause_Self = 1,
        cPause_Child = 2,
        cPause_Both = 3,
    };

    typedef IDelegate2<MethodTreeNode*, PauseFlag> PauseEventDelegate;

    // NON_MATCHING: stores for mPauseFlag, mPauseEventDelegate, mUserID
    /*explicit MethodTreeNode(CriticalSection* cs)
        : TTreeNode(this)
    {
        mCriticalSection = cs;
        mPauseEventDelegate = nullptr;
        mUserID = nullptr;
        mDelegateHolder.construct(sead::Delegate<MethodTreeNode>());
        setPauseFlag(cPause_Both);
    }*/

    virtual ~MethodTreeNode() { detachAll(); }

    void call();
    void detachAll();
    void pushBackChild(MethodTreeNode* node);
    void pushFrontChild(MethodTreeNode* node);

    void setPauseFlag(PauseFlag flag);

private:
    void attachMutexRec_(CriticalSection* m) const;
    void callRec_();

    void lock_();
    void unlock_();

    u8 mDelegateHolder[0x10];
    mutable CriticalSection* mCriticalSection;
    u32 mPriority;
    BitFlag32 mPauseFlag;
    PauseEventDelegate* mPauseEventDelegate;
    void* mUserID;
};

}  // namespace sead

#endif  // SEAD_METHODTREE_H_
```


