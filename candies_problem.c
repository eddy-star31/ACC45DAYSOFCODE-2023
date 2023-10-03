#include <stdio.h>

int main() {
    int N, M;

    // Input the number of candies and friends
    printf("Enter the number of candies: ");
    scanf("%d", &N);
    printf("Enter the number of friends: ");
    scanf("%d", &M);

    // Check if it is possible to distribute candies as required
    if (N % (2 * M) == 0) {
        printf("Yes, it is possible to distribute candies as required.\n");
    } else {
        printf("No, it is not possible to distribute candies as required.\n");
    }

    return 0;
}
