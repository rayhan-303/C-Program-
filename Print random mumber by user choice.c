#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int a,b;
int high,low;
char sorto;

printf("Do you want to fix limit? only Y or N .....");
scanf("%c",&sorto);

srand(time(0));

if(sorto == 'Y' || sorto == 'y')
{
printf("Enter a limit, highest : ");
scanf("%d",&high);
printf("Enter a limit, lowest : ");
scanf("%d",&low);

if(high > low){
a = ((rand() % (high - low) + 1) + low);
printf("\nRandom number is : %d",a);
}
else
{
    printf("\nTry again!");
}
}
else
{
    b = rand();
    printf("\nRandom number is : %d",b);
}


    return 0;
}
