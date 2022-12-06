#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;
for (i = 1; i<=5; i++){
    for(k = 0; k <5-i; k++){
        printf(" ");
    }
    for(j = 0; j<i; j++){
        printf("A");
    } 
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("k");
    }
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("i");
    }    
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("f");
    }

    printf("\n");
}
    
}
