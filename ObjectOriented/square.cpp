//
// Created by sailor on 12.01.2021.
//

#include "square.h"

using namespace SquareN;
using namespace RectangleN;

Square::Square(int a) : Rectangle(a, a) {
    sideA = a;
}

Square::~Square() = default;

double Square::circumference() {
    return 4 * sideA;
}

double Square::area() {
    return sideA * sideA;
}
