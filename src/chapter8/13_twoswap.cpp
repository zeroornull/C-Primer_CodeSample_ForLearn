//
// Created by xxp on 2022/3/21.
//

#include <iostream>

template<typename T>
void Swap(T *a, T *b, int n) {
    T temp;
    for (int i = 0; i < n; ++i) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

struct job {
    char name[40];
    double salary;
    int floor;
};

template<>
void Swap<job>(job &j1, job &j2) {
    double t1;
    int t2;
    t1 = j1.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j) {
    using namespace std;
    cout << j.name << ":$" << j.salary << " on floor" << j.floor << endl;
}

int main(){
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed,ios::floatfield);
    int i = 10,j=20;
    cout << "i,j="<<i<<", "<<j<<".\n";
    
}

