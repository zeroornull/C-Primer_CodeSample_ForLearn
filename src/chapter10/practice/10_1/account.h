//
// Created by xxp on 2022/3/28.
//

#ifndef FIRSTPROJECT_ACCOUNT_H
#define FIRSTPROJECT_ACCOUNT_H

#include <string>

class Account {
private:
    std::string name_;
    std::string number_;
    double deposit_;
public:
    Account(std::string name, std::string, double deposit = 0.0);

    Account();

    ~Account();

    void show() const;

    void store(double money);

    void draw(double money);
};

#endif //FIRSTPROJECT_ACCOUNT_H
