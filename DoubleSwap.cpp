#include <iostream>

std::string doubleSwap(std::string s, char c1, char c2) {
	for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == c1) {
            s.at(i) = c2;
        }
        else if (s.at(i) == c2) {
            s.at(i) = c1;
        }
    }
    return s;
}