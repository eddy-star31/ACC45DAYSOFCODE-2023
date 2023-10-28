#include <stdio.h>

int main() {
    int N; // Number of spooky days left until Halloween
    int days_to_menu = 0; // Initialize the number of days to the menu to 0

    // Get input from the user
    printf("Enter the number of spooky days left until Halloween: ");
    scanf("%d", &N);

    // Calculate the number of days to the menu
    // Dracula starts on Monday (1) and Tuesday (2) is his favorite menu day
    // The menu repeats every 7 days, so we use modulo 7 to find the next Tuesday
    days_to_menu = 7 - ((N % 7 + 1) % 7);

    // Output the result
    printf("Dracula can indulge in his favorite menu %d times before Halloween.\n", (N - days_to_menu) / 7 + 1);

    return 0;
}
