// Make your program write "Akif" in a traianlge shape. 
// you have the code for ABC
// imagine, think, search and do it.
// Best luck!

#include <stdio.h>
#include "string.h"

int main()
{
    int i, j, rows,len;
    printf("Enter number of rows: ");
    char a='A';
    char k='K';
    char c='I';
    char f='F';
    
    scanf("%d", &rows);
   
   
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=(2*rows - 2*i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c",a);
        }
        
        for(j=i; j<rows; j++)
        {
            printf("");
        }
        for(j=1; j<=i; j++)
        {
          printf("%c",k);  
        }
        for(j=1; j<=i; j++)
        {
            printf("%c",c);
        }
        for(j=1; j<i; j++)
        {
            printf("");
        }

        for(j=1; j<=i; j++)
        {
            printf("%c",f);
        }
        printf("\n");
    
    }  
    
    
    return 0;
}
