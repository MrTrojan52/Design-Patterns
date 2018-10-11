#include <iostream>

#include "MatrixNormal.h"
#include "MatrixSparse.h"
#include "MatrixInitiator.h"
#include "MatrixStatistics.h"
int main() {
    MatrixNormal m(2,3);
    MatrixSparse ms(3,1);
    MatrixInitiator::fillMatrix(&ms, 2, 50);
    MatrixInitiator::fillMatrix(&m, 5, 50);
    MatrixStatistics mss(&ms);
    return 0;
}