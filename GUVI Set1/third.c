#include<stdio.h>
int main(){

char ch;
printf("Enter a Alphabate\n");
scanf("%c",&ch);

if(ch=='A'|| ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    printf("Character is Vowel \n");
else
    printf("Character is Consonant \n");





return 0;
}
