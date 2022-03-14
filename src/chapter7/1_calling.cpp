//
// Created by xxp on 2022/3/9.
//

#include <iostream>

void simple() {
    using namespace std;
    cout << "I'm but a simple function.\n";
}

int main() {
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() is finished with the simple() function.\n";

    return 0;
}