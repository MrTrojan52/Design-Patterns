//
// Created by trojan52 on 06.10.18.
//

#ifndef LAB1_2_VECTORSPARSE_H
#define LAB1_2_VECTORSPARSE_H

#include "IVector.h"
#include <unordered_map>

class VectorSparse: public IVector {
public:
    unsigned long getSize() override;
    int get(int pos) override;
    void set(int pos, int val) override;
private:
    std::unordered_map<int, int> data;
};


#endif //LAB1_2_VECTORSPARSE_H
