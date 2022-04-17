//
// Created by xxp on 2022/4/17.
//

#ifndef FIRSTPROJECT_STRNGBAD_H
#define FIRSTPROJECT_STRNGBAD_H

#include <iostream>

class StringBad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad(const char *s);

    StringBad();

    ~StringBad();

    //
    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};


#endif //FIRSTPROJECT_STRNGBAD_H
