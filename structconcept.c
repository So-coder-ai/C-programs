#include<stdio.h>
#include<string.h>
//struct with type def program
typedef struct
{
    char name[24];
    float cgpa;
    int semester;
}Student ;
int main()
{
    int i;
    printf("enter your details,name,cgpa, semester now\n");
    Student st1 = {"bhola",8.99,1};
    Student st2 = {"rola",8.92,2};
    Student st3 = {"bchutiya",44.6,1};
    Student st4 = {"rhfha",43.92,2};
    Student students[]= { st1,st2,st3,st4};
    for(i=0;i<sizeof(students)/sizeof(students[0]);i++)
    {
        printf("%s\n",students[i].name);
        printf("%d\n",students[i].semester);
        printf("%f\n",students[i].cgpa);
        
    }
    return 0;
}