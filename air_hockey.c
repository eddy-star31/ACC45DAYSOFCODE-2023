#include <stdio.h>

int main() {
    int A, B;
    printf("Enter Alice's score (A): ");
    scanf("%d", &A);
    printf("Enter Bob's score (B): ");
    scanf("%d", &B);

    int points_needed_to_win = 7;
    int points_needed_by_Alice = points_needed_to_win - A;
    int points_needed_by_Bob = points_needed_to_win - B;

    int min_points_to_end = points_needed_by_Alice < points_needed_by_Bob
                              ? points_needed_by_Alice
                              : points_needed_by_Bob;

    printf("Minimum number of points needed to end the match: %d\n", min_points_to_end);

    return 0;
}
