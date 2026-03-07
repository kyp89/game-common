#ifndef DRAWABLE_ELEMENT_H
#define DRAWABLE_ELEMENT_H

#include <string>
#include "../transform/transform.hpp"


namespace GameCommon {
    class DrawableElement: public Transform {
        public:
            std::string img;
            int index;
    };
}

#endif