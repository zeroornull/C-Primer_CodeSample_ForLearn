//
// Created by xxp on 2022/4/17.
//

#ifndef FIRSTPROJECT_COMPLEX_H
#define FIRSTPROJECT_COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double img;
public:
    Complex(double r, double i);

    Complex();

    ~Complex();

    //
    Complex operator+(const Complex &c) const;

    Complex operator-(const Complex &c) const;

    Complex operator*(const Complex &c) const;

    Complex operator*(double n) const;

    Complex operator~() const;

    //
    friend Complex operator*(double n, const Complex &c);

    friend std::istream &operator>>(std::istream &is, Complex &c);

    friend std::ostream &operator<<(std::ostream &os, const Complex &c);
};


#endif //FIRSTPROJECT_COMPLEX_H
