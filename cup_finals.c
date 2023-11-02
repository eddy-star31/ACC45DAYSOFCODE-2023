#include <stdio.h>

int main() {
    int X, Y, D;
    
    // Input the skills of the teams and the skill difference threshold
    printf("Enter the skill of Team X: ");
    scanf("%d", &X);
    printf("Enter the skill of Team Y: ");
    scanf("%d", &Y);
    printf("Enter the skill difference threshold D: ");
    scanf("%d", &D);
    
    // Check if Chef finds the match interesting
    if (abs(X - Y) <= D) {
        printf("Chef finds the match interesting!\n");
    } else {
        printf("Chef does not find the match interesting.\n");
    }
    
    return 0;
}
