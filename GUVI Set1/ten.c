#include<stdio.h>
int main(){

int a,n=0;
printf("Enter a Number\n");
scanf("%d",&a);

while(a)
{
a=a/10;
n++;
}
printf("%d",n);


return 0;
}
