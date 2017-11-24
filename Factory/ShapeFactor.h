#ifndef DESIGN_MODEL_FACTORY_
#define DESIGN_MODEL_FACTORY_

#include<iostream>
#include<string>

class Shape {
 public:
    Shape();
    virtual void draw() = 0;
    virtual ~Shape(){};
};

class Rectangle:public Shape {
 public:
    void draw();
    virtual ~Rectangle();
};

class Circle:public Shape {
 public:
    void draw();
    virtual ~Circle();
};

class Line:public Shape {
 public:
    void draw();
    virtual ~Line();
};

class ShapeFactory {
 public:
    Shape* GetShape(std::string shape_type);
};

#endif
