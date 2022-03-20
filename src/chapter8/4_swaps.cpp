//
// Created by xxp on 2022/3/20.
//

#include <iostream>

void swapr(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;

    swapr(wallet1,wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;

    swapp(&wallet1,&wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;

    swapv(wallet1,wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;
}