#include <stdio.h>

int main() {
    double A, B, val1, val2;

    // Input the offers from the first and second investors
    printf("Enter the offer from the first investor (A dollars): ");
    scanf("%lf", &A);
    printf("Enter the offer from the second investor (B dollars): ");
    scanf("%lf", &B);

    // Calculate the valuations for both investors
    val1 = A / 10;  // Valuation of the first investor
    val2 = B / 20;  // Valuation of the second investor

    // Compare the valuations and determine the result
    if (val1 > val2) {
        printf("Devendra should accept the offer from the first investor.\n");
    } else if (val2 > val1) {
        printf("Devendra should accept the offer from the second investor.\n");
    } else {
        printf("Both offers are equally good.\n");
    }

    return 0;
}
