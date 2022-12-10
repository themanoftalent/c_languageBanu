#include <stdio.h>

// Akif was here 😇
//Gosh!
int main()
{
    int i,j,k;
    
    printf("enter ur name : Akif\n");

for (i = 1; i<5; i++){
    for(k = 0; k < 5-i; k++){
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
