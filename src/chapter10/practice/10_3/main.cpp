//
// Created by xxp on 2022/4/1.
//

#include "golf.h"

int main() {
    Golf g1 = Golf("xxp", 5);
    g1.showgolf();
    Golf g2;
    g2.showgolf();
    g2.setgolf(g1);
    g2.showgolf();

    return 0;
}