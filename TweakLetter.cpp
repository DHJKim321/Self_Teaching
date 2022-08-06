#include <iostream>
#include <vector>

std::string tweakLetters(std::string s, std::vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
        s.at(i) += arr.at(i);
    }
    return s;
}