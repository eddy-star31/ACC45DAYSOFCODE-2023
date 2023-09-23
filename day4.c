#include <iostream>

int main() {
    int totalChocolates = 100; // Total chocolates in the store
    int dailyGoal; // Chef's daily goal
    int chocolatesSold; // Number of chocolates sold

    // Input Chef's daily goal and chocolates sold
    std::cout << "Enter Chef's daily goal: ";
    std::cin >> dailyGoal;
    std::cout << "Enter the number of chocolates sold: ";
    std::cin >> chocolatesSold;

    int totalAmount = 0; // Total amount Chef made

    if (chocolatesSold <= dailyGoal) {
        // Chef sold chocolates up to his daily goal
        totalAmount = chocolatesSold;
    } else {
        // Chef exceeded his daily goal
        totalAmount = dailyGoal + (chocolatesSold - dailyGoal) * 2;
    }

    std::cout << "Total amount Chef made: " << totalAmount << " rupees" << std::endl;

    return 0;
}
