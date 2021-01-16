//
// Created by sailor on 16.01.2021.
//

#pragma once
#include "shape.h"
#include "quadrangle.h"
#include "rectangle.h"

#ifndef PROCEDURESVSOBJECTS_SQUARE_H
#define PROCEDURESVSOBJECTS_SQUARE_H

namespace SquareN
{
    class Square : public RectangleN::Rectangle {
    protected:
        int sideA;
    public:
        explicit Square(int a);
        ~Square();
        int circumference() override;
        int area() override;
    };
}

#endif //PROCEDURESVSOBJECTS_SQUARE_H
