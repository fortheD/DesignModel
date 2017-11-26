#ifndef DESIGN_MODEL_PROTOTYPE
#define DESIGN_MODEL_PROTOTYPE

#include<iostream>
#include<string>

class ShapePrototype {
 public:
    virtual ShapePrototype* clone() = 0;
};

class Rectangle:public ShapePrototype {
 public:
    Rectangle();
    Rectangle(const Rectangle& rectangle);
    virtual ShapePrototype* clone();
    virtual ~Rectangle();
};

#endif
