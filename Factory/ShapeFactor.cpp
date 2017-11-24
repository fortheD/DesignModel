#include "ShapeFactor.h"

void Rectangle::draw() {
    std::cout<<"this is a rectangle"<<std::endl;
}

Rectangle::~Rectangle() {
}

void Circle::draw() {
    std::cout<<"this is a circle"<<std::endl;
}

Circle::~Circle() {
}

void Line::draw() {
    std::cout<<"this is a rectangle"<<std::endl;
}

Line::~Line() {
}

Shape* ShapeFactory::GetShape(std::string shape_type) {
    Shape* shape_instance =NULL;
    if (shape_type == "Rectangle")
        shape_instance = new Rectangle();
    else if (shape_type == "Circle")
        shape_instance =  new Circle();
    else if (shape_type == "Line")
        shape_instance = new Line();
    return shape_instance;
}
