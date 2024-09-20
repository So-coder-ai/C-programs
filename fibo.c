#include<stdio.h>
void fibonacci(int x)
{
    int t1=0;
    int t2=1;
   printf("fibonaici series %d,%d,",t1,t2); 
   int nextterm=t1+t2;   
    for(int i=3;i<x;i++)
    {
          printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
      
    }
}
int main()
{
    printf("enter the number to which u want fibonacci series");
    int len=10 ;
     

    fibonacci(len);
    return 0;

}