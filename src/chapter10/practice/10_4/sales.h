//
// Created by xxp on 2022/4/1.
//

#ifndef FIRSTPROJECT_SALES_H
#define FIRSTPROJECT_SALES_H

namespace SALES {
    class Sales {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales(const double ar[], int n);

        Sales();

        void setSales();

        void showSales();
    };
}


#endif //FIRSTPROJECT_SALES_H
