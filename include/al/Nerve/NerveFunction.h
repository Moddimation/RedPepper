#pragma once

#include "al/Nerve/NerveKeeper.h"
#include "al/Nerve/NerveStateBase.h"

namespace al {

void setNerve(IUseNerve* p, const Nerve* nerve);

bool isStep(IUseNerve* p, int step);
bool isNerve(const IUseNerve* p, const Nerve* nerve);
bool isFirstStep(const IUseNerve* p);
#ifdef __CC_ARM
bool isLessStep(const IUseNerve* p, int step);
#else
inline bool isLessStep(const IUseNerve* p, int step)
{
    return p->getNerveKeeper()->getStep() < step;
}
#endif
#ifdef __CC_ARM
int getNerveStep(const IUseNerve* p);
#else
inline int getNerveStep(const IUseNerve* p)
{
    return p->getNerveKeeper()->getStep();
}
#endif
bool isGreaterStep(const IUseNerve* p, int step);
bool isGreaterEqualStep(const IUseNerve* p, int step);

void initNerveState(IUseNerve* p, NerveStateBase* state, const Nerve* stateNrv, const char* name);
bool updateNerveState(IUseNerve* p); // returns if nerve state is dead
bool updateNerveStateAndNextNerve(IUseNerve* p, const Nerve* nerve); // "

} // namespace al

namespace alNerveFunction {

void setNerveAction(al::IUseNerve* p, const char* name);

} // namespace al
