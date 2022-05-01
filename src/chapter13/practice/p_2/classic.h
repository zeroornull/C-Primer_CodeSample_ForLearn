//
// Created by xxp on 2022/4/27.
//

#ifndef FIRSTPROJECT_CLASSIC_H
#define FIRSTPROJECT_CLASSIC_H


class Cd {
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(const char *s1, const char *s2, int n, double x);

    Cd(const Cd &d);

    Cd();

    virtual ~Cd();

    virtual void Report() const;

    //
    Cd &operator=(const Cd &d);
};

//
class Classic : public Cd {
private:
    char *works;
public:
    Classic(const char *w, const char *s1, const char *s2, int n, double x);

    Classic(const Classic &c);

    Classic();

    virtual ~Classic();

    virtual void Report() const;

    //
    Classic &operator=(const Classic &c);
};


#endif //FIRSTPROJECT_CLASSIC_H
