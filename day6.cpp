#include <iostream>

int main() {
    int N;
    std::cout << "Enter the number of friends: ";
    std::cin >> N;

    // Calculate the minimum number of cars required
    int cars_needed = (N + 3) / 4; // Equivalent to ceil(N / 4)

    std::cout << "Minimum number of cars required: " << cars_needed << std::endl;

    return 0;
}
