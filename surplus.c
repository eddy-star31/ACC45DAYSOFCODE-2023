#include <stdio.h>

int main() {
    int exportA1, exportA2, exportB1, exportB2, importA1, importA2, importB1, importB2;
    
    // Input export and import values for Country A and Country B
    printf("Enter export value for Country A1: ");
    scanf("%d", &exportA1);
    printf("Enter import value for Country A2: ");
    scanf("%d", &importA1);
    printf("Enter export value for Country B1: ");
    scanf("%d", &exportB1);
    printf("Enter import value for Country B2: ");
    scanf("%d", &importB1);
    
    // Calculate trade surplus for Country A and Country B
    int surplusA = exportA1 - importA1;
    int surplusB = exportB1 - importB1;
    
    // Input export and import values for Country C
    printf("Enter export value for Country C: ");
    scanf("%d", &exportA2);
    printf("Enter import value for Country C: ");
    scanf("%d", &importA2);
    
    // Calculate trade surplus for Country C
    int surplusC = exportA2 - importA2;
    
    // Check if Country C is in trade surplus
    if (surplusC > 0) {
        printf("Country C is in trade surplus.\n");
    } else {
        printf("Country C is not in trade surplus.\n");
    }
    
    return 0;
}
