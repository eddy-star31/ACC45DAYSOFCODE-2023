#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the initial location of the policeman (X): ");
    scanf("%d", &X);
    printf("Enter the initial location of the thief (Y): ");
    scanf("%d", &Y);

    int time = 0; // Initialize time to 0

    // Keep looping until the policeman catches the thief
    while (X > Y) {
        X -= 2; // The policeman moves 2 units per second
        Y -= 1; // The thief moves 1 unit per second
        time++;  // Increment time by 1 second
    }

    printf("The policeman catches the thief in %d seconds.\n", time);

    return 0;
}
