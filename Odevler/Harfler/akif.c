@themanoftalent 
zeynep kılıç
//I did it two different ways. iI did the first with loop and second with array.....
#include<stdio.h>
#include<string.h>

int main()
{
    char name[]="AKIF";
    int i,j,row;
    row=strlen(name);
    
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");

        
    }
  
    return 0;
}


//2--> ARRAY
#include <stdio.h>

int main(void)
{
  char cdizi[] = "AKIF";

  printf("%.1s\n", cdizi);
  printf("%.2s\n", cdizi);
  printf("%.3s\n", cdizi);
  printf("%.4s\n", cdizi);
  
  return 0;
}
