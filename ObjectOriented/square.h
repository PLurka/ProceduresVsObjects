//
// Created by sailor on 16.01.2021.
//

#pragma once
#include "shape.h"
#include "quadrangle.h"
#include "rectangle.h"

#ifndef PROCEDURESVSOBJECTS_SQUARE_H
#define PROCEDURESVSOBJECTS_SQUARE_H
using namespace RectangleN;
namespace SquareN
{
    class Square : public Rectangle {
    protected:
        int sideA;
    public:
        explicit Square(int a);
        ~Square();
        double circumference() override;
        double area() override;
    };
}

#endif //PROCEDURESVSOBJECTS_SQUARE_H
