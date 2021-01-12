//
// Created by sailor on 12.01.2021.
//

#include "shape.cpp"
#include "quadrangle.cpp"
#include <math.h>

class Rectangle : public Quadrangle {
protected:
    int sideA, sideB;
public:

    Rectangle(int a, int b) {
        sideA = a;
        sideB = b;
    }

    int circumference() {
        return 2 * sideA + 2 * sideB;
    };

    int area() {
        return sideA * sideB;
    };
};