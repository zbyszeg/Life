//
// Created by zbyszek on 26.11.18.
//

#ifndef ZAD_OPTION_4_H
#define ZAD_OPTION_4_H


#include "Effect.h"

class Option_4 : public Effect {
public:
    Option_4(int, int, int, int, Board *);

    virtual ~Option_4();

    void apply() override;
};


#endif //ZAD_OPTION_4_H
