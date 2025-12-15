

# File alWipeSimple.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Layout**](dir_46a925658b0ce4da4c2897114aabc012.md) **>** [**alWipeSimple.cpp**](alWipeSimple_8cpp.md)

[Go to the documentation of this file](alWipeSimple_8cpp.md)


```C++
#include <Layout/alWipeSimple.h>
#include <Nerve/alNerveFunction.h>

namespace al
{

namespace NrvWipeSimple
{

NERVE_DEF( WipeSimple, Close )
NERVE_DEF( WipeSimple, Wait )
NERVE_DEF( WipeSimple, Open )

} // namespace NrvWipeSimple

WipeSimple::WipeSimple( const char* name, const char* archive, const LayoutInitInfo& info, const char* suffix )
    : LayoutActor( name ), _30( -1 )
{
        initLayoutActor( this, info, archive, suffix );
        initNerve( &NrvWipeSimple::Close );
}

void WipeSimple::appear()
{
        LayoutActor::appear();
}

void WipeSimple::exeClose()
{
        if ( !isFirstStep( this ) && isActionEnd( this ) )
                setNerve( this, &NrvWipeSimple::Wait );
}

void WipeSimple::exeWait()
{
        if ( isFirstStep( this ) )
                startAction( this, "Wait" );
}

#ifdef NON_MATCHING

// float math
void WipeSimple::exeOpen()
{
        if ( isFirstStep( this ) )
                setActionFrameRate( this, _30 < 1 ? 1.0 : getActionFrameMax( this ) / _30 );

        if ( isActionEnd( this ) )
                kill();
}
#endif

} // namespace al
```


