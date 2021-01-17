#include <vector>
#include <iostream>
#include <ctime>
#include <chrono>
#include "./ObjectOriented/oval.h"
#include "./ObjectOriented/triangle.h"
#include "./ObjectOriented/circle.h"
#include "./ObjectOriented/rectangle.h"
#include "./ObjectOriented/square.h"
#include "procedural.h"
#include "main.h"

using namespace Procedural;
using namespace OvalN;
using namespace CircleN;
using namespace TriangleN;
using namespace RectangleN;
using namespace SquareN;

using namespace std;

int SHAPE_NUMBER = 1000;

int main() {

    cout<<"Porównywanie czasów działania programu obiektowego i "
          "proceduralnego na przykładzie obliczania pól i obwodów figur geometrycznych\n";
    cout<<"Podaj liczbę figur geometrycznych: ";
    cin >> SHAPE_NUMBER;
    cout << "Obliczanie pól i obwodów dla " << SHAPE_NUMBER << " figur każdego typu...\n";
    srand((unsigned) time(0));
    // Tworzenie wektorów obiektów
    std::vector<TriangleS> triangles(SHAPE_NUMBER);
    std::vector<OvalS> ovals(SHAPE_NUMBER);
    std::vector<CircleS> circles(SHAPE_NUMBER);
    std::vector<RectangleS> rectangles(SHAPE_NUMBER);
    std::vector<SquareS> squares(SHAPE_NUMBER);
    for (int i = 0; i < SHAPE_NUMBER; i++) {
        triangles[i].base = rand() % 100 + 1;
        triangles[i].height = rand() % 100 + 1;
        triangles[i].legA = rand() % 100 + 1;
        triangles[i].legB = rand() % 100 + 1;
        ovals[i].radiusA = rand() % 100 + 1;
        ovals[i].radiusB = rand() % 100 + 1;
        circles[i].radius = rand() % 100 + 1;
        rectangles[i].sideA = rand() % 100 + 1;
        rectangles[i].sideB = rand() % 100 + 1;
        squares[i].sideA = rand() % 100 + 1;
    }

    cout << "-------------Obiektowy---------------\n";
    objectProgram(triangles, ovals, circles, rectangles, squares);
    cout << "-------------Proceduralny-------------\n";
    proceduralProgram(triangles, ovals, circles, rectangles, squares);

    return 0;
}

void objectProgram(const vector<TriangleS> &triangles, const vector<OvalS> &ovals, const vector<CircleS> &circles,
                   const vector<RectangleS> &rectangles, const vector<SquareS> &squares) {
    auto start = std::chrono::high_resolution_clock::now();
    for (auto i : triangles) {
        Triangle triangle(i.base, i.legA, i.legB,
                          i.height);
        triangle.area();
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Czas obliczeń dla trójkątów obiektowo: " << elapsed.count() << " s\n";

    auto start1 = std::chrono::high_resolution_clock::now();
    for (auto i : ovals) {
        Oval oval(i.radiusA, i.radiusB);
        oval.circumference();
        oval.area();
    }
    auto finish1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = finish1 - start1;
    std::cout << "Czas obliczeń dla owali obiektowo: " << elapsed1.count() << " s\n";

    auto start2 = std::chrono::high_resolution_clock::now();
    for (auto i : circles) {
        Circle circle(i.radius);
        circle.circumference();
        circle.area();
    }
    auto finish2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed2 = finish2 - start2;
    std::cout << "Czas obliczeń dla okręgów obiektowo: " << elapsed2.count() << " s\n";

    auto start3 = std::chrono::high_resolution_clock::now();
    for (auto i : rectangles) {
        Rectangle rectangle(i.sideA, i.sideB);
        rectangle.circumference();
        rectangle.area();
    }
    auto finish3 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed3 = finish3 - start3;
    std::cout << "Czas obliczeń dla prostokątów obiektowo: " << elapsed3.count() << " s\n";

    auto start4 = std::chrono::high_resolution_clock::now();
    for (auto i : squares) {
        Square square(i.sideA);
        square.circumference();
        square.area();
    }
    auto finish4 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed4 = finish4 - start4;
    std::cout << "Czas obliczeń dla kwadratów obiektowo: " << elapsed4.count() << " s\n";
}

void proceduralProgram(const vector<TriangleS> &triangles, const vector<OvalS> &ovals, const vector<CircleS> &circles,
                       const vector<RectangleS> &rectangles, const vector<SquareS> &squares) {
    auto start = std::chrono::high_resolution_clock::now();
    for (auto i : triangles) {
        calculateTriangleCircumference(i.base, i.legA, i.legB);
        calculateTriangleArea(i.base, i.height);
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Czas obliczeń dla trójkątów proceduralnie: " << elapsed.count() << " s\n";

    auto start1 = std::chrono::high_resolution_clock::now();
    for (auto i : ovals) {
        calculateOvalCircumference(i.radiusA, i.radiusB);
        calculateOvalArea(i.radiusA, i.radiusB);
    }
    auto finish1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = finish1 - start1;
    std::cout << "Czas obliczeń dla owali proceduralnie: " << elapsed1.count() << " s\n";

    auto start2 = std::chrono::high_resolution_clock::now();
    for (auto i : circles) {
        calculateCircleCircumference(i.radius);
        calculateCircleArea(i.radius);
    }
    auto finish2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed2 = finish2 - start2;
    std::cout << "Czas obliczeń dla okręgów proceduralnie: " << elapsed2.count() << " s\n";

    auto start3 = std::chrono::high_resolution_clock::now();
    for (auto i : rectangles) {
        calculateRectangleCircumference(i.sideA, i.sideB);
        calculateRectangleArea(i.sideA, i.sideB);
    }
    auto finish3 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed3 = finish3 - start3;
    std::cout << "Czas obliczeń dla prostokątów proceduralnie: " << elapsed3.count() << " s\n";

    auto start4 = std::chrono::high_resolution_clock::now();
    for (auto i : squares) {
        calculateSquareCircumference(i.sideA);
        calculateSquareArea(i.sideA);
    }
    auto finish4 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed4 = finish4 - start4;
    std::cout << "Czas obliczeń dla kwadratów proceduralnie: " << elapsed4.count() << " s\n";
}

