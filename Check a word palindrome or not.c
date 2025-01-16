#include<stdio.h>
#include<string.h>

int main(){
char main_word[50];
char reverse_word[50];
int word_count;

printf("Enter a word : ");
fgets(main_word,50,stdin);
main_word[strlen(main_word)-1]='\0';

word_count = strlen(main_word);

for(int i=0; i < word_count; i++)
{
    reverse_word[i] = main_word[word_count-1-i];
}

if(strcmp(main_word,reverse_word) == 0)
{
    printf("Palindrome : Yes");
}
else
{
    printf("Palindrome : Nooo");
}


    return 0;
}

// Palindrome word or not..
