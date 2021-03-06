#include "oval.h"
#include <cmath>

using namespace OvalN;

Oval::Oval(int radA, int radB) {
    radiusA = radA;
    radiusB = radB;
}

Oval::~Oval() = default;

double Oval::circumference() {
    return 2 * M_PI * sqrt((radiusA ^ 2 * radiusB ^ 2) / 2);
}

double Oval::area() {
    return M_PI * radiusA * radiusB;
}
