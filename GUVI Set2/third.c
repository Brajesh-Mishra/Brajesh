#include<stdio.h>
int main(){
int num,i,temp=0;
printf("Enter a Number");
scanf("%d",&num);

for(i=2;i<num;i++)
{   if(num%i==0)
    {
        printf("No");
        break;
    }
}
if(num==i)
    printf("yes");

return 0;}
