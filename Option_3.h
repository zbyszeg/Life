//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_OPTION_3_H
#define ZAD_OPTION_3_H


#include "Effect.h"

class Option_3 : public Effect {
public:
    Option_3(int, int, int, int, Board *);

    virtual ~Option_3();

    void apply() override;
};


#endif //ZAD_OPTION_3_H
