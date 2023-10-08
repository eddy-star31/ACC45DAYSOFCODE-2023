#include <stdio.h>

int main() {
    double currentBalance, depositAmount, bankCharges;
    int months;

    // Input current balance, deposit amount, bank charges, and the number of months
    printf("Enter current account balance (in rupees): ");
    scanf("%lf", &currentBalance);

    printf("Enter monthly deposit amount (in rupees): ");
    scanf("%lf", &depositAmount);

    printf("Enter monthly bank charges (in rupees): ");
    scanf("%lf", &bankCharges);

    printf("Enter the number of months: ");
    scanf("%d", &months);

    // Calculate the final account balance after Z months
    for (int i = 0; i < months; i++) {
        currentBalance += depositAmount; // Deposit money
        currentBalance -= bankCharges;   // Deduct bank charges
    }

    // Print the final account balance
    printf("Final account balance after %d months: %.2lf rupees\n", months, currentBalance);

    return 0;
}
