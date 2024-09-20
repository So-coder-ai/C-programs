#include<stdio.h>
int main()
{
  FILE *pF = fopen("C:\\Users\\narai\\OneDrive\\Desktoptext.txt","w");
  fprintf(pF,"spongob lauda");
  fclose(pF);
  //if(remove("text.txt"==0))
 // {
  //  printf("file was deleted");
 // }
  return 0;
}