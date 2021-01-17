cmake_minimum_required(VERSION 3.17)
project(ProceduresVsObjects)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

# set(SOURCE_FILES main.cpp)
add_executable(ProceduresVsObjects
        ObjectOriented/circle.cpp
        ObjectOriented/oval.cpp
        ObjectOriented/triangle.cpp
        main.cpp ObjectOriented/shape.h ObjectOriented/rectangle.cpp ObjectOriented/square.cpp ObjectOriented/quadrangle.h main.h ObjectOriented/oval.h ObjectOriented/rectangle.h procedural.h procedural.cpp ObjectOriented/square.h ObjectOriented/circle.h ObjectOriented/triangle.h)
