//
// Created by xxp on 2022/4/23.
//

#ifndef FIRSTPROJECT_STOCK20_H
#define FIRSTPROJECT_STOCK20_H


class Stock {
private:
    char *company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() {
        total_val = shares * share_val;
    }

public:
    Stock();

    Stock(const char *co, long n = 0, double pr = 0.0);

    ~Stock();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show() const;

    const Stock &topval(const Stock &s) const;
};


#endif //FIRSTPROJECT_STOCK20_H
