#include <iostream>
#include <cmath>

int quadraticEquation(int a, int b, int c) {
	int x = ((-1 * b) + sqrt(b*b - 4*a*c)) / (2 * a);
    return x;
}