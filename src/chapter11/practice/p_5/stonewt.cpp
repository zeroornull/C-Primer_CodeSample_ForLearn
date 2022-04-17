//
// Created by xxp on 2022/4/16.
//

#include "stonewt.h"
#include <iostream>

Stonewt::Stonewt(double lbs, Mode s) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    status = s;
}

Stonewt::Stonewt(int stn, double lbs, Mode s) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    status = s;
}

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
    status = STN;
}

Stonewt::~Stonewt() {

}

Stonewt Stonewt::operator+(const Stonewt &st) const {
    double pds_num = pounds + st.pounds;
    Stonewt sum = Stonewt(pds_num);
    return sum;
}

Stonewt Stonewt::operator-(const Stonewt &st) const {
    double pds_diff = pounds - st.pounds;
    Stonewt diff = Stonewt(pds_diff);
    return diff;
}

Stonewt Stonewt::operator*(double p) const {
    double multi = pounds * p;
    return Stonewt(multi);
}

// friend functions
std::ostream &operator<<(std::ostream &os, const Stonewt &st) {
    if (st.status == Stonewt::STN)
        std::cout << st.stone << " stone, " << st.pds_left << "pounds";
    else if (st.status == Stonewt::PDS)
        std::cout << st.pounds << " pounds";
    else
        std::cout << "Incorrect status";
}