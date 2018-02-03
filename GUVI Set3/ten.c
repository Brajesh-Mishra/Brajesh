#include<stdio.h>
int main()
{
    int hour,hour1,min,min1;
    printf("Enter Time\n");
    scanf("%d %d",&hour,&min);
    scanf("%d %d",&hour1,&min1);
    hour=hour-hour1;
    min=min-min1;
    printf("%d %d",hour,min);

    return 0;

}
