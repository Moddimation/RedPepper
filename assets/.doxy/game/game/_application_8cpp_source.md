

# File Application.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**System**](dir_c4e25bc9fc705584e5c854c33b9560d4.md) **>** [**Application.cpp**](_application_8cpp.md)

[Go to the documentation of this file](_application_8cpp.md)


```C++
#include "System/Application.h"

#ifdef NON_MATCHING
SEAD_SINGLETON_DISPOSER_IMPL( Application )

Application* al::getApplication()
{
        return Application::instance();
}
#endif
```


