//
// Created by xxp on 2022/4/27.
//

#ifndef FIRSTPROJECT_PORT_H
#define FIRSTPROJECT_PORT_H

#include <iostream>

class Port {
private:
    char *brand;
    char style[20];
    int bottles;

public:
    Port(const char *br = "none", const char *st = "none", int b = 0);

    Port(const Port &p);

    virtual ~Port() { delete[] brand; }

    int BottleCount() const { return bottles; }

    // overloaded functions
    Port &operator=(const Port &p);

    Port &operator+=(int b);

    Port &operator-=(int b);

    virtual void Show() const;

    // friend functions
    friend std::ostream &operator<<(std::ostream &os, const Port &p);
};

#endif //FIRSTPROJECT_PORT_H

class VintagePort : public Port {
private:
    char *nickname;
    int year;

public:
    VintagePort(const char *br = "none", int b = 0, const char *nn = "none", int y = 0);

    VintagePort(const VintagePort &vp);

    ~VintagePort() { delete[] nickname; }

    VintagePort &operator=(const VintagePort &vp);

    virtual void Show() const;

    // friend funcitions
    friend std::ostream &operator<<(std::ostream &os, const VintagePort &vp);
};