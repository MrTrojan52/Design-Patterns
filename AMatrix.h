//
// Created by trojan52 on 06.10.18.
//

#ifndef LAB1_2_AMATRIX_H
#define LAB1_2_AMATRIX_H

#include "IMatrix.h"

class AMatrix: public IMatrix {
public:
    int getRows() override;
    int getCols() override;
    int get(int row, int col) override;
    void set(int row, int col, int val) override;

private:
};


#endif //LAB1_2_AMATRIX_H
