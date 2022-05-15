//
// 2．修改程序清单15.11，使两种异常类型都是从头文件<stdexcept>
//提供的logic_error类派生出来的类。让每个what( )方法都报告函数名和
//问题的性质。异常对象不用存储错误的参数值，而只需支持what( )方
//法。
//
// Created by xxp on 2022/5/15.
//
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "exception.h"

// function prototypes
double hmean(double a, double b);

double gmean(double a, double b);

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y) {
        try {                  // start of try block
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }// end of try block
        catch (HmeanExcp &he)    // start of catch block
        {
            cout << he.what();
            cout << "Try again.\n";
            continue;
        }
        catch (GmeanExcp &ge) {
            cout << ge.what();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
    }
    cout << "Bye!\n";
    // cin.get();
    // cin.get();
    return 0;
}

double hmean(double a, double b) {
    if (a == -b)
        throw HmeanExcp();
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw GmeanExcp();
    return std::sqrt(a * b);
}