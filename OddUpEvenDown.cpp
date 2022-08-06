#include <iostream>
#include <vector>

std::vector<int> evenOddTransform(std::vector<int> arr, int n) {
	 for (int i = 0; i < arr.size(); i++) {
        if (arr.at(i) % 2 == 0) {
            arr.at(i) += 2 * n;
        }
        else {
            arr.at(i) -= 2 * n;
        }
     }
     return arr;
}