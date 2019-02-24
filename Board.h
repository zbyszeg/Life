//
// Created by zbyszek on 11/30/18.
//

#ifndef ZAD_BOARD_H
#define ZAD_BOARD_H

#define BOARD_SIZE 16

class Board {
    int tab[BOARD_SIZE][BOARD_SIZE];
public:
    Board();

    void display() const;

    int getCell(int, int) const;

    void setCell(int, int, int);

    ~Board();
};


#endif //ZAD_BOARD_H
