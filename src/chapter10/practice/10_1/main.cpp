//
// Created by xxp on 2022/3/28.
//

#include "account.h"

int main() {
    Account a = Account("xxp", "19961107", 0);

    a.show();
    a.store(100);
    a.show();
    a.draw(10);
    a.show();

    return 0;
}