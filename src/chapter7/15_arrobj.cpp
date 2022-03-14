//
// Created by xxp on 2022/3/14.
//

#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons> *pa) {
    using namespace std;
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expense: ";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da) {
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

int main() {
    std::array<double, Seasons> expenses{};
    fill(&expenses);
    show(expenses);
    return 0;
}