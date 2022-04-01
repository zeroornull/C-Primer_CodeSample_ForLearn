//
// Created by xxp on 2022/3/29.
//

#include "golf.h"
#include <cstring>
#include <iostream>

Golf::Golf() {
    strcpy(fullname, "Noname");
    handicap = 0;
}

Golf::Golf(const char *name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

const Golf &Golf::setgolf(const Golf &g) {
    strcpy(fullname, g.fullname);
    handicap = g.handicap;
    return *this;
}

void Golf::showgolf() const {
    std::cout << "fullname: " << fullname << std::endl;
    std::cout << "handicap: " << handicap << std::endl;

}

