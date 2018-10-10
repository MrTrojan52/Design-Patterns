//
// Created by trojan52 on 10.10.18.
//

#include "MatrixStatistics.h"
#include <limits>
MatrixStatistics::MatrixStatistics(AMatrix *const matrix):_sum(0), _notZeroCount(0), _maxValue(std::numeric_limits<int>::min()), _average(0.0) {
    long rows = matrix->getRows();
    long cols = matrix->getCols();
    for(long i = 0; i < rows; ++i) {
        for (long j = 0; j < cols; ++j) {
            int item = matrix->get(i, j);
            this->_sum += item;
            this->_maxValue = item > this->_maxValue ? item : this->_maxValue;
            if (item) this->_notZeroCount++;
        }
    }
    this->_average = static_cast<double>(this->_sum) / (rows * cols);
}

long MatrixStatistics::sum() const {
    return _sum;
}


long MatrixStatistics::notZeroCount() const {
    return _notZeroCount;
}

int MatrixStatistics::maxValue() const {
    return _maxValue;
}

double MatrixStatistics::average() const {
    return _average;
}
