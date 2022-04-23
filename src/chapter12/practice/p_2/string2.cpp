//
// Created by xxp on 2022/4/22.
//

#include <cstring>
#include "string2.h"
#include <cctype>

using std::cout;
using std::cin;

//
int String::num_strings = 0;

// static method
int String::HowMany() {
    return num_strings;
}

// class method
String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String(const String &st) {
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String() {
    --num_strings;
    delete[] str;
}

void String::stringlow() {
    for (int i = 0; i < len; ++i) {
        if (std::islower(str[i])) {
            str[i] = std::tolower(str[i]);
        }
    }
}

void String::stringup() {
    for (int i = 0; i < len; ++i) {
        if (std::islower(str[i])) {
            str[i] = std::toupper(str[i]);
        }
    }
}

int String::has(char ch) const {
    int sum, i;
    for (sum = i = 0; i < len; ++i) {
        if (str[i] == ch) {
            sum++;
        }
    }
    return 0;
}

String &String::operator=(const String &st) {
    if (this == &st) {
        return *this;
    }
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String &String::operator=(const char *s) {
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char &String::operator[](int i) {
    return str[i];
}

const char &String::operator[](int i) const {
    return str[i];
}

bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st) {
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) {
        st = temp;
    }
    while (is && is.get() != '\n') {
        continue;
    }
    return is;
}

String String::operator+(const String &s) const {
    int len = std::strlen(str) + std::strlen(s.str);
    char *str_num = new char[len + 1];
    std::strcpy(str_num, str);
    std::strcpy(str_num, s.str);
    String str_new = str_num;
    delete[] str_num;
}

String String::operator+(const char *s) const {
    String temp = s;
    String sum = *this + temp;
    return sum;
}

String operator+(const char *st1, const String &st2) {
    return st1 + st2;
}
