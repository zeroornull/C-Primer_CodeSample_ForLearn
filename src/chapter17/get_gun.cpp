//
// Created by xxp on 2022/5/21.
//
#include <iostream>

const int Limit = 255;

int main() {
    using namespace std;
    char input[Limit];

    cout << "Enter a  string for getline() processing:\n";
    cin.getline(input, Limit, '#');
    cout << "Here is your input:\n";
    cout << input << "\nDone with phase 1\n";

    char ch;
    cin.get(ch);
    cout << "The next input character is " << ch << endl;

    if (ch != '\n') {
        cin.ignore(Limit, '\n');
    }
    cout << "Enter a string for get() processing:\n";
    cin.get(input, Limit, '#');
    cout << "Here is your input:\n";
    cout << input << "\nDone with phase 1\n";
    cin.get(ch);
    cout << "The next input character is " << ch << endl;

    return 0;
}