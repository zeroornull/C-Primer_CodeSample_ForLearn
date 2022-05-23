//
// Created by xxp on 2022/5/20.
//
#include <iostream>

int main() {
    using namespace std;
    cout << "Enter an integer: ";
    int n;
    cin >> n;

    cout << "n    n*n\n";
    cout << n << "    " << n * n << " (decimal)\n";
    //
    cout << hex;
    cout << n << "    ";
    cout << n * n << "    " << n * n << " (octal)\n";

    //
    dec(cout);
    cout << n << "    " << n * n << " (decimal)\n";

    return 0;
}