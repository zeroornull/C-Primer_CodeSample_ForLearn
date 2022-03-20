//
// Created by xxp on 2022/3/14.
//

#include <iostream>

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int level) {
    if (level == 0) {
        return;
    }
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}

int main() {
    char ruler[Len];
    int i;
    for (int j = 0; j < Len - 2; ++j) {
        ruler[j] = ' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (int j = 1; j <= Divs; ++j) {
        subdivide(ruler, min, max, j);
        std::cout << ruler << std::endl;
        for (int k = 1; k < Len - 2; ++k) {
            ruler[k] = ' ';
        }

    }
}