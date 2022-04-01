//
// Created by xxp on 2022/3/28.
//

#include "10_stack.h"

Stack::Stack() {
    top = 0;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == Max;
}

bool Stack::push(const Item &item) {
    if (top < Max) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

bool Stack::pop(Item &item) {
    if (top > 0) {
        items[--top];
        return true;
    } else {
        return false;
    }
}
