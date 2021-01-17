//
// Created by sailor on 12.01.2021.
//
#pragma once
#include "shape.h"
#include "quadrangle.h"

#ifndef PROCEDURESVSOBJECTS_RECTANGLE_H
#define PROCEDURESVSOBJECTS_RECTANGLE_H

using namespace QuadrangleN;

namespace RectangleN
{
    class Rectangle : public Quadrangle {
    protected:
        int sideA, sideB;
    public:
        Rectangle(int a, int b);
        ~Rectangle();
        double circumference() override;
        double area() override;
    };
}
#endif //PROCEDURESVSOBJECTS_RECTANGLE_H