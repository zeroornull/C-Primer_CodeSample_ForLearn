//
// Created by xxp on 2021/12/12.
//
// getinfo.cpp -- input and output

#include <iostream>

int main() {
    using namespace std;
    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    //
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;

}
