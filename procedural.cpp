//
// Created by sailor on 16.01.2021.
//

#include "procedural.h"
#include "cmath"

using namespace Procedural;
using namespace std;

double Procedural::calculateTriangleCircumference(int base, int legA, int legB) {
    return base + legA + legB;
};

double Procedural::calculateTriangleArea(int base, int height) {
    return double(base * height) / 2;
};

double Procedural::calculateOvalCircumference(int radiusA, int radiusB) {
    return 2 * M_PI * sqrt((radiusA ^ 2 * radiusB ^ 2) / 2);
};

double Procedural::calculateOvalArea(int radiusA, int radiusB) {
    return M_PI * radiusA * radiusB;
};

double Procedural::calculateCircleCircumference(int radius) {
    return 2 * M_PI * radius;
};

double Procedural::calculateCircleArea(int radius) {
    return M_PI * (radius ^ 2);
};

double Procedural::calculateRectangleCircumference(int sideA, int sideB) {
    return 2 * sideA + 2 * sideB;
};

double Procedural::calculateRectangleArea(int sideA, int sideB) {
    return sideA * sideB;
};

double Procedural::calculateSquareCircumference(int sideA) {
    return 4 * sideA;
};

double Procedural::calculateSquareArea(int sideA) {
    return sideA * sideA;
};

