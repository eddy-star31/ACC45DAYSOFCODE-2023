#include <stdio.h>

int canMeasureWeight(int W, int X, int Y, int Z) {
    if (W == X || W == Y || W == Z) {
        return 1;  // We can measure the weight using one of the weights.
    } else if (W < X || W < Y || W < Z) {
        return 0;  // We can't measure the weight with any of the weights.
    } else {
        // Try all possible combinations of weights to measure the target weight.
        if (canMeasureWeight(W - X, X, Y, Z) || canMeasureWeight(W - Y, X, Y, Z) || canMeasureWeight(W - Z, X, Y, Z)) {
            return 1;  // We can measure the weight using a combination of weights.
        } else {
            return 0;  // We can't measure the weight with any combination of weights.
        }
    }
}

int main() {
    int W, X, Y, Z;
    
    printf("Enter the weight of the object: ");
    scanf("%d", &W);
    
    printf("Enter the weights of X, Y, and Z: ");
    scanf("%d %d %d", &X, &Y, &Z);

    if (canMeasureWeight(W, X, Y, Z)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
