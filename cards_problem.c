#include <stdio.h>

int main() {
    int N, X;
    
    // Input the number of cards and the number of face-up cards
    printf("Enter the total number of cards: ");
    scanf("%d", &N);
    printf("Enter the number of face-up cards: ");
    scanf("%d", &X);
    
    // Calculate the minimum number of operations
    int min_operations;
    if (X < N - X) {
        min_operations = X;
    } else {
        min_operations = N - X;
    }
    
    printf("Minimum number of operations required: %d\n", min_operations);
    
    return 0;
}
