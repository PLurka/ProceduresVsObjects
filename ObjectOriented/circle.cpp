#include "shape.cpp"
#include "oval.cpp"
#include <math.h>

class Circle : public Oval {
protected:
    int radiusCircle;
public:

    Circle(int radius): Oval(radius, radius) {
        radiusCircle = radius;
    }

    ~Circle() = default;

    int circumference() {
        return 2 * M_PI * radiusCircle;
    };

    int area() {
        return M_PI * (radiusA ^ 2);
    };

};