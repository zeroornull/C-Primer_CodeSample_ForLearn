//
// Created by xxp on 2021/12/12.
//

#include <iostream>

double lightYearsToAstronomicalUnit(double lightYear) {
    return lightYear * 63240;
}

int main() {
    using namespace std;
    double lightYear;
    cout << "Enter the number of light year: ";
    cin >> lightYear;
    cout << lightYear << " light year = " << lightYearsToAstronomicalUnit(lightYear) << " AstronomicalUnit" << endl;

    return 0;
}