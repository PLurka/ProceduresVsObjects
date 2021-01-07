#include "shape.cpp"

class Quadrangle : public Shape {
protected:
    int sideA, sideB, sideC, sideD;
public:
    virtual int circumference() = 0;

    virtual int area() = 0;
};