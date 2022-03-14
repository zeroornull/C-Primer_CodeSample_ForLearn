//
// Created by xxp on 2022/1/15.
//

#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    double weight;
    int calories;
};

int main() {
    using namespace std;

    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "The name of the CandyBar: " << snack.name << "\n";
    cout << "The weight of the CandyBar: " << snack.weight << "\n";
    cout << "The calories of the CandyBar: " << snack.calories << "\n";

}