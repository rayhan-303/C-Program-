#include<stdio.h>
int main(){

int a,b;
int tmp;

printf("Enter two value..A & B : \n");
scanf("%d%d",&a,&b);

printf("Value..\nA=%d\nB=%d",a,b);

tmp = a;
a = b;
b = tmp;

printf("\n\nSwapped..\nA=%d\nB=%d",a,b);


    return 0;
}
