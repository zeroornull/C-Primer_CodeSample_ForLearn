//
// Created by xxp on 2022/3/27.
//

#include "sales.h"

int main() {
    using namespace SALES;
    Sales s1, s2;

    setSales(s1);
    double ar[3] = {3.0, 4.0, 1.0};
    setSales(s2, ar, 3);

    showSales(s1);
    showSales(s2);

    return 0;
}