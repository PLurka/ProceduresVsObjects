#include "circle.h"
#include <cmath>

using namespace OvalN;
using namespace CircleN;

Circle::Circle(int radius) : Oval(radius, radius) {
    radiusCircle = radius;
}

Circle::~Circle() = default;

int Circle::circumference() {
    return 2 * M_PI * radiusCircle;
}

int Circle::area() {
    return M_PI * (radiusCircle ^ 2);
}
