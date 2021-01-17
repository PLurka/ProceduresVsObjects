//
// Created by sailor on 16.01.2021.
//
#pragma once
#include "shape.h"

#ifndef PROCEDURESVSOBJECTS_TRIANGLE_H
#define PROCEDURESVSOBJECTS_TRIANGLE_H

using namespace ShapeN;

namespace TriangleN
{
    class Triangle : public Shape {
    protected:
        int base, legA, legB, height;
    public:
        Triangle(int base, int legA, int legB, int height);
        ~Triangle();
        double circumference() override;
        double area() override;
    };
}

#endif //PROCEDURESVSOBJECTS_TRIANGLE_H
