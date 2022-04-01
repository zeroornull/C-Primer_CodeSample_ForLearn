//
// Created by xxp on 2022/3/29.
//

#ifndef FIRSTPROJECT_GOLF_H
#define FIRSTPROJECT_GOLF_H


class Golf {
private:
    static const int LEN = 40;
    char fullname[LEN];
    int handicap;
public:
    Golf();

    Golf(const char *name, int hc);

    const Golf &setgolf(const Golf &g);

    void showgolf() const;
};


#endif //FIRSTPROJECT_GOLF_H
