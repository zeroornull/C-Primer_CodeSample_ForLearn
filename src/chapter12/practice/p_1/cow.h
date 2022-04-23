//
// Created by xxp on 2022/4/22.
//

#ifndef FIRSTPROJECT_COW_H
#define FIRSTPROJECT_COW_H


class Cow {
private:
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();

    Cow(const char *nm, const char *ho, double wt);

    Cow(const Cow &c);

    ~Cow() {
        delete[] hobby;
    }

    Cow &operator=(const Cow &c);

    void show() const;
};


#endif //FIRSTPROJECT_COW_H
