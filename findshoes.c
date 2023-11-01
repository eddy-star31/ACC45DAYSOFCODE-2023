#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Calculate the minimum number of extra shoes needed
    int min_extra_shoes = (N * 2) - M;

    if (min_extra_shoes < 0) {
        min_extra_shoes = 0; // Chef already has enough shoes
    }

    printf("%d\n", min_extra_shoes);

    return 0;
}
