#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;
 
for (i = 1; i<=4; i++){
    for(k = 0; k <4-i; k++){
        printf(" ");
    }
    for(j = 0; j<i; j++){
        printf("A");
        break;
    } 
    printf(" ");
    for(j = 1; j<i; j++){
        printf("k");
        break;
    } 
    printf(" ");
    for(j = 2; j<i; j++){
        printf("i");
        break;
    }
    printf(" ");
    for(j = 3; j<i; j++){
        printf("f");
        break;
    }
    printf("\n");
}
    
}
