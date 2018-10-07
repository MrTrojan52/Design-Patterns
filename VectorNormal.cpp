//
// Created by trojan52 on 06.10.18.
//

#include "VectorNormal.h"


unsigned long VectorNormal::getSize() {
    return this->data.size();
}

int VectorNormal::get(int pos) {
    return this->data.at(pos);
}

void VectorNormal::set(int pos, int val) {
    this->data.at(pos) = val;
}