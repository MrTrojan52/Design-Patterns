cmake_minimum_required(VERSION 3.12)
project(Lab1_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab1_2 main.cpp IVector.h VectorNormal.cpp VectorNormal.h VectorSparse.cpp VectorSparse.h IMatrix.h MatrixNormal.cpp MatrixNormal.h AMatrix.cpp AMatrix.h)