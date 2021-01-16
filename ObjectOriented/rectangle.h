//
// Created by sailor on 12.01.2021.
//
#pragma once
#include "shape.h"
#include "quadrangle.h"


#ifndef PROCEDURESVSOBJECTS_RECTANGLE_H
#define PROCEDURESVSOBJECTS_RECTANGLE_H

namespace RectangleN
{
    class Rectangle : public Quadrangle {
    protected:
        int sideA, sideB;
    public:
        Rectangle(int a, int b);
        ~Rectangle();
        int circumference() override;
        int area() override;
    };
}
#endif //PROCEDURESVSOBJECTS_RECTANGLE_H