#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            sum += i; // Add even number to the sum
        }
    }

    // Display the sum of even numbers
    printf("The sum of even numbers from 1 to %d is %d\n", n, sum);

    return 0;
}
