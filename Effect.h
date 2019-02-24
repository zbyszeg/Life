//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_EFFECT_H
#define ZAD_EFFECT_H

#include "Board.h"

class Effect {
protected:
    int x, y, dx, dy;
    Board *A, *B;
public:
    virtual void apply() = 0;
};


#endif //ZAD_EFFECT_H
