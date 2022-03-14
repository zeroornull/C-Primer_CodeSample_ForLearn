//
// Created by xxp on 2022/3/9.
//

#include <iostream>

void cheers(int n) {
    using namespace std;
    for (int i = 0; i < n; ++i) {
        cout << "Cheers! ";
    }
    cout << endl;
}

double cube(double x) {
    return x * x * x;
}

int main() {
    using namespace std;
    cheers(5);
    cout << "Give me a number: ";
    double size;
    cin >> size;
    double volume = cube(size);
    cout << "A " << size << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));
    return 0;
}