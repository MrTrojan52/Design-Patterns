//
// Created by trojan52 on 10.10.18.
//

#include "MatrixInitiator.h"
#include <ctime>
void MatrixInitiator::fillMatrix(AMatrix * const matrix, long nonZeroCount, long maxValue) {
    srand(time(nullptr));
    long rows = matrix->getRows();
    long cols = matrix->getCols();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if(nonZeroCount > 0) {
                matrix->set(i, j, static_cast<int>(rand() % maxValue + 1));
                nonZeroCount--;
            }
        }
    }
}
