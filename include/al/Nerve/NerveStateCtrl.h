#pragma once

#include "al/Nerve/NerveStateBase.h"

namespace al {

class NerveStateCtrl {
    struct State {
        NerveStateBase* mState;
        const Nerve* mHostStateNerve;
        const char* mName;
    };

    int mCapacity;
    int mStateCount;
    State* mStates;
    State* mCurrentState;

    State* findStateInfo(const Nerve* nerve);

public:
    NerveStateCtrl(int capacity);

    void startState(const Nerve* nerve);
    void tryEndCurrentState();
    bool updateCurrentState();
    bool isCurrentStateEnd() const;

    const State* getCurrentState() const { return mCurrentState; }
};

} // namespace al
