//
// Created by zbyszek on 26.11.18.
//

#include <iostream>
#include "Option_6.h"

Option_6::Option_6(int x, int y, int dx, int dy, Board *A, Board *B) {
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
    this->A = A;
    this->B = B;
}

Option_6::~Option_6() = default;

void Option_6::apply() {
    for (int i = x; i <= dx; i++) {
        for (int j = y; j <= dy; j++) {
            B->setCell(i, j, A->getCell(i, j));
        }
    }
}
