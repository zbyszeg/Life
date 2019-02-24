//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_OPTIONONE_H
#define ZAD_OPTIONONE_H


#include "Effect.h"

class Option_1 : public Effect {
public:
    Option_1(int, int, int, int, Board *);

    virtual ~Option_1();

    void apply() override;
};


#endif //ZAD_OPTIONONE_H
