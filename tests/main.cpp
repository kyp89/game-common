#include "main.hpp"

class DrawableConatinerChild: public GameCommon::DrawableContainer {
    public:
        DrawableConatinerChild() {
            GameCommon::DrawableElement drawableElement;
            drawableElement.img = "SOME IMG";
            drawableElement.index = 0;
            drawableElement.rotate = 180.f;
            drawableElement.x = 200.f;
            drawableElement.y = 200.f;
            drawableElement.scaleX = 1.5;
            drawableElement.scaleY = 1.5;
            drawableElement.origin_x = 0;
            drawableElement.origin_y = 0;
            _drawableElementsList.push_back(std::make_unique<GameCommon::DrawableElement>(drawableElement));
        };

         const std::vector<std::unique_ptr<GameCommon::DrawableElement>>& getDrawableElements() const {
            return _drawableElementsList;
         }

         void print() {
                std::cout << "Drawable conatiner" << std::endl;
                for(auto& e: _drawableElementsList) {
                    std::cout << e->rotate << std::endl;
                    std::cout << e->scaleX << std::endl;
                    std::cout << e->scaleY << std::endl;
                    std::cout << e->x << std::endl;
                    std::cout << e->y << std::endl;
                    std::cout << e->origin_x  << std::endl;
                    std::cout << e->origin_y  << std::endl;
                    std::cout << e->img  << std::endl;
                    std::cout << e->index  << std::endl;
            }
         }
};


int main() {
    GameCommon::Transform transform;
    transform.rotate = 180.f;
    transform.x = 200.f;
    transform.y = 200.f;
    transform.scaleX = 1.5;
    transform.scaleY = 1.5;
    transform.origin_x = 0;
    transform.origin_y = 0;

    std::cout << "TRANSFORM:" << std::endl;
    std::cout << transform.rotate << std::endl;
    std::cout << transform.scaleX << std::endl;
    std::cout << transform.scaleY << std::endl;
    std::cout << transform.x << std::endl;
    std::cout << transform.y << std::endl;
    std::cout << transform.origin_x  << std::endl;
    std::cout << transform.origin_y  << std::endl;

    GameCommon::DrawableElement drawableElement;
    drawableElement.rotate = 180.f;
    drawableElement.x = 200.f;
    drawableElement.y = 200.f;
    drawableElement.scaleX = 1.5;
    drawableElement.scaleY = 1.5;
    drawableElement.origin_x = 0;
    drawableElement.origin_y = 0;
    drawableElement.img = "SHIP";
    drawableElement.index = 1;

    std::cout << "DRAWABLE:" << std::endl;
    std::cout << drawableElement.rotate << std::endl;
    std::cout << drawableElement.scaleX << std::endl;
    std::cout << drawableElement.scaleY << std::endl;
    std::cout << drawableElement.x << std::endl;
    std::cout << drawableElement.y << std::endl;
    std::cout << drawableElement.origin_x  << std::endl;
    std::cout << drawableElement.origin_y  << std::endl;
    std::cout << drawableElement.img  << std::endl;
    std::cout << drawableElement.index  << std::endl;

    std::cout << "DRAWABLE - Conatiner:" << std::endl;
    DrawableConatinerChild drawableConatinerChild;
    drawableConatinerChild.print();
    auto& elements = drawableConatinerChild.getDrawableElements();
    for(auto& e: elements) {
        e->x = 250.0;
        e->y = 350;
    }
    drawableConatinerChild.print();

    GameCommon::Point2D point2d_1;
    std::cout << "Point 2D (1): x: " << point2d_1.x << ", y: " << point2d_1.y << std::endl;

    GameCommon::Point2D point2d_2(100, 200);
    std::cout << "Point 2D (1): x: " << point2d_2.x << ", y: " << point2d_2.y << std::endl;

    char val;
    std::cin >> val;

    return 0;
}