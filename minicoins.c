#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int fives = X / 5;
    int tens = 0;

    if (X % 5 != 0) {
        while (fives >= 0) {
            int remaining = X - (fives * 5);
            if (remaining % 10 == 0) {
                tens = remaining / 10;
                break;
            }
            fives--;
        }
    }

    if (fives < 0) {
        printf("-1\n");
    } else {
        int totalCoins = fives + tens;
        printf("%d\n", totalCoins);
    }

    return 0;
}
