//
// Created by xxp on 2022/1/17.
//

#include <iostream>

int main() {
    using std::cout;
    using std::endl;
    using std::cin;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0;
}