#include <stdio.h>

int main() {
    int S, X, Y, Z;

    // Input the total storage S, storage occupied by app X, storage occupied by app Y, and storage required for app Z.
    printf("Enter the total storage (S): ");
    scanf("%d", &S);
    printf("Enter the storage occupied by app X: ");
    scanf("%d", &X);
    printf("Enter the storage occupied by app Y: ");
    scanf("%d", &Y);
    printf("Enter the storage required for app Z: ");
    scanf("%d", &Z);

    // Calculate the remaining storage after installing app Z.
    int remainingStorage = S - Z;

    // Calculate the total storage occupied by the two existing apps.
    int totalStorageOccupied = X + Y;

    // Check if Chef needs to delete some apps to install app Z.
    if (remainingStorage < totalStorageOccupied) {
        int appsToDelete = (totalStorageOccupied - remainingStorage + Z - 1) / Z;
        printf("Chef needs to delete %d app(s) to install app Z.\n", appsToDelete);
    } else {
        printf("Chef has enough storage to install app Z without deleting any apps.\n");
    }

    return 0;
}
