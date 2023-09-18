#include <stdio.h>

int main()
{
    int t;
    printf("enter no of litres drink: ");
    scanf("%d",&t);
    if (t<2000){
        printf("not followed the doctor suggestion");

    }else if(t=2000){
        printf("followed the doctor suggestion");
    }else{
         printf("follwed the doctor suggestion ");
    }

    return 0;
}