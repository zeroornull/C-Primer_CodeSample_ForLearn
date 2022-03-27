//
// Created by xxp on 2022/3/27.
//

#ifndef FIRSTPROJECT_SALES_H
#define FIRSTPROJECT_SALES_H

#include <iostream>

namespace SALES {
    const int QUARTERS = 4;
    struct Sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);

    void setSales(Sales &s);

    void showSales(const Sales &s);
}

#endif //FIRSTPROJECT_SALES_H
