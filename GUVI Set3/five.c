#include<stdio.h>
#include<stdio.h>
int main()
{
int num,i,min,j,temp;
printf("Enter a Number\n ");
scanf("%d",&num);

int a[num];
printf("Enter %d Element of Array\n",num);
for(i=0;i<num;i++)
    scanf("%d",&a[i]);

for(i=0;i<num;i++)
        for(j=i+1;j<num;j++)
            if(a[i]>a[j])
                {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;

                }
num=floor(num/2);
    printf("%d ",num);



return 0;
}


