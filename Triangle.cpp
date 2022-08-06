#include <iostream>
#include <vector>

int triangle(int n) {
    std::vector<int> v = {};
    v.push_back(1);
    for (int i = 1; i < n; i++) {
        v.push_back(v.at(i - 1) + (i + 1));
    }
    return v.back();
}