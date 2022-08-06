#include <iostream>

int cars(int wheels, int bodies, int figures) {
    int count = {};
	while (wheels >= 4 && bodies >= 1 && figures >= 2) {
        wheels -= 4;
        bodies--;
        figures -= 2;
        count++;
    }
    return count;
}