#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,guesses;
    int score;
    char questions[][100]={"In which year was i born.?",
                            "In which class was i when i was 13 .? ",
                            "In which year did i pass out .?"};
    char answers[][100]={"A .1990","B .1994","C .1900","D .2005",
                        "A .8th","B .7th","C .6th","D .11th",
                        "A .2000","B .2003","C .2022","D .2024"};
                        
    char guess; 
    char correct[3]={'A','B','C'};
    int size = sizeof(questions)/sizeof(questions[0]);
    for(i=0;i<size;i++)
    {
        printf("%s\n",questions[i]);
        printf("***************************\n");
        for(j=i*4;j<(i*4)+4;j++)
        {
            printf("%s\n",answers[j]);
            
        }
        printf("enter the option in character form \n");
        scanf("%c",&guess);
        scanf("%c");
        
        printf("*******************\n");
        guess = toupper(guess);
        if(guess == correct[i])
        {
            printf("correct\n");
            score++;
        }
        else
        {
            printf("wrong");
            score--;
        }
        

    }
  
    printf(" %d",score);
    return 0;
}