//
// Created by zbyszek on 11/30/18.
//

#include "Board.h"
#include <iostream>

Board::Board() = default;

Board::~Board() = default;

void Board::display() const {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++)
            std::cout << tab[i][j];
        std::cout << std::endl;
    }
}

int Board::getCell(int i, int j) const {
    return tab[i][j];
}

void Board::setCell(int i, int j, int v) {
    tab[i][j] = v;
}