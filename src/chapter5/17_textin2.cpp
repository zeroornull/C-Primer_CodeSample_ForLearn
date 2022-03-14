//
// Created by xxp on 2022/2/11.
//

#include <iostream>

int main() {
    using namespace std;
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);
    while (ch != '#') {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " character read\n";
    return 0;
}