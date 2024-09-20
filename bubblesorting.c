#include<stdio.h>
char sort(char alchar[])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(alchar[j]>alchar[j+1])
            {
                char temp =alchar[j];
                alchar[j]=alchar[j+1];
                alchar[j+1]=temp;
            }
        }
    }
}
int Sort(int arr[])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[100];
    printf("ENTER ARRAY OF NUMBERS \n");
    for(int i =0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    char alchar[100];
    printf("ENTER ARRAY OF CHARACTERS \n");
    for(int i =0;i<10;i++)
    {
        scanf("%c",&alchar[i]);
        scanf("%c");
    }
    Sort(arr);
    sort(alchar);
    printf("sorrted array of numbers is :\n");
    for(int i =0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
     printf("sorrted array of characters  is :\n");
    for(int i =0;i<10;i++)
    {
        printf("%c\n",alchar[i]);
    }
    return 0;
}
