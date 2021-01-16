//
// Created by sailor on 11.01.2021.
//


#pragma once
#ifndef PROCEDURESVSOBJECTS_SHAPE_H
#define PROCEDURESVSOBJECTS_SHAPE_H

namespace ShapeN {
    class Shape {
    public:
        virtual int circumference() = 0;
        virtual int area() = 0;
    };
}

#endif //PROCEDURESVSOBJECTS_SHAPE_H