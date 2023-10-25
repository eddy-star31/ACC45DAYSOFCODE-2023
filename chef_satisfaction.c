#include <stdio.h>

int main() {
    int L, R, M;
    printf("Enter the time taken for a page (L): ");
    scanf("%d", &L);
    printf("Enter the time taken for a line of code (R): ");
    scanf("%d", &R);
    printf("Enter the total time available (M): ");
    scanf("%d", &M);

    // Calculate the number of pages written with Chef's left hand
    int pages_written = M / L;

    // Calculate the number of lines of code written with Chef's right hand
    int lines_written = M / R;

    // Calculate Chef's satisfaction
    int satisfaction = pages_written + lines_written;

    printf("Chef's satisfaction after %d minutes: %d\n", M, satisfaction);

    return 0;
}
