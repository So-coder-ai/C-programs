#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int min=1;
    int max=100;
    srand(time(0));
    int answer; 
    int guess; 
    int guesses;
    answer=(rand() % max)+1;
    
    do
    {
        printf("\n enter the number between %d and %d\n",min,max);
         scanf("%d",&guess);
        printf("************************\n");
        if(guess>answer)
        {
            printf("too high!!\n");


        }
        else if(guess<answer)
        {
            printf("too low!!");


        }
        else{
            printf("you got it right !!***********");
        }
        guesses++;
    }while(guess!=answer);
    printf("************************!!!!!!!!!!");
    printf("number you guesses you took : \n",guesses);
}