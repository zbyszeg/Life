//
// Created by zbyszek on 26.11.18.
//

#include "Option_2.h"
#include <iostream>

Option_2::Option_2(int x, int y, int dx, int dy, Board *A) {
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
    this->A = A;
}

Option_2::~Option_2() = default;

void Option_2::apply() {
    for (int i = x; i <= dx; i++) {
        for (int j = y; j <= dy; j++) {
            A->getCell(i, j) == 0 ? A->setCell(i, j, 1) : A->setCell(i, j, 0);
        }
    }
}

