//
// Created by xxp on 2022/5/7.
//

#ifndef FIRSTPROJECT_BADDUDE_H
#define FIRSTPROJECT_BADDUDE_H

#include "gunslinger.h"
#include "pokerplayer.h"

class BadDude : public PokerPlayer, public Gunslinger {
protected:
    void Data() const;

public:
    double Gdraw() const {
        return Gunslinger::Draw();
    }

    double Cdraw() const {
        return PokerPlayer::Draw();
    }

    void Show() const;

    void Set();
};


#endif //FIRSTPROJECT_BADDUDE_H
