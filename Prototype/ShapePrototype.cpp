#include "ShapePrototype.h"

Rectangle::Rectangle() {
    std::cout<<"rectangle constructor"<<std::endl;
}

Rectangle::Rectangle(const Rectangle& rectangle) {
    std::cout<<"copy rectangle constructor"<<std::endl;
}

ShapePrototype* Rectangle::clone() {
    std::cout<<"copy rectangle"<<std::endl;
    return new Rectangle(*this);
}

Rectangle::~Rectangle() {
    std::cout<<"rectangle destructor"<<std::endl;
}
