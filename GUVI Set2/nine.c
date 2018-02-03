#include<stdio.h>
int main(){
int num,i,fac=1;
printf("Enter a Number\n");
scanf("%d",&num);
for(i=num;i>=1;i--)
{
fac=fac*i;
}
printf("%d",fac);

return 0;}
