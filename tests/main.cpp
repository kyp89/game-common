#include "main.hpp"


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

    GameCommon::DravableElement drawableElement;
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

    char val;
    std::cin >> val;

    return 0;
}