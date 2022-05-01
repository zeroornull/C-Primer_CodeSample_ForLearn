//
// Created by xxp on 2022/4/25.
//

#ifndef FIRSTPROJECT_CLASSIC_H
#define FIRSTPROJECT_CLASSIC_H


class Cd {
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(const char *s1, const char *s2, int n, double x);

    Cd();

    virtual ~Cd() {};

    virtual void Report() const;
};

//
class Classic : public Cd {
private:
    char works[100];
public:
    Classic(const char *w, const char *s1, const char *s2, int n, double x);

    Classic();

    virtual ~Classic() {};

    virtual void Report() const;
};


#endif //FIRSTPROJECT_CLASSIC_H
