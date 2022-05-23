//
// Created by xxp on 2022/5/21.
//
#include <iostream>

int main() {
    using namespace std;
    cout << "Enter numbers: ";
    int sum = 0;
    int input;
    while (cin >> input) {
        sum += input;
    }
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    return 0;
}