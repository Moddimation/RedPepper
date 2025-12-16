

# File alNerve.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Nerve**](dir_ce5a5d5b959d6ee5ba2a9f5882112a88.md) **>** [**alNerve.h**](al_nerve_8h.md)

[Go to the documentation of this file](al_nerve_8h.md)


```C++
#pragma once

#include <Nerve/alNerveExecutor.h>

namespace al
{

class NerveKeeper;

struct Nerve
{
        virtual void execute( NerveKeeper* nerveKeeper ) const = 0;
        virtual void executeOnEnd( NerveKeeper* nerveKeeper ) const {};
};

#ifndef split
#define SPLIT_HACK
#define split( A ) A
#endif

#define NERVE_DEF( CLASS, ACTION )                                               \
        struct CLASS##Nrv##ACTION : public ::al::Nerve                           \
        {                                                                        \
                virtual void execute( ::al::NerveKeeper* keeper ) const          \
                {                                                                \
                        static_cast<CLASS*>( keeper->getHost() )->exe##ACTION(); \
                }                                                                \
        };                                                                       \
        const split( CLASS##Nrv##ACTION ) ACTION = CLASS##Nrv##ACTION();

#define NERVE_DEF_END( CLASS, ACTION, ENDACTION )                                   \
        struct CLASS##Nrv##ACTION : public ::al::Nerve                              \
        {                                                                           \
                virtual void execute( ::al::NerveKeeper* keeper ) const             \
                {                                                                   \
                        static_cast<CLASS*>( keeper->getHost() )->exe##ACTION();    \
                }                                                                   \
                virtual void executeOnEnd( ::al::NerveKeeper* keeper ) const        \
                {                                                                   \
                        static_cast<CLASS*>( keeper->getHost() )->exe##ENDACTION(); \
                }                                                                   \
        };                                                                          \
        const split( CLASS##Nrv##ACTION ) ACTION = CLASS##Nrv##ACTION();

#ifdef SPLIT_HACK
#undef SPLIT_HACK
#endif

} // namespace al
```


