//
// 3．这个练习与编程练习2相同，但异常类是从一个这样的基类派生
//而来的：它是从logic_error派生而来的，并存储两个参数值。异常类应
//该有一个这样的方法：报告这些值以及函数名。程序使用一个catch块来
//捕获基类异常，其中任何一种从该基类异常派生而来的异常都将导致循
//环结束。
//
// Created by xxp on 2022/5/15.
//
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "exception.h"
// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try {                  // start of try block
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }// end of try block
        catch (hmean_error & he)    // start of catch block
        {
            he.mesg();
            cout << "Try again.\n";
            continue;
        }
        catch (gmean_error & ge)
        {
            ge.mesg();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
        catch (arg_error & ae)
        {
            ae.mesg();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }
    cout << "Bye!\n";
    // cin.get();
    // cin.get();
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw hmean_error(a, b, "hmean()");
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw gmean_error(a, b, "gmean()");
    return std::sqrt(a * b);
}