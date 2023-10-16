#include <stdio.h>

int main() {
    int alice, bob, charlie, subscriptionCost;
    
    // Input the amounts Alice, Bob, Charlie have and the subscription cost
    printf("Enter the amount Alice has: ");
    scanf("%d", &alice);
    printf("Enter the amount Bob has: ");
    scanf("%d", &bob);
    printf("Enter the amount Charlie has: ");
    scanf("%d", &charlie);
    printf("Enter the subscription cost: ");
    scanf("%d", &subscriptionCost);

    // Check if any two of them can contribute enough for the subscription
    if ((alice >= subscriptionCost && bob >= subscriptionCost) || 
        (alice >= subscriptionCost && charlie >= subscriptionCost) ||
        (bob >= subscriptionCost && charlie >= subscriptionCost)) {
        printf("Yes, two of them can contribute to buy a subscription.\n");
    } else {
        printf("No, two of them cannot contribute enough to buy a subscription.\n");
    }

    return 0;
}
