//
// Created by xxp on 2022/3/28.
//

#ifndef FIRSTPROJECT_PERSON_H
#define FIRSTPROJECT_PERSON_H

#include <string>
#include <cstring>

class Person {
private:
    static const int LIMIT = 25;
    std::string lname_;
    char fname_[LIMIT];
public:
    Person() {
        lname_ = "";
        fname_[0] = '\0';
    }

    Person(const std::string &lname, const char *fname = "Heyyou");

    void show() const;

    void formal_show() const;
};


#endif //FIRSTPROJECT_PERSON_H
