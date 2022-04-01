//
// Created by xxp on 2022/3/27.
//

#ifndef FIRSTPROJECT_10_STACK_H
#define FIRSTPROJECT_10_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {
        Max = 10
    };
    Item items[Max];
    int top;
public:
    Stack();

    bool isempty() const;

    bool isfull() const;

    bool push(const Item &item);

    bool pop(Item &item);
};

#endif //FIRSTPROJECT_10_STACK_H
