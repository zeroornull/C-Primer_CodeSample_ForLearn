//
// Created by xxp on 2022/5/20.
//

#ifndef FIRSTPROJECT_QUEUE_H
#define FIRSTPROJECT_QUEUE_H


// This queue will contain Customer items
class Customer
{
private:
    long arrive;        // arrival time for customer
    int processtime;    // processing time for customer
public:
    Customer() : arrive(0), processtime (0){}
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;


#endif //FIRSTPROJECT_QUEUE_H
