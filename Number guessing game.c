#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int high,low;
int guass_number;
int user_guass;
int guass_count=0;

printf("Enter a limit\n");
printf("Highest : ");
scanf("%d",&high);
printf("Lowest : ");
scanf("%d",&low);


srand(time(0));
guass_number = ((rand() % (high - low) + 1) + low);

printf("\nOk, Now guass a number : ");

do{

scanf("%d",&user_guass);

if(user_guass > guass_number)
{
    printf("Too high, try again..! ");
}
else if(user_guass < guass_number)
{
    printf("Too low, try again..! ");
}
    guass_count++;
}
while(user_guass != guass_number);

printf("\n\nCorrect..!\nThe number is : %d\nYou tried %d times.\n",guass_number,guass_count);


    return 0;
}
