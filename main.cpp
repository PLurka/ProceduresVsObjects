#include <vector>
#include <iostream>
#include <ctime>
#include <chrono>
#include "./ObjectOriented/oval.cpp"

// Wygenerować x obiektów każdego typu figury - do arraya
// dla każdego obiektu obliczyć pole
// zmierzyć czas
// wygenerować liste losowych wartości dla długości boków/promieni figur
// dla każdej z tych wartości wywołuj odpowiednią funkcje (proceduralne) i zmierz czas tych operacji

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


using namespace std;
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    Oval oval1 (3,2);
    cout<<"Oval circumference " << oval1.circumference() << "\n";
    cout<<"Oval area " << oval1.area() << "\n";
    // srand((unsigned) time(0));
    // (rand() % 45) + 1

    std::vector<TriangleS> triangles(20); // (20) elementów
    for(int i=0; i<20; i++) {
        triangles.push_back({1,2,3,4,});
    }
    cout<<triangles[5].base << "\n";


    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    return 0;
}


int calculateTriangleCircumference(int base, int legA, int legB) {
    return base + legA + legB;
};

int calculateTriangleArea(int base, int height) {
    return (base * height) / 2;
};
