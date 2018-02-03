#include<stdio.h>
int main(){
int num,i;
char str[10];
printf("Enter the string and Number\n");
scanf("%s %d",&str,&num);
for(i=0;i<num;i++)
    printf("%s\n",str);

return 0;}
