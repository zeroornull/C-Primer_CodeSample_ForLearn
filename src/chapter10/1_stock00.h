//
// Created by xxp on 2022/3/27.
//

#ifndef FIRSTPROJECT_1_STOCK00_H
#define FIRSTPROJECT_1_STOCK00_H

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() {
        total_val = shares * share_val;
    }

public:
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

#endif //FIRSTPROJECT_1_STOCK00_H
