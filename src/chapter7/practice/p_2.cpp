//
// Created by xxp on 2022/3/19.
//

#include <iostream>

int input(double data[], int max_num) {
    using namespace std;
    int i = 0;
    cout << "Enter up o 10 golf score (-1 to quit): " << endl;
    while (cin >> data[i]) {
        if (data[i] == -1) {
            --i;
            break;
        }
        ++i;
        if (i == max_num) {
            break;
        }
    }
    return (i < max_num) ? i + 1 : max_num;

}

double calculate_average(const double data[], int n) {
    double sum = 0;
    for (size_t i(0); i < n; i++) {
        sum += data[i];
    }
    return sum / n;
}

void output(const double data[],int n){
    using namespace std;
    cout << "The score are: " << endl;
    for (size_t i(0); i < n; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main(){
    double glf_score[10];
    int n = input(glf_score,10);
    double avg_score = calculate_average(glf_score,n);
    output(glf_score,n);
    std::cout << "The average is: " << avg_score << std::endl;
    return 0;

}