#include "shape.cpp"
#include "oval.cpp"
#include <math.h>

class Circle : public Oval {
protected:
    // int radiusA, radiusB;
    int radiusCircle;
public:

    Circle(int radius): Oval(radius, radius) {
        radiusCircle = radius;
    }
    //    Circle(int radius): super(radius, radius) {
//    }
};