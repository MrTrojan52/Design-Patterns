//
// Created by trojan52 on 06.10.18.
//

#ifndef LAB1_2_IMATRIX_H
#define LAB1_2_IMATRIX_H
class IMatrix {
public:
    virtual unsigned long getRows() = 0;
    virtual unsigned long getCols() = 0;
    virtual int get(int, int) = 0;
    virtual void set(int, int, int) = 0;
};
#endif //LAB1_2_IMATRIX_H
