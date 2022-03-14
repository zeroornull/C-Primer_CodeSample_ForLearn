//
// Created by xxp on 2022/1/17.
//

#include <iostream>
#include <ctime>

int main() {
    using namespace std;
    cout << "Enter the delay time, int seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay);
    cout << "done \a\n";
    return 0;
}