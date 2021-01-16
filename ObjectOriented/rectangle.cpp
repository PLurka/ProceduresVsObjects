//
// Created by sailor on 12.01.2021.
//
#include "rectangle.h"

using namespace RectangleN;

Rectangle::Rectangle(int a, int b) {
        sideA = a;
        sideB = b;
}

Rectangle::~Rectangle() = default;

int Rectangle::circumference() {
    return 2 * sideA + 2 * sideB;
}

int Rectangle::area() {
    return sideA * sideB;
}
