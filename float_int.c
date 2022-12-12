
#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k;
    char name[50];

    printf("enter your name : ");
    scanf("%s", &name);
    k = strlen(name);
  
for (i = 0; i<k; i++){
    for(j = 50; j > i; j--){
        printf(" ");
    }
    for(j = 0; j<=i; j++){
        printf("%c", name[j]);
        printf(" ");
    }
    printf("\n");
}
}

