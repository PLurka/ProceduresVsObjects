#include "shape.cpp"

class Triangle: public Shape {
    protected:
        int base, legA, legB, height;
    public:
        virtual int circumference() {
            return base + legA + legB;
        };
        virtual int area() {
            return (base * height) / 2;
        };
};