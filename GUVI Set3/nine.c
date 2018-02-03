#include<stdio.h>
int main(){
int min,temp,hour;
printf("Enter Minutes\n");
scanf("%d",&min);

hour=min/60;
min=min%60;
printf("%d %d",hour,min);

return 0;}
