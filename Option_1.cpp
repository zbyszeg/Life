//
// Created by zbyszek on 26.11.18.
//

#include "Option_1.h"
#include <iostream>

Option_1::Option_1(int x, int y, int dx, int dy, Board *A) {
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
    this->A = A;
}

Option_1::~Option_1() = default;

void Option_1::apply() {
    for (int i = x; i <= dx; i++) {
        for (int j = y; j <= dy; j++) {
            A->setCell(i, j, 1);
        }
    }
}


