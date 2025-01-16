#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

char user_option;
int score=0;

struct Question{
char que[100];
char ansA[50];
char ansB[50];
char ansC[50];
char ansD[50];
char correct_ans;
};

struct Question quiz[4];

strcpy(quiz[0].que,"\n1. Muktijuddho hoy koto sale??\n");
strcpy(quiz[0].ansA,"A. 1971");
strcpy(quiz[0].ansB,"B. 1972");
strcpy(quiz[0].ansC,"C. 1954");
strcpy(quiz[0].ansD,"D. 1978");
quiz[0].correct_ans = 'A';

strcpy(quiz[1].que,"\n2. Vasa andolon hoy koto sale??\n");
strcpy(quiz[1].ansA,"A. 1971");
strcpy(quiz[1].ansB,"B. 1972");
strcpy(quiz[1].ansC,"C. 1952");
strcpy(quiz[1].ansD,"D. 1978");
quiz[1].correct_ans = 'C';

strcpy(quiz[2].que,"\n3. Manush er chok koyta??\n");
strcpy(quiz[2].ansA,"A. 1 ta");
strcpy(quiz[2].ansB,"B. 72 ta");
strcpy(quiz[2].ansC,"C. 19 ta");
strcpy(quiz[2].ansD,"D. 2 ta");
quiz[2].correct_ans = 'D';

strcpy(quiz[3].que,"\n4. Manush er hat koyta??\n");
strcpy(quiz[3].ansA,"A. 1 ta");
strcpy(quiz[3].ansB,"B. 2 ta");
strcpy(quiz[3].ansC,"C. 19 ta");
strcpy(quiz[3].ansD,"D. 22 ta");
quiz[3].correct_ans = 'B';


for(int i=0; i<4; i++)
{
printf("%s\n",quiz[i].que);
printf("%s\n",quiz[i].ansA);
printf("%s\n",quiz[i].ansB);
printf("%s\n",quiz[i].ansC);
printf("%s\n",quiz[i].ansD);

printf("\nA,B,C or D : ");
scanf(" %c",&user_option);

if(toupper(user_option) == quiz[i].correct_ans)
{
    printf("Correct! you got a point..\n");
    score++;
}
else
{
    printf("Wrong!\n");
}
}



printf("\n----------------------------------------\nYou got %d out of 4",score);

    return 0;
}
