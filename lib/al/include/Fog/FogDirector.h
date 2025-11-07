#pragma once

#include <Execute/ExecuteDirector.h>
#include <Yaml/ByamlIter.h>

namespace al
{

class FogDirector : public IUseExecutor
{
public:
        u8*       _4[ 0x78 ];
        ByamlIter _7C;

public:
        void endInit();

public:
        virtual void execute();
};

} // namespace al
