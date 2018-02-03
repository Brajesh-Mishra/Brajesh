#include<stdio.h>
#include<string.h>
int main(){
char str[50];
char *p=str;
int count=0;
printf("Enter the String\n");
gets(str);
int len=strlen(str);


while(len){
    if(*p==32)
    {
        count++;
        p++;
    }
    else
    {
        p++;
    }
len--;
}

printf("%d",count);


return 0;}

