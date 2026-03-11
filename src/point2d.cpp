#include "game-common/models/point2d.hpp"

namespace GameCommon {
    Point2D::Point2D():
    x(0),
    y(0){}

    Point2D::Point2D(float _x, float _y):
    x(_x),
    y(_y){}
}