#pragma once

#include <Factory/Factory.h>
#include <AreaObj/AreaObj.h>

namespace al
{

typedef CreateFuncPtr<AreaObj>::Type        CreateAreaObjFuncPtr;
typedef NameToCreator<CreateAreaObjFuncPtr> NameToAreaObjCreator;

} // namespace al
