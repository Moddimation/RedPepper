#pragma once

#include "types.h"
#include <stddef.h>

namespace al {

class LiveActor;
class ExecuteRequestKeeper {
    u8 _0[0x10];

public:
    ExecuteRequestKeeper(size_t);

    void request(LiveActor*, int);
};

} // namespace al
