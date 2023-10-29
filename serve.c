#include <stdio.h>

int main() {
    int P, Q;
    printf("Enter the scores for Alice and Bob (P and Q): ");
    scanf("%d %d", &P, &Q);

    int total_serves = P + Q;
    
    // Determine whose serve it is
    if (total_serves % 4 < 2) {
        printf("It's Alice's serve.\n");
    } else {
        printf("It's Bob's serve.\n");
    }
    
    return 0;
}
