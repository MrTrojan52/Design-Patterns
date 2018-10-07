//
// Created by trojan52 on 06.10.18.
//

#include "AMatrix.h"


unsigned long AMatrix::getRows() {
    return this->data.size();
}


unsigned long AMatrix::getCols() {
    return this->data[0]->getSize();
}

int AMatrix::get(int row, int col) {
    return this->data[row]->get(col);
}

void AMatrix::set(int row, int col, int val) {
    this->data[row]->set(col, val);
}

