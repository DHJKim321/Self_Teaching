#include <iostream>


double calcHeight(int seconds, double meters) {
    constexpr double gravity = 9.8;
    double distance = gravity * (seconds * seconds) / 2.0;
    return distance;
}

int main() {
    double meters = {};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> meters;
    
    std::cout << "At 0 seconds, the ball is at height: " << 100.0 - calcHeight(0, meters) << '\n';
    std::cout << "At 1 seconds, the ball is at height: " << 100.0 - calcHeight(1, meters) << '\n';
    std::cout << "At 2 seconds, the ball is at height: " << 100.0 - calcHeight(2, meters) << '\n';
    std::cout << "At 3 seconds, the ball is at height: " << 100.0 - calcHeight(3, meters) << '\n';
    std::cout << "At 4 seconds, the ball is at height: " << 100.0 - calcHeight(4, meters) << '\n';
    
    return 0;
}