//
// Created by xxp on 2022/5/6.
//

#ifndef FIRSTPROJECT_WORKER_H
#define FIRSTPROJECT_WORKER_H

#include <string>

class Worker {
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L) {}

    Worker(const std::string &s, long n) : fullname(s), id(n) {}

    virtual ~Worker() {}

    virtual void Set();

    virtual void Show() const;
};


#endif //FIRSTPROJECT_WORKER_H
