//
// Created by xxp on 2022/3/20.
//

#include <iostream>
int main(){
    using namespace std;
    int rats = 10;
    int & rodents = rats;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;
    cout << "rats = " << rats;
    cout << ", bunnies = " << bunnies;
    cout << ", rodents = " << rodents << endl;
    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;

}