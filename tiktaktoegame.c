#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
char board[3][3];
const char player='X';
const char computer='O';
int checkfreespaces()
{
    int freespaces=0;
    for(int i=0;i<3;i++)
    {
        for(int j =0 ;j<3;j++)
        {
            if(board[i][j]==' ')
            {
                freespaces++;
            }
        }
    }
}
char printboard()
{
    printf(" %c | %c | %c ",board[0][0], board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[1][0], board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c\n ",board[2][0], board[2][1],board[2][2]);
    
}
void playermove()
{
    int x;
    int y;
    do{
        printf("enter the rows");
        scanf("%d",&x);
        x--;
        printf("enter the columns");
        scanf("%d",&y);
        y--;
        if(board[x][y]!=' ')
        {
            printf("invalid input!!");
        }
        else{
            board[x][y]= player;
            break;
        }
    }while(checkfreespaces()>0);
}
char checkwinner()
{
    
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2])
        {
            return board[i][0];
            
            
        }
    }
    for(int i=0;i<3;i++)
    {
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i])
        {
            return board[0][1];
            
        
        }
        
    }
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2])
    {
        return board[0][0];
        
        
    }
    else if(board[0][2]==board[1][1] && board[0][2]==board[2][0])
    {
        return board[0][2];
        
        
    }
    else{
        return ' ';
        
    }
}
void computermove()
{
    srand(time(0));
    do
    {
        
        int x=rand()%3;
        int y=rand()%3;
        if(board[x][y]==' ')
        {
            board[x][y] = computer;
            break;
        }
    }while(checkfreespaces>0);
    
}
void printwinner(char Winner)
{
    if(Winner==player)
    {
        printboard();
        printf("player is the winner");
        

    }
    else if(Winner== computer)
    {
        printboard();
        printf("computer is the winnner YOu loose!!");
    }
    else{
        printboard();
        printf("it was a tie");
    }
}
void resetboard()
{
    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            board[i][j]=' ';
        }
    }
}
int main()
{
    char winner=' ';
    resetboard();
    while(winner ==' ' && checkfreespaces()>0)
    {
        printboard();
         playermove();
        if(checkwinner()==player)
        {
            winner = player;
            break;
        }

        
        computermove();
        if(checkwinner()==computer)
        {
            winner = computer;
            break;
        }
    }
    printwinner(winner);
}