//
// Created by xxp on 2022/3/8.
//

#include <iostream>

int main() {
    using namespace std;
    cout << "Please enter one of following choice: \n";
    cout << "c) carnivore\tp) pianist.\n"
         << "t) tree\tg) game" << endl;
    bool exit = false;
    char c;
    while (!exit && (cin >> c)) {
        switch (c) {
            case 'c':
                cout << "Tiger is a carnivore." << endl;
                exit = true;
                break;
            case 'p':
                cout << "Mozart is a great pianst." << endl;
                exit = true;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                exit = true;
                break;
            case 'g':
                cout << "Supper Mario is a great game." << endl;
                exit = true;
                break;

            default:
                cout << "Please enter c, p, t, or g: q" << endl;
                break;
        }
    }
    return 0;
}