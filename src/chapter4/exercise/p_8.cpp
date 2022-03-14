//
// Created by xxp on 2022/1/15.
//

#include <iostream>
#include <string>

struct Pizza {
    std::string company;
    double diameter;
    double weight;
};

int main() {
    using namespace std;

    Pizza *pizza = new Pizza;

    cout << "Enter the diameter of pizza: ";
    cin >> pizza->diameter;

    cout << "Enter the weight of pizza: ";
    cin >> pizza->weight;

    cin.get();

    cout << "Enter the pizza company: ";
    getline(cin, pizza->company);

    cout << "\nHere is the pizza information: \n"
         << "Company: " << pizza->company << "\n"
         << "Diameter: " << pizza->diameter << "\n"
         << "Weight: " << pizza->weight << endl;

    delete pizza;

    return 0;
}