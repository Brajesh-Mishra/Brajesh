#include<stdio.h>
#include<string.h>
int main()
{
char str[10],stp[10];
printf("Enter the String\n");
scanf("%s %s",str,stp);
if(strlen(str)>=strlen(stp))
    printf("%s",str);
else
    printf("%s",stp);

return 0;
}
