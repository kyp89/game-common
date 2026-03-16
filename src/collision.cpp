#include "game-common/models/collision.hpp"

namespace GameCommon {
    Collision::Collision(Enums::CollisionType collisionType, Point2D initPoint, float _width, float _height, float _r):
    width(_width),
    height(_height),
    r(_r),
    type(collisionType) {
        position.x = initPoint.x;
        position.y = initPoint.y;
    };

    bool Collision::isCollide(const Collision& collision) const {
        if(type == Enums::CollisionType::CIRCLE && collision.type == Enums::CollisionType::CIRCLE) {
            float dx = position.x - collision.position.x;
            float dy = position.y - collision.position.y;

            float rsum = r + collision.r;
            float distanceSq = dx * dx + dy * dy;
            return distanceSq <= rsum * rsum;
        }
        if(type == Enums::CollisionType::RECT && collision.type == Enums::CollisionType::RECT) {
            return position.x < collision.position.x + collision.width &&
                position.x + width > collision.position.x &&
                position.y < collision.position.y + collision.height &&
                position.y + height > collision.position.y;
        }
        if(type == Enums::CollisionType::CIRCLE && collision.type == Enums::CollisionType::RECT) {
            return Collision::checkIsCollideRectCircle(*this, collision);
        }
        if(type == Enums::CollisionType::RECT && collision.type == Enums::CollisionType::CIRCLE) {
            return Collision::checkIsCollideRectCircle(collision, *this);
        }
        return false;
    };

    bool Collision::checkIsCollideRectCircle(const Collision& collisionCircle, const Collision& collisionRect) {
            float closestX = std::clamp((float)collisionCircle.position.x, (float)collisionRect.position.x, collisionRect.position.x + collisionRect.width);
            float closestY = std::clamp((float)collisionCircle.position.y, (float)collisionRect.position.y, collisionRect.position.y + collisionRect.height);

            float dx = collisionCircle.position.x - closestX;
            float dy = collisionCircle.position.y - closestY;

            return (dx*dx + dy*dy) <= collisionCircle.r * collisionCircle.r;
    };
}