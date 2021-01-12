#include "shape.cpp"
#include <math.h>

class Oval : public Shape {
protected:
    int radiusA, radiusB;
public:

    Oval(int radA, int radB) {
        radiusA = radA;
        radiusB = radB;
    }

    int circumference() {
        return 2 * M_PI * sqrt((radiusA ^ 2 * radiusB ^ 2) / 2);
    };

    int area() {
        return M_PI * radiusA * radiusB;
    };
};