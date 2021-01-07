#include "shape.cpp"
#include <math.h>

class Circle : public Oval {
protected:
    int radiusA, radiusB;
public:

    Circle(int radius) {
        radiusA = radius;
        radiusB = radius;
    }
};