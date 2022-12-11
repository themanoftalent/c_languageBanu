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
    scanf("%d", &rows);

    char str[]="AKIF_Ciftci";
    len=strlen(str);
      for(i=0; i<rows; i++)
    {
        for(j=i; j<=len; j++)
        {
            printf(" ");
        }
         for(j=0; j<=i; j++)
        {
           printf("%c",str[j]);
        }
        printf("\n");
    }

    return 0;
}
