//
// Created by xxp on 2022/3/27.
//

#include "sales.h"

namespace SALES {
    void setSales(Sales &s, const double ar[], int n) {
        for (int i = 0; i < QUARTERS; ++i) {
            if (i < n) {
                s.sales[i] = ar[i];
            } else {
                s.sales[i] = 0.0;
            }
        }
        double sum = 0.0;
        double max = s.sales[0], min = s.sales[0];
        for (int i = 0; i < n; ++i) {
            double cur = s.sales[i];
            if (cur > max) {
                max = cur;
            }
            if (cur < min) {
                min = cur;
            }
            sum += cur;
        }
        s.average = sum / (float) n;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales &s) {
        using std::cin;
        using std::cout;
        using std::endl;

        cout << "Enter sales: " << endl;
        for (int i = 0; i < QUARTERS; ++i) {
            cout << "sales[" << i << "]: ";
            cin >> s.sales[i];
        }

        double sum = 0.0;
        double max = s.sales[0], min = s.sales[0];
        for (int i = 0; i < QUARTERS; ++i) {
            double cur = s.sales[i];
            if (cur > max) {
                max = cur;
            }
            if (cur < min) {
                min = cur;
            }
            sum += cur;
        }
        s.average = sum / (float) QUARTERS;
        s.max = max;
        s.min = min;

    }

    void showSales(const Sales &s) {
        using std::cout;
        using std::endl;

        // show sales
        cout << "sales: ";
        for (int i = 0; i < QUARTERS; ++i)
            cout << s.sales[i] << " ";
        cout << endl;

        // show average
        cout << "average: " << s.average << endl;

        // show max and min
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
    }

}