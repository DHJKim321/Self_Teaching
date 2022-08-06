#include <iostream>

std::string maskify(std::string str) {
    if (str.length() >= 4) {
        for (int i = 0; i < str.length() - 4; i++) {
            str.at(i) = '#';
        }
    }
    return str;
}