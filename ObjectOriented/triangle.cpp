#include "shape.cpp"

class Triangle : public Shape {
protected:
    int base, legA, legB, height;
public:

    int circumference() {
        return base + legA + legB;
    };

    int area() {
        return (base * height) / 2;
    };
};