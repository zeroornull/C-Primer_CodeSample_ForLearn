//
// Created by xxp on 2022/2/11.
//

#include <iostream>

int main() {
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false) {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " character read\n";
    return 0;
}
