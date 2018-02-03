#include<stdio.h>
int main(){
int num,num1,temp;
printf("Enter two number\n");
scanf("%d%d",&num,&num1);
temp=num;
num=num1;
num1=temp;
printf("%d %d",num,num1);

return 0;}



