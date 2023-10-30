#include <stdio.h>

int main() {
    int N, M;
    
    // Input the costs
    printf("Enter the cost of online food order (N): ");
    scanf("%d", &N);
    printf("Enter the cost of eating at the restaurant (M): ");
    scanf("%d", &M);
    
    // Apply the 10% discount to the online order cost
    int discountedOnlineCost = N - (0.10 * N);
    
    // Compare the costs and determine the cheaper option
    if (discountedOnlineCost < M) {
        printf("Chef should order food online. Cost: %d rupees\n", discountedOnlineCost);
    } else if (M < discountedOnlineCost) {
        printf("Chef should eat at the restaurant. Cost: %d rupees\n", M);
    } else {
        printf("Chef can choose either option as they have the same cost: %d rupees\n", M);
    }
    
    return 0;
}
