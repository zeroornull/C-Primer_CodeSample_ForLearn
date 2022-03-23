//
// Created by xxp on 2022/3/23.
//

#include <iostream>
#include <cstring>

using namespace std;
struct stringy {
    char *str;
    int ct;
};

void set(stringy &, char *);

void show(const stringy &, int n = 1);

void show(const char *, int n = 1);

int main() {
    stringy beany{};
    char testing[] = "Reality isn't what it used to be";

    set(beany, testing);
    show(beany);
    show(beany, 3);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 2);
    show("Done!");
    return 0;
}

void set(stringy &beany, char *str) {
    int len = strlen(str);
    beany.str = new char[len + 1];
    strcpy(beany.str, str);

    beany.ct = len;
}

void show(const stringy &beany, int n) {
    while (n-- > 0) {
        cout << beany.str << endl;
    }
}

void show(const char *str, int n) {
    while (n-- > 0) {
        cout << str << endl;
    }
}
