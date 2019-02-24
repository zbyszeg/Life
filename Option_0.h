//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_OPTIONZERO_H
#define ZAD_OPTIONZERO_H


#include "Effect.h"

class Option_0 : public Effect {
public:
    Option_0(int, int, int, int, Board *);

    virtual ~Option_0();

    void apply() override;
};


#endif //ZAD_OPTIONZERO_H
