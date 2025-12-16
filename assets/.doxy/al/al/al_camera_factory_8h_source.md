

# File alCameraFactory.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Factory**](dir_5233f6e3fd4ec22e1b239c0654b74c26.md) **>** [**alCameraFactory.h**](al_camera_factory_8h.md)

[Go to the documentation of this file](al_camera_factory_8h.md)


```C++
#pragma once

#include <Camera/alCamera.h>
#include <Factory/alFactory.h>

namespace al
{

typedef CreateFuncPtr<Camera>::Type        CreateCameraFuncPtr;
typedef NameToCreator<CreateCameraFuncPtr> NameToCameraCreator;

} // namespace al
```


