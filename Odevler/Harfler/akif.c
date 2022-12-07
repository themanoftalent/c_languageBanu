// Make your program write "Akif" in a traianlge shape. 
// you have the code for ABC
// imagine, think, search and do it.
// Best luck!
#include <stdio.h>

int main(){

int k,i,row,b;
char name[25];
printf("enter your name\n");
scanf("%s",&name);
int x = printf(name);
printf("\n\n");

  for(row = 1; row <= x; row++)
  {
        for(i = x - row - 1; i >= 0; i--)
         {
         printf(" ");
         }
    
        for(b=0; b<x; b++)//ordered
        {
            for ( k = 0; k < row ; k++)//how many times of that letter
            {
            printf("%c",name[b]);
            }
        printf(" ");
        }
    
  printf("\n");
  }
}
