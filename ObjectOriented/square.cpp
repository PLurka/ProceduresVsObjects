//
// Created by sailor on 12.01.2021.
//

#include "shape.cpp"
#include "quadrangle.cpp"
#include "rectangle.cpp"

class Square : public Rectangle {
protected:
    int sideA;
public:

    Square(int a) : Rectangle(a, a) {
        sideA = a;
    }

    int circumference() {
        return 4 * sideA;
    };

    int area() {
        return sideA * sideA;
    };
};