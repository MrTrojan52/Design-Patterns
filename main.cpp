#include <iostream>

#include "MatrixNormal.h"
#include "MatrixSparse.h"
#include "MatrixInitiator.h"
int main() {
    MatrixNormal m(2,2);
    MatrixSparse ms(2,2);
    MatrixInitiator::fillMatrix(&ms, 3, 50);
    return 0;
}