//
// Created by zbyszek on 26.11.18.
//

#include <iostream>
#include "Option_5.h"

Option_5::Option_5(int x, int y, int dx, int dy, Board *A, Board *B) {
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
    this->A = A;
    this->B = B;

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++)
            B_temp[i][j] = B->getCell(i, j);
    }
}

Option_5::~Option_5() = default;

void Option_5::apply() {
    for (int i = x; i <= dx; i++) {
        for (int j = y; j <= dy; j++) {
            B->setCell(i, j, A->getCell(i, j) ^ B_temp[i][j]);
        }
    }
}

