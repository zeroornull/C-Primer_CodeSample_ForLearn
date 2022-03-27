//
// Created by xxp on 2022/3/27.
//

#ifndef FIRSTPROJECT_GOLF_H
#define FIRSTPROJECT_GOLF_H

#include <iostream>

const int Len = 40;
struct golf {
    char fullname[Len];
    int handicap;
};

void setgolf(golf &g, const char *name, int hc);

int setgolf(golf &g);

void handicap(golf &g, int hc);

void showgolf(const golf &g);


#endif //FIRSTPROJECT_GOLF_H
