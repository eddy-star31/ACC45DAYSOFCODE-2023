#include <stdio.h>

int main() {
    int amount, cost;
    printf("enter the amount of money you have : ");
    scanf("%d", &cost);

    if (amount < cost) {
        printf("sorry! you cannot buy any chocolates for your loved ones");
    } else {
        int num_of_chocolates = amount/cost;
        printf("you can buy %d chocolates.\n" , num_of_chocolates);

    }
    return 0;
}
