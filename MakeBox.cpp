#include <iostream>
#include <vector>

std::vector<std::string> makeBox(int n) {
	std::vector<std::string> v = {};
    std::string s1 = "";
    for (int i = 0; i < n; i++) {
        s1 += '#';
    }
    v.push_back(s1);

    std::string s2 = "#";
    for (int i = 1; i < n - 1; i++) {
        s2 += ' ';
    }
    s2 += '#';
    for (int j = 1; j < n - 1; j++) {
        v.push_back(s2);
    }
    v.push_back(s1);
    return v;
}