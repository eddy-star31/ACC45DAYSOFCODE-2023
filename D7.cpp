#include <iostream>

bool isSpamAccount(int x, int y) {
    if (x > 10 * y) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int x, y;
    std::cout << "Enter the following count (X): ";
    std::cin >> x;
    std::cout << "Enter the follower count (Y): ";
    std::cin >> y;

    if (isSpamAccount(x, y)) {
        std::cout << "This is a spam account." << std::endl;
    } else {
        std::cout << "This is not a spam account." << std::endl;
    }

    return 0;
}
