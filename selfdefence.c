#include <stdio.h>

int main() {
    int N; // Number of women in the village
    printf("Enter the number of women in the village: ");
    scanf("%d", &N);

    int count = 0; // Initialize a counter for eligible women

    // Iterate through each woman's age and check eligibility
    for (int i = 0; i < N; i++) {
        int age;
        printf("Enter the age of woman %d: ", i + 1);
        scanf("%d", &age);

        // Check if the age is between 10 and 60 (inclusive)
        if (age >= 10 && age <= 60) {
            count++;
        }
    }

    printf("Number of eligible women for the special training: %d\n", count);

    return 0;
}
