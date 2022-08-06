#include <iostream>
#include <vector>

int getAbsSum(std::vector<int> arr) {
    int sum = {};
	for (int i = 0; i < arr.size(); i++) {
        if (arr.at(i) < 0) {
            sum += arr.at(i) * -1;
        }
        else {
            sum += arr.at(i);
        }
    }
    return sum;
}