//
// Created by xxp on 2022/4/2.
//

#include "list.h"
#include <iostream>

void addage(Item &item);

int main() {
    List l;
    Item i = {"xxp", 25};
    l.additem(i);
    int n;
    n = l.itemcount();
    std::cout << n << " items in list" << std::endl;
    l.visit(addage);
    return 0;
}

void addage(Item &item) {
    item.age += 1;
}
