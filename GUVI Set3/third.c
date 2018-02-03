#include<stdio.h>
int main()
{
int num,i,min;
printf("Enter a Number\n ");
scanf("%d",&num);

int a[num];
printf("Enter %d Element of Array\n",num);
for(i=0;i<num;i++)
    scanf("%d",&a[i]);

min=a[0];
for(i=0;i<num;i++)
   if(min>a[i])
        min=a[i];

printf("%d",min);
return 0;
}
