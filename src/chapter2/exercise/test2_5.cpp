//
// Created by xxp on 2021/12/12.
//

#include <iostream>


double celsiu2Fahrenit(double celsius) {
    return 1.8 * celsius + 32.0;
}

int main() {
    using namespace std;
    double celsius;
    cout << "Please enter a celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is "
         << celsiu2Fahrenit(celsius) << " degrees Fahrenheit." << endl;

    return 0;
}

