#include<stdio.h>
int main(){
int percentage;
printf("Enter the percentages\n");
scanf("%d",&percentage);
if(percentage >= 90){
printf("Grade A");
}
else if (percentage > 75 && percentage <= 89){
printf("Grade B");
}
else if (percentage >60 && percentage <= 74){
printf("Grade C");
}
else if (percentage >50 && percentage <= 59){
printf("Grade D");
}
else if (percentage >40 && percentage <=49){
printf("Grade E");
}
else {
printf("Grade F");
}
return 0;
}