//
// Created by xxp on 2022/1/15.
//

#include <iostream>
#include <string>

int main() {
    using namespace std;

    string name;
    string dessert;

    cout << "Enter your name: \n";
    getline(cin, name);

    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);

    cout << "I have delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}