//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_OPTION_5_H
#define ZAD_OPTION_5_H


#include "Effect.h"

class Option_5 : public Effect {
private:
    int B_temp[BOARD_SIZE][BOARD_SIZE];
public:
    Option_5(int, int, int, int, Board *, Board *);

    virtual ~Option_5();

    void apply() override;
};


#endif //ZAD_OPTION_5_H
