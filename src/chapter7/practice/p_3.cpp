//
// Created by xxp on 2022/3/19.
//

#include <iostream>

typedef struct {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
} Box;

void output(Box box) {
    std::cout << "Box maker: " << box.maker << std::endl;
    std::cout << "Box height: " << box.height << std::endl;
    std::cout << "Box width: " << box.width << std::endl;
    std::cout << "Box length: " << box.length << std::endl;
    std::cout << "Box volume: " << box.volume << std::endl;
}

void calculate_volume(Box *p_box) {
    p_box->volume = p_box->height * p_box->width * p_box->length;
}

int main() {
    using namespace std;
    Box box = {"Jay", 0.49, 2.94, 0.49, 0.0};

    output(box);
    calculate_volume(&box);
    cout << "\n--\n";
    output(box);

    return 0;

}