#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#define length 10
#define width 20
#define direction 0


typedef struct
{
    int x;
    int y;
}point;
point snake[100];
point food;
void intialize()
{
    
    //snake
snake[0].x=width/2;
snake[0].y=length/2;
food.x=rand()%width;
food.y=rand()%length;
}
void printboard()
{
  
   for(int i=0;i<length;i++)
    {
     for(int j=0;j<width;j++)
    {
       if(snake[i]==i&&snake[i]==j)
       {
            printf("@*");
       }
       
    if(i==food.x&&j==food.y)
    printf("F");
    if((i==0 || i==length-1))
    {
        printf("*");
        
    }
    else if((i>0&&i<length-1)&&(j==0||j==width-1))
    {
        printf("*");
    }
    else if(food.x==i && food.y==j)
    {
       
        printf("");
    }
    else if(snake[i].x==i&& snake[i].y==j)
    {
        printf("");

    }
    else{
        printf(" ");
    }
    

    }
    printf("\n");    

    
}


}
int main()
{
    intialize();
    printboard();

}