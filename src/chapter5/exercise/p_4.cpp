//
// Created by xxp on 2022/2/13.
//

//4．Daphne以10%的单利投资了100美元。也就是说，每一年的利润
//都是投资额的10%，即每年10美元：
//利息 = 0.10×原始存款
//而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款
//（包括获得的利息）的5%，：
//利息 = 0.05×当前存款
//Cleo在第一年投资100美元的盈利是5%—得到了105美元。下一年
//的盈利是105美元的5%—即5.25美元，依此类推。请编写一个程序，计
//算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时
//两个人的投资价值。

#include <iostream>

int main() {
    using namespace std;

    double daphne_account = 100;
    double cleo_account = 100;

    int year = 0;
    while (cleo_account <= daphne_account) {
        ++year;

        daphne_account += 10;
        cleo_account += cleo_account * 0.05;
    }

    cout << "After " << year << "Years. "
         << "Cleo's account is " << cleo_account
         << " while more than the one of Daphne which is "
         << daphne_account << "." << endl;

    return 0;

}