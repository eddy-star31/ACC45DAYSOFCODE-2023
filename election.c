#include <stdio.h>

int main() {
    int N, X;

    // Input the number of people in Chefland (N) and the minimum voting age (X)
    printf("Enter the number of people in Chefland: ");
    scanf("%d", &N);
    printf("Enter the minimum voting age: ");
    scanf("%d", &X);

    int eligibleVoters = 0;

    // Input the ages of N people and check eligibility
    for (int i = 0; i < N; i++) {
        int age;
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &age);

        if (age >= X) {
            eligibleVoters++;
        }
    }

    // Output the number of eligible voters
    printf("Number of eligible voters: %d\n", eligibleVoters);

    return 0;
}
