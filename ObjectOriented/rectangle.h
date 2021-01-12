//
// Created by sailor on 12.01.2021.
//

#ifndef PROCEDURESVSOBJECTS_RECTANGLE_H
#define PROCEDURESVSOBJECTS_RECTANGLE_H

#endif //PROCEDURESVSOBJECTS_RECTANGLE_H

#pragma once

#include "shape.h"
#include "quadrangle.h"

class Rectangle : public Quadrangle {
protected:
    int sideA, sideB;
public:

    Rectangle(int a, int b) {
        sideA = a;
        sideB = b;
    }

    ~Rectangle() = default;

    int circumference() override {
        return 2 * sideA + 2 * sideB;
    };

    int area() override {
        return sideA * sideB;
    };
};