//
// Created by sailor on 12.01.2021.
//
#include <math.h>

#ifndef PROCEDURESVSOBJECTS_OVAL_H
#define PROCEDURESVSOBJECTS_OVAL_H

#endif //PROCEDURESVSOBJECTS_OVAL_H

#pragma once
// tutaj same deklaracje

//class Oval : public Shape {
//protected:
//    int radiusA, radiusB;
//public:
//
//    Oval(int radA, int radB);
//
//    int circumference();
//
//    int area();
//};

class Oval : public Shape {
protected:
    int radiusA, radiusB;
public:

    Oval(int radA, int radB) {
        radiusA = radA;
        radiusB = radB;
    }

    ~Oval() = default;

    int circumference() {
        return 2 * M_PI * sqrt((radiusA ^ 2 * radiusB ^ 2) / 2);
    };

    int area() {
        return M_PI * radiusA * radiusB;
    };
};
