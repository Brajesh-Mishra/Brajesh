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

for(i=0;i<num;i++)
    printf("%d %d \n",a[i],i);


return 0;
}

