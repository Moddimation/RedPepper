#pragma once

namespace sead {
class Heap;
}

namespace al
{
class Resource;

class StageResourceKeeper
{
private:
        al::Resource** mResources;

public:
        void initAndLoadResource( const char* stageName, int scenario, sead::Heap* heap );

        al::Resource* getResourceDesign() const;
        al::Resource* getResourceMap() const;
        al::Resource* getResourceSound() const;

public:
        StageResourceKeeper();
};

} // namespace al
