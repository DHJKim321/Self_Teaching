#include <iostream>
#include <vector>
#include <algorithm>

char firstRepeat(std::string chars) {
    std::vector<char> v = {};
    for (int i = 0; i < chars.length(); i++) {
        if (std::find(v.begin(), v.end(), chars.at(i)) != v.end()) {
            return chars.at(i);
        }
        v.push_back(chars.at(i));
    }
    return '0';
}