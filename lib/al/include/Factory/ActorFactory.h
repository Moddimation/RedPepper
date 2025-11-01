#pragma once

#include <Factory/Factory.h>
#include <LiveActor/LiveActor.h>
#include <Resource/Resource.h>
#include <System/Byaml/ByamlIter.h>

namespace al {

typedef CreateFuncPtr<LiveActor>::Type CreateActorFuncPtr;
typedef NameToCreator<CreateActorFuncPtr> NameToActorCreator;

class ActorFactory {
#ifndef __CC_ARM
public:
#endif
    Resource* mArchive;
    ByamlIter* mConvertNameData;

public:
    ActorFactory();

    const char* convertName(const char* objectName) const;
    CreateActorFuncPtr getCreator(const char* objectName) const;
};

}  // namespace al
