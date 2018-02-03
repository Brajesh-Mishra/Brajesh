#include<stdio.h>
int main(){
int num[10],i;
printf("Enter ten number\n");

for(i=0;i<10;i++)
scanf("%d",&num[i]);

int max=num[0];
for(i=0;i<10;i++)
    if(max<num[i])
        max=num[i];

printf("%d",max);

return 0;}




