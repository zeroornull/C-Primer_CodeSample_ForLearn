//
// Created by xxp on 2022/5/2.
//
#include "stcktp1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int Num = 10;

int main() {
    std::srand(std::time(0));
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin >> stacksize;
    //
    Stack<const char *> st(stacksize);
    //
    const char *in[Num] = {
            "1:Hank Gilgamesh",
            "2:Hank Gilgamesh",
            "3:Hank Gilgamesh",
            "4:Hank Gilgamesh",
            "5:Hank Gilgamesh",
            "6:Hank Gilgamesh",
            "7:Hank Gilgamesh",
            "8:Hank Gilgamesh",
            "9:Hank Gilgamesh",
            "10:Hank Gilgamesh"
    };
    //
    const char *out[Num];

    int processed = 0;
    int nextin = 0;
    while (processed < Num) {
        if (st.isempty()) {
            st.push(in[nextin++]);
        } else if (st.isfull()) {
            st.pop(out[processed++]);
        } else if (std::rand() % 2 && nextin < Num) {
            st.push(in[nextin++]);
        } else {
            st.pop(out[processed++]);
        }
    }
    for (int i = 0; i < Num; ++i) {
        std::cout << out[i] << std::endl;
    }
    std::cout << "Bye\n";
    return 0;
}