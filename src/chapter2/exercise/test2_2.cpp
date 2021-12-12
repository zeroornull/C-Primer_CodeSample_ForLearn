//
// Created by xxp on 2021/12/12.
//

#include <iostream>

int main() {
    using namespace std;
    int distance = 0, yard;
    cout << "Please input a distance number in the unit of Long: ";
    cin >> distance;
    yard = distance * 220;

    cout << "The distance transform in yard is: " << yard << endl;
    return 0;
}