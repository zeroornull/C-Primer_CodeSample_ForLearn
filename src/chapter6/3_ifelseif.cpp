//
// Created by xxp on 2022/2/14.
//

#include <iostream>

const int Fave = 27;

int main() {
    using namespace std;
    int n;
    cout << "Enter a number in the range of 1-100 to find ";
    cout << "my favorite number: ";
    do {
        cin >> n;
        if (n < Fave) {
            cout << "Too low -- guess again: ";

        } else if (n > Fave) {
            cout << "Too High -- guess again: ";
        } else {
            cout << Fave << " is right!\n";
        }
    } while (n != Fave);
    return 0;
}