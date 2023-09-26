#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    long long max_months = Y / X;

    if (Y % X != 0) {
        max_months--; // If there's a remainder, reduce max_months by 1 to ensure renting is strictly cheaper.
    }

    cout << max_months << endl;

    return 0;
}
