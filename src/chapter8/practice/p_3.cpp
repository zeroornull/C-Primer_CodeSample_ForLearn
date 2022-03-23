//
// Created by xxp on 2022/3/22.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void to_upper(string &);

int main() {
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while (str != "q") {
        to_upper(str);
        cout << str << endl;

        cout << "Next string(q to quit):";
        getline(cin, str);
    }
    cout << "Bye" << endl;
    return 0;
}

void to_upper(string &str) {
    for (char &i: str) {
        if (isalpha(i))
            i = toupper(i);
    }
}