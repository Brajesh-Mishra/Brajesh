#include<stdio.h>
int main(){
int num,a=1,d=1,val;
printf("Enter the Number\n");
scanf("%d",&num);
val=a;
while(num)
    {
        printf("%d ",val);
        val=d;
        d=a+d;
    num--;
    }



return 0;}
