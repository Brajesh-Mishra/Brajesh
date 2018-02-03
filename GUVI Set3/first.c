#include<stdio.h>
int main(){
int n,i,a,d,sum=0,temp;
printf("Enter n,a&d\n");
scanf("%d%d%d",&n,&a,&d);
temp=a;
for(i=0;i<n;i++)
    {
        sum=sum+temp;
        temp=temp+d;
    }
printf("%d",sum);
return ;
}
