//
// Created by xxp on 2022/3/24.
//

#include <iostream>

extern double warming;

void update(double dt);

void local();

using std::cout;

void update(double dt) {
    extern double warming;
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degree.\n";

}

void local() {
    double warming = 0.8;
    cout << "Local warming = " << warming << " degree.\n";
    cout << "But global warming = " << ::warming;
    cout << " degree.\n";
}