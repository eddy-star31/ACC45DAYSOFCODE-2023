#include <stdio.h>

int main() {
    int N, X, D;

    // Input the number of buns (N), buns needed per day (X), and days they can survive without food (D)
    printf("Enter the number of buns (N): ");
    scanf("%d", &N);
    printf("Enter the buns needed per day (X): ");
    scanf("%d", &X);
    printf("Enter the days they can survive without food (D): ");
    scanf("%d", &D);

    int totalDaysSurvived = 0;

    while (N >= X && D > 0) {
        totalDaysSurvived++;
        N -= X;
        D--;
    }

    printf("Alice and her family can survive for %d days.\n", totalDaysSurvived);

    return 0;
}
