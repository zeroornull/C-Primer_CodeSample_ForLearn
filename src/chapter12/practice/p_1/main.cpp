//
// Created by xxp on 2022/4/22.
//
#include <iostream>
#include "cow.h"

int main() {
    Cow c1;
    Cow c2 = Cow("shao", "coding", 120);
    c2.show();

    Cow c3 = c2;
    c3.show();

    c1 = c3;
    c1.show();

    return 0;
}