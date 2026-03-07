#ifndef DRAWABLE_CONTAINER_H
#define DRAWABLE_CONTAINER_H

#include <memory>
#include <vector>
#include <unordered_map>
#include "../drawable-element/drawable-element.hpp"

namespace GameCommon {
    class DrawableContainer {
        public:
            const std::vector<std::unique_ptr<GameCommon::DrawableElement>>& getDrawableElements() const;
        protected:
            std::vector<std::unique_ptr<GameCommon::DrawableElement>> _drawableElementsList;
    };
}

#endif