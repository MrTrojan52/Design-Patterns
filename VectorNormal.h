//
// Created by trojan52 on 06.10.18.
//

#ifndef LAB1_2_VECTORNORMAL_H
#define LAB1_2_VECTORNORMAL_H

#include "IVector.h"
#include <vector>

class VectorNormal: public IVector {
public:
    VectorNormal(int size) { this->data.resize(size); }
    unsigned long getSize() override;
    int get(int pos) override;
    void set(int pos, int val) override;
private:
    std::vector<int> data;
};


#endif //LAB1_2_VECTORNORMAL_H
