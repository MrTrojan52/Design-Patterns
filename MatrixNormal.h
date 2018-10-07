//
// Created by trojan52 on 06.10.18.
//

#ifndef LAB1_2_MATRIXNORMAL_H
#define LAB1_2_MATRIXNORMAL_H

#include "AMatrix.h"
#include "VectorNormal.h"
class MatrixNormal: public AMatrix {
public:
    MatrixNormal(int rows, int cols) : AMatrix(rows, cols) {}

protected:
    IVector* createVector(long size) override {
        //TODO: Разобраться с createVector для наследников
        return new VectorNormal(size);
    }
private:

};


#endif //LAB1_2_MATRIXNORMAL_H
