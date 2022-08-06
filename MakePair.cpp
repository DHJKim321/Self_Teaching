#include <iostream>
#include <vector>

std::vector<int> pairs(std::pair <int,int> p) {
	std::vector<int> v = {p.first, p.second};
    return v;
}