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

void displayDataForCollision(const GameCommon::Collision& collision) {
        std::cout << "Collision 1 is:" << 
        collision.type << ", x: " << 
        collision.position.x << " ,y:" << 
        collision.position.y <<". widht: " << 
        collision.width << " , height: " <<
        collision.height << " , r:" <<
        collision.r << std::endl;
}

void testsCollisions(const GameCommon::Collision& collision1, const GameCommon::Collision& collision2) {
    try {
        displayDataForCollision(collision1);
        displayDataForCollision(collision2);
        std::cout << "Is Collide: " << collision1.isCollide(collision2) << std::endl;
    }catch (const std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << "\n";
    }
    catch (...) {
        std::cerr << "Unknown exception caught!\n";
    }
}

// void testCollisions(const GameCommon::Point2D point1, GameCommon::Enums::CollisionType type1)

int main() {
    /*TESTS COLLISIONS*/

    float SIZE = 10;

    GameCommon::Point2D point1(5, 5);
    GameCommon::Collision collisionShape1(GameCommon::Enums::CollisionType::RECT, point1, SIZE, SIZE);

    GameCommon::Point2D point2(15, 15);
    GameCommon::Collision collisionShape2(GameCommon::Enums::CollisionType::RECT, point2, SIZE, SIZE);

    testsCollisions(collisionShape1, collisionShape2);

    GameCommon::Collision collisionShape3(GameCommon::Enums::CollisionType::CIRCLE, point2, 0, 0, SIZE);
    testsCollisions(collisionShape1, collisionShape3);

    GameCommon::Point2D point3(24, 24);
    GameCommon::Collision collisionShape4(GameCommon::Enums::CollisionType::CIRCLE, point3, 0, 0, SIZE);
    testsCollisions(collisionShape3, collisionShape4);

    char val;
    std::cin >> val;

    return 0;
}