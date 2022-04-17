//
// Created by xxp on 2022/4/16.
//

#ifndef FIRSTPROJECT_STONEWT_H
#define FIRSTPROJECT_STONEWT_H

#include <iostream>

class Stonewt {
public:
    enum Mode {
        STN, PDS
    };
private:
    enum {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
    Mode status;
public:
    Stonewt(double lbs, Mode s = STN);

    Stonewt(int stn, double lbs, Mode s = STN);

    Stonewt();

    ~Stonewt();

    //
    Stonewt operator+(const Stonewt &st) const;

    Stonewt operator-(const Stonewt &st) const;

    Stonewt operator*(double p) const;

    void set_stn() { status = STN; }

    void set_pds() { status = PDS; }

    //
    friend Stonewt operator*(double p, const Stonewt &st) {
        return st * p;
    }

    friend std::ostream &operator<<(std::ostream &os, const Stonewt &st);
};

#endif //FIRSTPROJECT_STONEWT_H
