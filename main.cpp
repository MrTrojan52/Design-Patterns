#include <iostream>

#include "MatrixNormal.h"
#include "MatrixSparse.h"
#include "MatrixInitiator.h"
#include "MatrixStatistics.h"
int main() {
    MatrixNormal m(2,2);
    MatrixSparse ms(2,2);
    MatrixInitiator::fillMatrix(&ms, 3, 50);
    MatrixInitiator::fillMatrix(&m, 4, 50);
    MatrixStatistics mss(&m);
    return 0;
}