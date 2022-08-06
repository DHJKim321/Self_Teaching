#include <iostream>

bool isSafeBridge(std::string s) {
	for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '#') {
            return false;
        }
    }
    return true;
}