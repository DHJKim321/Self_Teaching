#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortNumsAscending(std::vector<int> arr) {
	if (arr.empty()) {
        return {};
    }
    std::sort(arr.begin(), arr.end());
    return arr;
}