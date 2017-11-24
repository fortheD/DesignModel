#include "ShapeFactor.h"

int main() {
    ShapeFactory factory;
    Shape* my_shape = factory.GetShape("Rectangle");
    my_shape->draw();
    delete my_shape;
    return 0;
}
