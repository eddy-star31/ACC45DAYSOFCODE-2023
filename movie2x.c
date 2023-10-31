#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    // Calculate time Chef spends watching at double speed
    int double_speed_time = Y / 2;

    // Calculate time Chef spends watching at regular speed
    int regular_speed_time = X - double_speed_time;

    // Calculate total time Chef spends watching the movie
    int total_time = double_speed_time + regular_speed_time;

    printf("%d\n", total_time);

    return 0;
}
