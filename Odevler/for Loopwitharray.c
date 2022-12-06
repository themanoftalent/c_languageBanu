#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {

    int myArray[2][2];
    int i,j;

    for ( i = 0; i < 2 ; i++)
    {
        for (j  = 0; j < 2; j++)
        {
            myArray[i][j] = i,j;
        }
        
        

        
    }
    printf("\n");
    for ( i=0; i<2; i++)
    {   
        printf("\n");
        for (j  = 0; j < 2; j++)
        {
            printf("%d ", myArray[i][j]);
        }      
        
       
    }
    printf("\n");

    return 0;
}
