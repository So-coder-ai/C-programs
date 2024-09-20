#include<stdio.h>
#include<string.h>
struct Student
 {
        char name[12];
        int age;    
};

int main()
{
    
    struct Student student1;
    struct Student student2;
   strcpy(student1.name,"bro");
   strcpy(student2.name,"code");
   printf("%s",student1.name);
    return 0;
}