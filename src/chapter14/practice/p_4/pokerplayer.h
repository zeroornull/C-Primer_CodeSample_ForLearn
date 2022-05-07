//
// Created by xxp on 2022/5/7.
//

#ifndef FIRSTPROJECT_POKERPLAYER_H
#define FIRSTPROJECT_POKERPLAYER_H


#include "person.h"

class PokerPlayer : virtual public Person {
public:
    PokerPlayer(const char *fn = "none", const char *ln = "none") : Person(fn, ln) {}

    int Draw() const;
};


#endif //FIRSTPROJECT_POKERPLAYER_H
