//
// Created by zbyszek on 26.11.18.
//

#include <iostream>
#include "Option_4.h"

Option_4::Option_4(int x, int y, int dx, int dy, Board *A) {
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
    this->A = A;
}

Option_4::~Option_4() = default;

void Option_4::apply() {
    int temp[BOARD_SIZE][BOARD_SIZE];
    for (int w = 0; w < BOARD_SIZE; w++) {
        for (int z = 0; z < BOARD_SIZE; z++)
            temp[w][z] = A->getCell(w, z);
    }
    for (int i = x; i <= dx; i++) {
        for (int j = y; j <= dy; j++) {
            if (temp[i][j] == 0) {
                int sum = 0;
                for (int k = i - 1; k <= i + 1; k++) {
                    int tempK = k;
                    if (k == -1) k = 15;
                    if (k == 16) k = 0;
                    for (int l = j - 1; l <= j + 1; l++) {
                        int tempL = l;
                        if (l == -1) l = 15;
                        if (l == 16) l = 0;
                        sum += temp[k][l];
                        l = tempL;
                    }
                    k = tempK;
                }
                if (sum == 3)
                    A->setCell(i, j, 1);
                else
                    A->setCell(i, j, 0);
            } else
                A->setCell(i, j, 0);
        }
    }
}
