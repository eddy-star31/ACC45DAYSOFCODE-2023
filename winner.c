#include <stdio.h>

int main() {
    int P_A, P_B, Q_A, Q_B;
    
    // Input time instants
    printf("Enter P's time for problem A: ");
    scanf("%d", &P_A);
    printf("Enter P's time for problem B: ");
    scanf("%d", &P_B);
    printf("Enter Q's time for problem A: ");
    scanf("%d", &Q_A);
    printf("Enter Q's time for problem B: ");
    scanf("%d", &Q_B);
    
    // Calculate time penalties
    int P_penalty = (P_A > P_B) ? P_A : P_B;
    int Q_penalty = (Q_A > Q_B) ? Q_A : Q_B;
    
    // Compare time penalties
    if (P_penalty < Q_penalty) {
        printf("Participant P has the better rank.\n");
    } else if (P_penalty > Q_penalty) {
        printf("Participant Q has the better rank.\n");
    } else {
        printf("It's a tie.\n");
    }
    
    return 0;
}
