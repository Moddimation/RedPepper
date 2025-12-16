

# File alControllerUtil.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Controller**](dir_079c4ebe0df5fa5a27e77f9c6d15dfb3.md) **>** [**alControllerUtil.h**](al_controller_util_8h.md)

[Go to the documentation of this file](al_controller_util_8h.md)


```C++
#pragma once

#include <math/seadVector.h>

namespace al
{

bool isPadTrigger( int port, int mask );
bool isPadHold( int port, int mask );
bool isPadRelease( int port, int mask );

#define _T_BUTTON( BUTTON )                        \
        bool isPadTrigger##BUTTON( int port = 0 ); \
        bool isPadHold##BUTTON( int port = 0 );    \
        bool isPadRelease##BUTTON( int port = 0 );

_T_BUTTON( A );
_T_BUTTON( B );
_T_BUTTON( X );
_T_BUTTON( Y );
_T_BUTTON( Home );
_T_BUTTON( Minus );
_T_BUTTON( Start );
_T_BUTTON( Select );
_T_BUTTON( L );
_T_BUTTON( R );
_T_BUTTON( Touch );
_T_BUTTON( Up );
_T_BUTTON( Down );
_T_BUTTON( Left );
_T_BUTTON( Right );

#undef _T_BUTTON

#ifndef __CC_ARM
const sead::Vector2f& getLeftStick( int port = 0 );
#endif

} // namespace al
```


