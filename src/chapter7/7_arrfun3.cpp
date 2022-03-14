//
// Created by xxp on 2022/3/13.
//

#include <iostream>

const int Max = 5;

int fill_array(double ar[], int limit) {
    using namespace std;
    double temp;
    int i;
    for (int j = 0; j < limit; ++j) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input; input process terminated.\n";
            break;
        } else if (temp < 0) {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n) {
    using namespace std;
    for (int i = 0; i < n; ++i) {
        cout << "Property # " << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n) {
    for (int i = 0; i < n; ++i) {
        ar[i] *= r;
    }
}

int main() {
    using namespace std;
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0) {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}