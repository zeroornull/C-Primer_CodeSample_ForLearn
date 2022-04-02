//
// Created by xxp on 2022/4/2.
//

#ifndef FIRSTPROJECT_PLORG_H
#define FIRSTPROJECT_PLORG_H


class Plorg {
private:
    static const int LEN = 20;
    char name[LEN];
    int ci;
public:
    Plorg();

    void reset(const int &c);

    void show() const;
};


#endif //FIRSTPROJECT_PLORG_H
