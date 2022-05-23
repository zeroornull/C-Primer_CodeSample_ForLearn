//
// Created by xxp on 2022/5/20.
//
#include <iostream>

int main() {
    using std::cout;
    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;
    cout << "\"Furry Friend\" is $" << price1 << "!\n";
    cout << "\"Fiery Fiend\" is $" << price2 << "!\n";

    cout.precision(2);
    cout << "\"Furry Friend\" is $" << price1 << "!\n";
    cout << "\"Fiery Fiend\" is $" << price2 << "!\n";

    return 0;
}