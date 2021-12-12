//
// Created by xxp on 2021/12/12.
//

#include <iostream>

int stonetolib(int);

int stonetolib(int strs) {
    return 14 * strs;
}

int main() {
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolib(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

