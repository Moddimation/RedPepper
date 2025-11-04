#pragma once

namespace sead {
class Heap;
}

namespace al
{

class EffectSystem
{
private:
        sead::Heap* _0;

public:
        void init();
        void startScene();
public:
        EffectSystem();
};

} // namespace al
