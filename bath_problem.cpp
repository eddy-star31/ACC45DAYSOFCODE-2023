#include <iostream>
using namespace std;

int main() {
    int X, Y;

    // Input the capacity of the geyser (X liters) and the bucket (Y liters)
    cout << "Enter the capacity of the geyser (X liters): ";
    cin >> X;

    cout << "Enter the capacity of the bucket (Y liters): ";
    cin >> Y;

    // Calculate the maximum number of people who can take a bath
    int maxPeople = (X / (2 * Y));

    cout << "Maximum number of people who can take a bath: " << maxPeople << endl;

    return 0;
}
