//
// Created by sailor on 12.01.2021.
//

#include "shape.h"

#pragma once
#ifndef PROCEDURESVSOBJECTS_QUADRANGLE_H
#define PROCEDURESVSOBJECTS_QUADRANGLE_H

using namespace ShapeN;

namespace QuadrangleN {
    class Quadrangle : public Shape {
    protected:
        int sideA, sideB, sideC, sideD;
    public:
        double circumference() override = 0;
        double area() override = 0;
    };
}

#endif //PROCEDURESVSOBJECTS_QUADRANGLE_H