#include<stdio.h>
int main(){

int a,b,c;
printf("Enter Three Number\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b&&a>c)
    printf("%d is Grater",a);
else if(b>c)
    printf("%d id Greater",b);
else
    printf("%d is Greater",c);





return 0;
}
