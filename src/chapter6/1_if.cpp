//
// Created by xxp on 2022/2/14.
//

#include <iostream>

int main() {
    using namespace std;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.') {
        if (ch == ' ') {
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }
    cout << spaces << " space, " << total;
    cout << " characters total in sentence\n";
    return 0;
}