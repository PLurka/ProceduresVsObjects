//
// Created by sailor on 12.01.2021.
//

#ifndef PROCEDURESVSOBJECTS_QUADRANGLE_H
#define PROCEDURESVSOBJECTS_QUADRANGLE_H

#endif //PROCEDURESVSOBJECTS_QUADRANGLE_H

#pragma once

class Quadrangle : public Shape {
protected:
    int sideA, sideB, sideC, sideD;
public:
    virtual int circumference() = 0;

    virtual int area() = 0;
};