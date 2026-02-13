#include "main.hpp"


int main() {
    GameCommon::Transform transform;
    transform.rotate = 180.f;
    transform.x = 200.f;
    transform.y = 200.f;
    transform.scaleX = 1.5;
    transform.scaleY = 1.5;

    std::cout << transform.rotate << std::endl;
    std::cout << transform.scaleX << std::endl;
    std::cout << transform.scaleY << std::endl;
    std::cout << transform.x << std::endl;
    std::cout << transform.y << std::endl;

    char val;
    std::cin >> val;

    return 0;
}