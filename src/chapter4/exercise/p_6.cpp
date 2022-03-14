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

    CandyBar candyBar[3] = {
            {"Mocha Munch", 2.3, 350},
            {"Big Rabbit",  5,   300},
            {"Joy Boy",     4.1, 430}
    };

    cout << "The name of the CandyBar: " << candyBar[0].name << "\n"
         << "The weight of the candy: " << candyBar[0].weight << "\n"
         << "The calories information: " << candyBar[0].calories << "\n\n";

    cout << "The name of the CandyBar: " << candyBar[1].name << "\n"
         << "The weight of the candy: " << candyBar[1].weight << "\n"
         << "The calories information: " << candyBar[1].calories << "\n\n";

    cout << "The name of the CandyBar: " << candyBar[2].name << "\n"
         << "The weight of the candy: " << candyBar[2].weight << "\n"
         << "The calories information: " << candyBar[2].calories << endl;

    return 0;
}