//
// Created by sailor on 12.01.2021.
//

#ifndef PROCEDURESVSOBJECTS_MAIN_H
#define PROCEDURESVSOBJECTS_MAIN_H

#endif //PROCEDURESVSOBJECTS_MAIN_H

#pragma once

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

// tutaj same deklaracje
int calculateTriangleCircumference(int base, int legA, int legB) {
    return base + legA + legB;
};

int calculateTriangleArea(int base, int height) {
    return (base * height) / 2;
};

double calculateOvalCircumference(int radiusA, int radiusB) {
    return 2 * M_PI * sqrt((radiusA ^ 2 * radiusB ^ 2) / 2);
};

double calculateOvalArea(int radiusA, int radiusB) {
    return M_PI * radiusA * radiusB;
};

double calculateCircleCircumference(int radiusA, int radiusB) {
    return 2 * M_PI * sqrt((radiusA ^ 2 * radiusB ^ 2) / 2);
};

double calculateCircleArea(int radiusA, int radiusB) {
    return M_PI * radiusA * radiusB;
};

double calculateCircleCircumference(int radius) {
    return 2 * M_PI * radius;
};

double calculateCircleArea(int radius) {
    return M_PI * (radius ^ 2);
};

double calculateRectangleCircumference(int sideA, int sideB) {
    return 2 * sideA + 2 * sideB;
};

double calculateRectangleArea(int sideA, int sideB) {
    return sideA * sideB;
};

double calculateSquareCircumference(int sideA) {
    return 4 * sideA;
};

double calculateSquareArea(int sideA) {
    return sideA * sideA;
};