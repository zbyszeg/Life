//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_OPTION_6_H
#define ZAD_OPTION_6_H


#include "Effect.h"

class Option_6 : public Effect {
public:
    Option_6(int, int, int, int, Board *, Board *);

    virtual ~Option_6();

    void apply() override;
};


#endif //ZAD_OPTION_6_H
