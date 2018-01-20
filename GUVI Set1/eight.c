#include<stdio.h>
int main(){

int a,i,sum=0;
printf("Enter a Number\n");
scanf("%d",&a);

for(i=a;i>=1;i--){
sum=sum+i;
}

printf("%d",sum);


return 0;
}
