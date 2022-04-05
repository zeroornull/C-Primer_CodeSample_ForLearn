//
// Created by xxp on 2022/4/3.
//

#ifndef FIRSTPROJECT_MYTIME3_H
#define FIRSTPROJECT_MYTIME3_H

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time operator+(const Time &t) const;

    Time operator-(const Time &t) const;

    Time operator*(double mult) const;

    friend Time operator*(double m, const Time &t) {
        return t * m;
    };

    friend std::ostream &operator<<(std::ostream & os, const Time &t);

};


#endif //FIRSTPROJECT_MYTIME3_H
