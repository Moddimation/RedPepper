

# File alJMapInfo.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Util**](dir_bdab535a347f7091d2d1f069736b8996.md) **>** [**alJMapInfo.cpp**](alJMapInfo_8cpp.md)

[Go to the documentation of this file](alJMapInfo_8cpp.md)


```C++
#include <Util/alJMapInfo.h>

JMapInfo::JMapInfo() : mData( nullptr ), mName( "Undifined" )
{
}

bool JMapInfo::attach( const void* data )
{
        if ( !data )
                return false;

        mData = JMapData::fromData( data );
        return true;
}
```


