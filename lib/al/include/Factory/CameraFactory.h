#pragma once

#include <Factory/Factory.h>
#include <Camera/Camera.h>

namespace al
{

typedef CreateFuncPtr<Camera>::Type        CreateCameraFuncPtr;
typedef NameToCreator<CreateCameraFuncPtr> NameToCameraCreator;

} // namespace al
