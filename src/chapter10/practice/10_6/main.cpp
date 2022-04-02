//
// Created by xxp on 2022/4/2.
//

#include "move.h"

int main() {
    Move m1;
    m1.showmove();
    m1.reset(2, 3);
    m1.showmove();
    Move m2 = Move(3, 1);
    m2.showmove();
    Move m3;
    m3 = m2.add(m1);
    m3.showmove();
    return 0;
}