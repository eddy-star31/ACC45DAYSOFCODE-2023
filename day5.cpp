#include <iostream>

int main() {
    int batteryLevel;

    // Input the battery level
    std::cout << "Enter the battery level in percentage (0-100): ";
    std::cin >> batteryLevel;

    if (batteryLevel <= 15) {
        std::cout << "Battery Low notification: Yes" << std::endl;
    } else {
        std::cout << "Battery Low notification: No" << std::endl;
    }

    return 0;
}
