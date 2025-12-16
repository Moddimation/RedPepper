

# File alKCollisionServer.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Collision**](dir_daad28a749e3ab92bb0c1d2c973a5ea4.md) **>** [**alKCollisionServer.h**](al_k_collision_server_8h.md)

[Go to the documentation of this file](al_k_collision_server_8h.md)


```C++
#pragma once

class JMapInfo;

namespace al
{

struct KCollisionHeader
{
        union
        {
                u32   verticesOffset;
                void* verticesSection;
        };

        union
        {
                u32   normalsOffset;
                void* normalsSection;
        };

        union
        {
                u32   trianglesOffset;
                void* trianglesSection;
        };

        union
        {
                u32   spatialIndicesOffset;
                void* spatialIndicesSection;
        };

        static KCollisionHeader* fromData( void* data )
        {
                return static_cast<KCollisionHeader*>( data );
        }
};

class KCollisionServer
{
private:
        union
        {
                KCollisionHeader* mHeader;
                void*             mHeaderData;
                u8*               mHeaderDataBytes;
        };

        JMapInfo* mAttributeInfo;
        float     _8;

public:
        void setData( void* data );
        void initKCollisionServer( void* kclData, const void* paData );

public:
        KCollisionServer();
};

} // namespace al
```


