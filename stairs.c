#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int minMoves(int X, int Y) {
    int *dp = (int *)malloc((X + 1) * sizeof(int));

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= X; i++) {
        dp[i] = dp[i - 1] + 1; // Chef takes one step from the previous stair
        if (i >= Y) {
            dp[i] = min(dp[i], dp[i - Y] + 1); // Chef takes Y steps from the previous stair
        }
    }

    int result = dp[X];
    free(dp);

    return result;
}

int main() {
    int X, Y;
    printf("Enter the stair number X: ");
    scanf("%d", &X);
    printf("Enter the number of steps Chef can climb Y: ");
    scanf("%d", &Y);

    int moves = minMoves(X, Y);
    printf("Minimum number of moves required: %d\n", moves);

    return 0;
}
