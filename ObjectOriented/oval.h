//
// Created by sailor on 12.01.2021.
//
#include <cmath>
#include "shape.h"

#pragma once

#ifndef PROCEDURESVSOBJECTS_OVAL_H
#define PROCEDURESVSOBJECTS_OVAL_H

using namespace ShapeN;

namespace OvalN
{
    class Oval : public Shape {
    protected:
        int radiusA, radiusB;
    public:
        Oval(int radA, int radB);
        ~Oval();
        int circumference() override;
        int area() override;
    };
}
#endif //PROCEDURESVSOBJECTS_OVAL_H

