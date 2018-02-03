#include<stdio.h>
int main()
{
int num,i,max;
printf("Enter a Number\n ");
scanf("%d",&num);

int a[num];
printf("Enter %d Element of Array\n",num);
for(i=0;i<num;i++)
    scanf("%d",&a[i]);

max=a[0];
for(i=0;i<num;i++)
   if(max<a[i])
        max=a[i];

printf("%d",max);
return 0;
}
