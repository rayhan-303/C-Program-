#include<stdio.h>
int main(){

int a,b;

printf("Enter two value..A & B : \n");
scanf("%d%d",&a,&b);

printf("Value..\nA=%d\nB=%d",a,b);

a = a^b;
b = a^b;
a = a^b;

printf("\n\nSwapped..\nA=%d\nB=%d",a,b);


    return 0;
}
