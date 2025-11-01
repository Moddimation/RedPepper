#pragma once

#include <AreaObj/AreaObj.h>
#include <Factory/Factory.h>

namespace al {

typedef CreateFuncPtr<AreaObj>::Type CreateAreaObjFuncPtr;
typedef NameToCreator<CreateAreaObjFuncPtr> NameToAreaObjCreator;

}  // namespace al
