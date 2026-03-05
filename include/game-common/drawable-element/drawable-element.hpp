#include <string>
#include "../transform/transform.hpp"


namespace GameCommon {
    class DravableElement: public Transform {
        public:
            std::string img;
            int index;
    };
}