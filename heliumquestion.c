#include <stdio.h>

int main() {
    // Constants
    long long X; // Total grams of Helium-3 on the moon
    long long A; // Power required per year
    long long B; // Number of years required
    long long Y; // Power generated per gram of Helium-3

    // Input values
    printf("Enter the total grams of Helium-3 on the moon (X): ");
    scanf("%lld", &X);
    printf("Enter the power required per year (A): ");
    scanf("%lld", &A);
    printf("Enter the number of years required (B): ");
    scanf("%lld", &B);
    printf("Enter the power generated per gram of Helium-3 (Y): ");
    scanf("%lld", &Y);

    // Calculate the total power that can be generated
    long long total_power = X * Y;

    // Check if the project can generate enough power
    if (total_power >= A * B) {
        printf("The project can generate enough power to meet the funding requirements.\n");
    } else {
        printf("The project cannot generate enough power to meet the funding requirements.\n");
    }

    return 0;
}
