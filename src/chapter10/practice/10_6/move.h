//
// Created by xxp on 2022/4/2.
//

#ifndef FIRSTPROJECT_MOVE_H
#define FIRSTPROJECT_MOVE_H


class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);

    void showmove() const;

    Move add(const Move &m) const;

    void reset(double a = 0, double b = 0);
};


#endif //FIRSTPROJECT_MOVE_H
