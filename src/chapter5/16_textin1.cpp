//
// Created by xxp on 2022/1/17.
//

#include <iostream>

int main() {
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to to quit:\n";
    cin >> ch;
    while (ch != '#') {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << " characters read\n";
    return 0;
}