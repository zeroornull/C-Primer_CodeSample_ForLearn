//
// Created by xxp on 2022/3/22.
//

#include <iostream>
#include <cstring>

struct CandyBar {
    char brand[30];
    double weight;
    int heat;
};

void set(CandyBar &, const char *brand = "Millennium Munch", double weight = 2.85, int heat = 350);

void show(const CandyBar &);

int main() {
    using namespace std;

    CandyBar cb{};
    char brand[] = "Munch";
    double weight = 4.85;
    int heat = 650;

    set(cb);
    cout << "Original Bar: " << endl;
    show(cb);

    set(cb, brand, weight, heat);

    cout << "New Bar: " << endl;
    show(cb);
    return 0;
}

void set(CandyBar &cb, const char *brand, double weight, int heat) {
    strcpy(cb.brand, brand);
    cb.weight = weight;
    cb.heat = heat;
}

void show(const CandyBar &cb) {
    using namespace std;
    cout << "Brand: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Heat: " << cb.heat << endl;

}
