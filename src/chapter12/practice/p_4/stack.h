//
// Created by xxp on 2022/4/23.
//

#ifndef FIRSTPROJECT_STACK_H
#define FIRSTPROJECT_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {
        MAX = 10
    };
    Item *items;
    int size;
    int top;
public:
    Stack(int n = MAX);

    Stack(const Stack &st);

    ~Stack();

    bool isempty() const;

    bool isfull() const;

    //
    bool push(const Item &item);

    //
    bool pop(Item &item);

    Stack &operator=(const Stack &st);
};


#endif //FIRSTPROJECT_STACK_H
