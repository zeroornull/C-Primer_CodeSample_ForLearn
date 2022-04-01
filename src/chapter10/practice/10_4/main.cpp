//
// Created by xxp on 2022/4/2.
//

#include "sales.h"

int main() {
    using SALES::Sales;

    double vals[3] = {10, 20, 30};
    Sales s = Sales(vals, 3);
    s.showSales();

    Sales t;
    t.setSales();
    t.showSales();

    return 0;
}