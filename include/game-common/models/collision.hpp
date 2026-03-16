#ifndef COLLISION_H
#define COLLISION_H

#include <algorithm>
#include "point2d.hpp"
#include "../enums/collision-type-enum.hpp"

namespace GameCommon {
    class Collision {
        public:
            Collision(Enums::CollisionType collisionType, Point2D initPoint, float _width = 0, float _height = 0, float _r = 0);
            Point2D position;
            float width;
            float height;
            float r;
            Enums::CollisionType type;
            bool isCollide(const Collision& collision) const;
            static bool checkIsCollideRectCircle(const Collision& collision1, const Collision& collision2);
    };
}

#endif