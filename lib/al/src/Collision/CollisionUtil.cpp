#include <Collision/CollisionUtil.h>
#include <LiveActor/LiveActor.h>

namespace al {

bool isCollidedGround(const LiveActor* actor) {
    return actor->getCollider()->getGroundDistance() >= 0;
}

}  // namespace al
