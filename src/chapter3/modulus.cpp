//
// Created by xxp on 2021/12/13.
//

#include <iostream>

int main() {
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weights in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";
    return 0;
}