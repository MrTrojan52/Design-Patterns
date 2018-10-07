//
// Created by trojan52 on 06.10.18.
//

#include "VectorSparse.h"


unsigned long VectorSparse::getSize() {
    return this->_size;
}

int VectorSparse::get(int pos) {
    if(this->data.find(pos) != this->data.end())
        return this->data.at(pos);
    else
        return 0;
}

void VectorSparse::set(int pos, int val) {
    this->data[pos] = val;
}