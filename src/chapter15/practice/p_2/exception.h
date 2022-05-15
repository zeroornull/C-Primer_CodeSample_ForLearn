//
// Created by xxp on 2022/5/15.
//

#ifndef FIRSTPROJECT_EXCEPTION_H
#define FIRSTPROJECT_EXCEPTION_H

#include <stdexcept>

class HmeanExcp : public std::logic_error {
public:
    HmeanExcp() : std::logic_error("hmean() invalid arguments: a = -b\n") {

    }
};

class GmeanExcp : public std::logic_error {
public:
    GmeanExcp() : std::logic_error("gmean() arguments should be >= 0\n") {}
};

#endif //FIRSTPROJECT_EXCEPTION_H
