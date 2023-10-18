#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        if (N * X == Y) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
