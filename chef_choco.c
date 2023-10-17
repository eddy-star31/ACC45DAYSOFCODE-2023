#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int C, X, Y; // Number of chocolates to gift, chocolates Chef has, cost of 1 chocolate
        scanf("%d %d %d", &C, &X, &Y);
        
        if (C <= X) {
            // Chef already has enough chocolates to gift
            printf("0\n");
        } else {
            // Calculate the minimum money Chef needs to spend
            long long cost = (long long)C * Y; // Convert to long long to handle large numbers
            
            printf("%lld\n", cost);
        }
    }
    
    return 0;
}
