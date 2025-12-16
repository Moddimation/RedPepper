

# File alKCollisionServer.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Collision**](dir_16a613e26ad8256b29c46c5e8ae88338.md) **>** [**alKCollisionServer.cpp**](al_k_collision_server_8cpp.md)

[Go to the documentation of this file](al_k_collision_server_8cpp.md)


```C++
#include <Collision/alKCollisionServer.h>
#include <Util/alJMapInfo.h>

namespace al
{

KCollisionServer::KCollisionServer() : mHeader( nullptr ), mAttributeInfo( new JMapInfo ), _8( 1.0 )
{
}

void KCollisionServer::setData( void* data )
{
        mHeaderData = data;

        if ( ( mHeader->verticesOffset & 0xffffff00 ) == 0 ) // ?
        {
                mHeader->verticesSection       = mHeaderDataBytes + mHeader->verticesOffset;
                mHeader->normalsSection        = mHeaderDataBytes + mHeader->normalsOffset;
                mHeader->trianglesSection      = mHeaderDataBytes + mHeader->trianglesOffset;
                mHeader->spatialIndicesSection = mHeaderDataBytes + mHeader->spatialIndicesOffset;
        }
}

void KCollisionServer::initKCollisionServer( void* kclData, const void* paData )
{
        setData( kclData );
        if ( paData )
                mAttributeInfo->attach( paData );
}

} // namespace al
```


