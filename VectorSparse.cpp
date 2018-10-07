//
// Created by trojan52 on 06.10.18.
//

#include "VectorSparse.h"


unsigned long VectorSparse::getSize() {
    return this->data.size();
}

int VectorSparse::get(int pos) {
    return this->data[pos];
}

void VectorSparse::set(int pos, int val) {
    this->data[pos] = val;
}