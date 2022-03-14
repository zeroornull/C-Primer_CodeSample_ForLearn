//
// Created by xxp on 2022/2/11.
//

#include <iostream>
#include <array>

const int ar_size = 100;

int main() {
    using namespace std;

    array<long double, ar_size> factorials;

    factorials[0] = factorials[1] = 1;
    for (int i = 2; i < ar_size + 1; ++i) {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < ar_size + 1; ++i) {
        cout << i << "! = " << factorials[i] << "\n";
    }
    cout << endl;
    return 0;
}