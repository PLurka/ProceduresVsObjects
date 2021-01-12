#include "shape.cpp"

class Triangle : public Shape {
protected:
    int base, legA, legB, height;
public:

    Triangle(int base, int legA, int legB, int height) : base(base), legA(legA), legB(legB), height(height) {
    }

    ~Triangle() = default;

    int circumference() {
        return base + legA + legB;
    };

    int area() {
        return (base * height) / 2;
    };
};