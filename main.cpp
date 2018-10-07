#include <iostream>
#include "VectorNormal.h"
#include "VectorSparse.h"
int main() {
    VectorSparse v;
    v.set(1, 5);
    std::cout << v.get(1);
    return 0;
}