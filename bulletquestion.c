#include <stdio.h>

int main() {
    double X, Y, Z;

    // Input the values of X, Y, and Z
    printf("Enter Mario's bullet speed (X pixels per frame): ");
    scanf("%lf", &X);
    printf("Enter the distance to the goomba (Y pixels): ");
    scanf("%lf", &Y);
    printf("Enter the minimum time (Z seconds from now): ");
    scanf("%lf", &Z);

    // Calculate the minimum time required to hit the goomba
    double timeToHit = Y / X;

    // Calculate the time Mario should shoot the bullet
    double timeToShoot = timeToHit - Z;

    // Ensure the result is non-negative
    if (timeToShoot < 0) {
        printf("Mario should have already shot the bullet!\n");
    } else {
        printf("Mario should shoot the bullet in %.2lf seconds from now.\n", timeToShoot);
    }

    return 0;
}
