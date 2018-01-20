#include<stdio.h>
int main(){

char ch;
printf("Enter a Character\n");
scanf("%c",&ch);

if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    printf("Alphabate");
else
    printf("No");

return 0;
}
