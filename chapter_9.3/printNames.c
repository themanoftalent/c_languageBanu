// Printf as many name as you wish using for loop

#include <stdio.h>

int main(){
    
    char name[5][10];
    
    printf("enter 5 names = \n ");
    
    for(int i=0;i<5; i++){
    scanf("%s\n",name[i]);

    }
    
    // to print
    for(int i=0;i<5; i++){
        printf("\n%s\n",name[i]);
    }
    return 0;
}
