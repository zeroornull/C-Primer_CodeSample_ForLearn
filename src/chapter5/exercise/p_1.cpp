//
// Created by xxp on 2022/2/11.
//

#include <iostream>

int main() {
    using namespace std;
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    if (number1 > number2) {
        int temp;
        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    int s = 0;
    for (int num = number1; num < number2 + 1; ++num) {
        s += num;
    }

    cout << "Sum the number from " << number1 << " to " << number2
         << ", sum = " << s << endl;

    return 0;
}