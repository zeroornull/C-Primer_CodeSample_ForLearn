//
// Created by xxp on 2021/12/12.
//

#include <iostream>

using namespace std;

void displayTime(double hours, double minutes) {
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main() {
    double hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    displayTime(hours, minutes);
    return 0;
}
