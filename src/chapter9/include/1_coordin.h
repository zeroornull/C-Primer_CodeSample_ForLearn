//
// Created by xxp on 2022/3/23.
//

#ifndef FIRSTPROJECT_1_COORDIN_H
#define FIRSTPROJECT_1_COORDIN_H

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

polar rect_to_polar(rect xypos);

void show_polar(polar dapos);

#endif //FIRSTPROJECT_1_COORDIN_H