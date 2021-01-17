#include "triangle.h"

using namespace TriangleN;

Triangle::Triangle(int base, int legA, int legB, int height)
        : base(base), legA(legA), legB(legB), height(height){}

Triangle::~Triangle() = default;

double Triangle::circumference() {
    return base + legA + legB;
}

double Triangle::area() {
    return (base * height) / 2;
}
