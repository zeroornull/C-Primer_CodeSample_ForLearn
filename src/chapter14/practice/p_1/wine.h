//
// Created by xxp on 2022/5/5.
//

#ifndef FIRSTPROJECT_WINE_H
#define FIRSTPROJECT_WINE_H

#include <iostream>
#include <valarray>
#include <string>
#include "pair.h"

class Wine {
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string label;
    PairArray data;
    int years;
public:
    Wine();

    Wine(const char *l, int y, const int yr[], const int bot[]);

    Wine(const char *l, int y);

    Wine(const Wine &w);

    void GetBottles();

    const std::string &Label() const {
        return label;
    }

    int sum() const;

    void Show() const;
};


#endif //FIRSTPROJECT_WINE_H
