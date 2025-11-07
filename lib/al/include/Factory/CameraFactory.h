#pragma once

#include <Camera/Camera.h>
#include <Factory/Factory.h>

namespace al
{

typedef CreateFuncPtr<Camera>::Type        CreateCameraFuncPtr;
typedef NameToCreator<CreateCameraFuncPtr> NameToCameraCreator;

} // namespace al
