//
// Created by sailor on 16.01.2021.
//
#include "oval.h"
#pragma once
#ifndef PROCEDURESVSOBJECTS_CIRCLE_H
#define PROCEDURESVSOBJECTS_CIRCLE_H

using namespace OvalN;
namespace CircleN
{
    class Circle : public Oval {
    protected:
        int radiusCircle;
    public:
        explicit Circle(int radius);
        ~Circle();
        double circumference() override;
        double area() override;
    };
}
#endif //PROCEDURESVSOBJECTS_CIRCLE_H
