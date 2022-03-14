//
// Created by xxp on 2022/3/6.
//

#include <iostream>

const int Max = 5;

int main() {
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (int j = 0; j < Max; ++j) {
        cout << "round #" << j + 1 << ": ";
        while (!(cin >> golf[j])) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Please enter a number: ";

        }
    }
    double total = 0;
    for (int j = 0; j < Max; ++j) {
        total += golf[j];
    }
    cout << total / Max << " = average score " << Max << " rounds\n";
    return 0;
}