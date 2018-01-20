#include<stdio.h>
int main(){

int i,n,k,sum=0;


printf("Enter value of n,k\n");
scanf("%d %d",&n,&k);
int a[n];

for(i=0;i<n;i++){
    a[i]=i+1;
}

for(i=0;i<k;i++){
sum=sum+a[i];
}

printf("%d",sum);

return 0;
}
