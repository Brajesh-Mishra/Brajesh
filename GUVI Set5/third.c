#include<stdio.h>
#include<string.h>
int main(){
int i;
char str[40], stp[40];
printf("Enter the string\n");
scanf("%s %s", str, stp);
printf("%d %d",strlen(stp),strlen(str));

for(i=0;i<strlen(stp);i++){
str[strlen(str)+i]=stp[i];
printf("%s",str);
printf("\n %c %c ",str[strlen(str)+i],stp[i]);
}

str[strlen(str)+i]='\0';

printf("%s",str);
return 0;}
