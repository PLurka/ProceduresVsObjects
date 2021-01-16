//
// Created by sailor on 12.01.2021.
//
#pragma once

#ifndef PROCEDURESVSOBJECTS_MAIN_H
#define PROCEDURESVSOBJECTS_MAIN_H

using namespace std;
struct TriangleS
{
    int base, legA, legB, height;
};
struct OvalS
{
    int radiusA, radiusB;
};
struct CircleS
{
    int radius;
};
struct RectangleS
{
    int sideA, sideB;
};
struct SquareS
{
    int sideA;
};

void proceduralProgram(const vector<TriangleS>& triangles, const vector<OvalS>& ovals, const vector<CircleS>& circles,
                       const vector<RectangleS>& rectangles, const vector<SquareS>& squares);
void objectProgram(const vector<TriangleS>& triangles, const vector<OvalS>& ovals, const vector<CircleS>& circles,
                   const vector<RectangleS>& rectangles, const vector<SquareS>& squares);

#endif //PROCEDURESVSOBJECTS_MAIN_H