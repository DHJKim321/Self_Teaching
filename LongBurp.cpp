#include <iostream>

std::string longBurp(int num) {
	std::string s = "B";
	for (int i = 0; i < num; i++) {
		s += 'r';
	}
	s += 'p';
	return s;
}


int main() {
    std::cout << longBurp(2);
}