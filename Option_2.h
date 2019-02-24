//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_OPTION_2_H
#define ZAD_OPTION_2_H


#include "Effect.h"

class Option_2 : public Effect {
public:
    Option_2(int, int, int, int, Board *);

    virtual ~Option_2();

    void apply() override;
};


#endif //ZAD_OPTION_2_H
