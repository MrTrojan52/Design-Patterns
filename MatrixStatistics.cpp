//
// Created by trojan52 on 10.10.18.
//

#include "MatrixStatistics.h"
#include <limits>
MatrixStatistics::MatrixStatistics(AMatrix *const matrix):_matrix(matrix) { }

long MatrixStatistics::sum() const {
    long sum = 0;
    long rows = this->_matrix->getRows();
    long cols = this->_matrix->getCols();
    for(long i = 0; i < rows; ++i) {
        for (long j = 0; j < cols; ++j) {
            sum += this->_matrix->get(i, j);
        }
    }
    return sum;
}


long MatrixStatistics::notZeroCount() const {
    long count = 0;
    long rows = this->_matrix->getRows();
    long cols = this->_matrix->getCols();
    for(long i = 0; i < rows; ++i) {
        for (long j = 0; j < cols; ++j) {
            int item = this->_matrix->get(i, j);
            if(item) ++count;
        }
    }
    return count;
}

int MatrixStatistics::maxValue() const {
    int max = std::numeric_limits<int>::min();
    long rows = this->_matrix->getRows();
    long cols = this->_matrix->getCols();
    for(long i = 0; i < rows; ++i) {
        for (long j = 0; j < cols; ++j) {
            int item = this->_matrix->get(i, j);
            max = item > max ? item : max;
        }
    }
    return max;
}

double MatrixStatistics::average() const {
    return static_cast<double>(this->sum()) / (this->_matrix->getRows() * this->_matrix->getCols());
}
