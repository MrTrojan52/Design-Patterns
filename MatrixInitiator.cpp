//
// Created by trojan52 on 10.10.18.
//

#include "MatrixInitiator.h"
#include <ctime>
void MatrixInitiator::fillMatrix(AMatrix *matrix, long nonZeroCount, long maxValue) {
    long rows = matrix->getRows();
    long cols = matrix->getCols();
    srand(time(nullptr));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if(nonZeroCount > 0) {
                matrix->set(i, j, static_cast<int>(rand() % maxValue + 1));
                nonZeroCount--;
            }
        }
    }
}
