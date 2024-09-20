#include<stdio.h>
enum day{sun=1,mon=2,tue=3,wed=4,thu=5,fri=6,sat=7};
int main()
{
    enum day today = mon;
    if(today==sun|| today == sat)
    {
        printf("you enjoy it's weekends");

    }
    else
    {
        printf("you have to work");

    }
    return 0;
}