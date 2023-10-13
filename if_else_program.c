#include<stdio.h>
int main(){
float Time;
printf("enter the current time = ");
scanf("%f",&Time);
if (Time < 4){
printf("Good Morning");
}
else if (Time > 4  && Time < 8){
printf("welcome");
}
else if (Time > 8 && Time < 14){
printf("kuch mann mein nahi aa rha kya likhun");
}
return 0;
}