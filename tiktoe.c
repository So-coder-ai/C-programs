#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
char board[3][3];
const char PLAYER='X';
const char COMPUTER='O';

int checkFreeSpaces()
{
    int freespace=9;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[i][j]==' ')
            {
                freespace--;
            }
        }
    }
    return freespace;
}
void playerMove()
{
    int x;
    int y;
    do{
        printf("ENTER THE # OF ROW : \n");
        scanf("%d",&x);
        x--;
        printf("ENTER THE # OF COLUMN : \n");
        scanf("%d",&y);
        y--;
        if(board[x][y]==' ')
        {
            board[x][y]=PLAYER;
            break;
           

        }
        else
        {
             printf("invalid input enter again\n");
             printboard();
        }
    }while(checkFreeSpaces()!=0||board[x][y]!=' ');
    
    
}
void ComputerMove()
{
    srand(time(0));
    int x;
    int y;
    if(checkFreeSpaces()>0)
    {
    do{
        x= rand()%3;
        y=rand()%3;
        
    }while(board[x][y]!=' ');
    board[x][y]= COMPUTER;
    
    }
    else
    {
        printWinner(' ');

    }
}
char Checkwinner()
{
    //checking horizontally
   for(int i=0;i<3;i++)
   {
    if(board[i][0]==board[i][1]&&board[i][0]==board[i][2])
    {
        return board[i][0]; 
    }
   }
   for(int i=0;i<3;i++)
   {
    if(board[0][i]==board[1][i]&&board[i][0]==board[2][i])
    {
        return board[0][i]; 
    }
   }
   if(board[0][0]==board[1][1]&& board[0][0]==board[2][2])
   {
    return board[0][0];
   }
    if(board[0][2]==board[2][2]&& board[0][2]== board[2][0])
   {
    return board[0][2];
    
   }
   return ' ';
}
void printWinner(char winner)
{
    if(winner==PLAYER)
    {
        printf("YOu are the winner");
    }
    else if(winner==COMPUTER)
    {
        printf("computer wins");

    }
    else
    {
        printf("it was a tie !!");
    }
}
void printboard()
{

        printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
        printf("\n---|---|---\n");
        printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
        printf("\n---|---|---\n");
        printf(" %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
        
}
void resetboard()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            board[i][j]=' ';
        }
    }

}

int main()
{
    char winner =' ';
    resetboard();
    while(checkFreeSpaces()!=0 || winner==' ')
    {
        printboard();
        playerMove();
        winner=Checkwinner();
        if(winner !=' '|| checkFreeSpaces()==0)
        {
            break;
        }
       
        ComputerMove();
        winner=Checkwinner();
        if(winner !=' '|| checkFreeSpaces()==0)
        {
            break;
        }
    }
    printboard();
    printWinner(winner);
    return 0;
   
}