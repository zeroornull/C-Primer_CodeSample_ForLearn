//
// Created by xxp on 2022/5/7.
//

#include "person.h"
#include <iostream>

void Person::Data() const {
    std::cout << firstname << std::endl;
    std::cout << lastname << std::endl;
}

void Person::Show() const {
    Data();
}

Person::~Person() {

}

void Person::Set() {

    std::cout << "Enter firstname: ";
    std::cin >> firstname;
    std::cout << "Enter lastname: ";
    std::cin >> lastname;
}