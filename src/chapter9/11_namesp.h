//
// Created by xxp on 2022/3/26.
//

#ifndef FIRSTPROJECT_11_NAMESP_H
#define FIRSTPROJECT_11_NAMESP_H

#include <string>

namespace pers {
    struct Person {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);

    void showPerson(const Person &);
}

namespace debts{
    using namespace pers;
    struct Debt{
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n );
}




#endif //FIRSTPROJECT_11_NAMESP_H
