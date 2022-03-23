//
// Created by xxp on 2022/3/22.
//

#include <iostream>

void silly(const char *, int n = 0);

int main() {
    using namespace std;
    char str[10] = "xxx";
    // call 1
    cout << "call 1" << endl;
    silly(str);
    // call 2
    cout << "call 2" << endl;
    silly(str);
    // call 3
    cout << "call 3" << endl;
    silly(str, 1);

}

void silly(const char *str, int n) {
    using namespace std;
    static int times = 1;
    if (n) {
        for (int i = 0; i <= times; ++i) {
            cout << str << endl;
        }
    } else {
        cout << str << endl;
    }
    times++;
}