#ifndef POINT_2D_H
#define POINT_2D_H

namespace GameCommon {
    class Point2D {
        public:
            Point2D();
            Point2D(float _x, float _y);
            int x;
            int y;
    };
}

#endif