#include<stdio.h>
int main(){
int start,end,i ;
printf("Enter the Range\n");
scanf("%d%d",&start,&end);
for(i=start+1;i<end;i++)
    if((i%2)!=0)
        printf("%d ",i);


return 0;}
