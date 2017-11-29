#include"ShapePrototype.h"

int main() {
    Rectangle rect;
    Rectangle *rect_clone = rect.clone();
    delete rect_clone;
    return 0;
}
