#include<stdio.h>
int main(){
int num,arm=0,rem,temp;
printf("Enter a Number\n");
scanf("%d",&num);
temp=num;
while(num)
{
    rem=num%10;
    arm=arm+rem*rem*rem;
    num=num/10;
}
if(arm==temp)
    printf("Yes");
else
    printf("No");

return 0;
}
