//
// Created by trojan52 on 06.10.18.
//

#ifndef LAB1_2_AMATRIX_H
#define LAB1_2_AMATRIX_H

#include "IMatrix.h"
#include "IVector.h"
#include <vector>
#include "VectorNormal.h"
class AMatrix: public IMatrix {
public:
    AMatrix(long rows, long cols) {
        this->data.resize(rows);
        //TODO: Разобраться с createVector для наследников
        for(long i = 0; i < rows; ++i)
            this->data[i] = createVector(cols);

    }
    unsigned long getRows() override;
    unsigned long getCols() override;
    int get(int row, int col) override;
    void set(int row, int col, int val) override;
protected:
    virtual IVector* createVector(long size) {
        //TODO: Разобраться с createVector для наследников
        return new VectorNormal(size);
    };

private:
    std::vector<IVector*> data;
};


#endif //LAB1_2_AMATRIX_H
