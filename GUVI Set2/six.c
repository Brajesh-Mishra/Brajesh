#include<stdio.h>
int main(){
int start,end,i ,j;
printf("Enter the Range\n");
scanf("%d%d",&start,&end);
for(i=start+1;i<end;i++)
{
    for(j=2;j<i;j++)
    {   if(i%j==0)
        {
            break;
        }
    }
    if(j==i)
        printf("%d ",i);

}


return 0;}

