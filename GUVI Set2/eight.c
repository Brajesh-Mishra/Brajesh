#include<stdio.h>
int main(){
int arm=0,start,end,i,temp,rem;
printf("Enter the Range\n");
scanf("%d%d",&start,&end);
for(i=start+1;i<end;i++)
{
    arm=0;
    temp=i;
    while(temp)
    {
        rem=temp%10;
        arm=arm+rem*rem*rem;
        temp=temp/10;
    }
    if(arm==i)
        printf("%d ",arm);

}

return 0;}

