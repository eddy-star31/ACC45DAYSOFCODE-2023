#include <stdio.h>

int main() {
    int totalNeighbors = 20;
    int x; // Total number of plates
    int y; // Plates each neighbor takes

    printf("Enter the total number of plates (X): ");
    scanf("%d", &x);

    printf("Enter the number of plates each neighbor takes (Y): ");
    scanf("%d", &y);

    int maxNeighborsFed = x / y;

    if (maxNeighborsFed > totalNeighbors) {
        maxNeighborsFed = totalNeighbors;
    }

    printf("Chef can feed a maximum of %d neighbors completely.\n", maxNeighborsFed);

    return 0;
}
