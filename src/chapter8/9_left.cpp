//
// Created by xxp on 2022/3/21.
//

#include <iostream>

const int ArSize = 80;

char *left(const char *str, int n = 1) {
    if (n < 0) {
        n = 0;
    }
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; ++i) {
        p[i] = str[i];
    }
    while (i <= n) {
        p[i++] = '\0';
    }
    return p;
}

int main() {
    using namespace std;
    char sample[ArSize];
    cout << "Enter a string: \n";
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete[] ps;
    ps = left(sample);
    cout << ps << endl;
    delete[] ps;
    return 0;
}