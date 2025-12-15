

# File alMemorySystem.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Memory**](dir_b8e6d1e681e7dfc39c95492a0336f33b.md) **>** [**alMemorySystem.cpp**](alMemorySystem_8cpp.md)

[Go to the documentation of this file](alMemorySystem_8cpp.md)


```C++
#include <Memory/alMemorySystem.h>
#include <Resource/alResource.h>
#include <System/alSystemKit.h>
#include <Util/alStringUtil.h>
#include <Yaml/alByamlIter.h>

namespace al
{

void MemorySystem::createSequenceHeap()
{
        mSequenceHeap = sead::ExpHeap::create( 0, "SequenceHeap", nullptr, sead::ExpHeap::cHeapDirection_Forward, false );
}

extern "C" void FUN_002911e8( sead::FrameHeap** out, u32 heapSize, const char* name, u8,
        int ); // creates FrameHeap(?)

#ifdef NON_MATCHING
// WIP
void MemorySystem::createSceneResourceHeap( const char* stageName )
{
        int heapSize;
        if ( stageName )
        {
                al::Resource* gameSystemDataTable =
                        al::findOrCreateResource( "ObjectData/GameSystemDataTable" );
                const u8*     tableData = gameSystemDataTable->getByml( "HeapSizeDefine" );
                al::ByamlIter table( tableData );
                for ( int i = 0; i < table.getSize(); i++ )
                {
                        al::ByamlIter entry;
                        table.tryGetIterByIndex( &entry, i );
                        const char* stage = nullptr;
                        entry.tryGetStringByKey( &stage, "Stage" );
                        if ( al::isEqualString( stage, stageName ) )
                        {
                                float resourceMb = 0;
                                entry.tryGetFloatByKey( &resourceMb, "SceneResource" );
                                heapSize = resourceMb * 1024 * 1024;
                                break;
                        }
                }
        }
        else
                heapSize = 8 * 1024 * 1024; // 8 MB
        FUN_002911e8( &mSceneResourceHeap, heapSize, "SceneHeapResource", 0, 1 );
}
#endif

void MemorySystem::freeAllSequenceHeap()
{
        mSequenceHeap->freeAll();
}

sead::ExpHeap* getStationedHeap()
{
        return alProjectInterface::getSystemKit()->getMemorySystem()->getStationedHeap();
}

sead::ExpHeap* getSequenceHeap()
{
        return alProjectInterface::getSystemKit()->getMemorySystem()->getSequenceHeap();
}

sead::FrameHeap* getSceneResourceHeap()
{
        return alProjectInterface::getSystemKit()->getMemorySystem()->getSceneResourceHeap();
}

sead::FrameHeap* getCourseSelectHeap()
{
        return alProjectInterface::getSystemKit()->getMemorySystem()->getCourseSelectHeap();
}

bool isCreatedSceneResourceHeap()
{
        return getSceneResourceHeap() != nullptr;
}

} // namespace al
```


