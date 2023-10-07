#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int diff = abs(X - Y); // Calculate the absolute difference

    printf("%d\n", diff);

    return 0;
}
