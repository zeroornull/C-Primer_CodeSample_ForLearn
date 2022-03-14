//
// Created by xxp on 2022/1/15.
//

#include <iostream>
#include <cstring>

int main() {
    using namespace std;
    char first_name[20], last_name[20];
    char final_name[50];

    cout << "Enter you first name: ";
    cin.getline(first_name, 20);

    cout << "Enter you last name: ";
    cin.getline(last_name, 20);

    strcpy(final_name, last_name);
    strcpy(final_name, ", ");
    strcpy(final_name, first_name);

    cout << "Here's the information in a single string: " << final_name << endl;
    return 0;

}