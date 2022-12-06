// For loop with 2D array myarray[2][2]

// without for loop 

#include "stdio.h"
int main(){
    int myarray[2][2] ={
            {1,2},
            {3,4}
    };
    printf("myarray[0][0]=%d\n",myarray[0][0]);
    printf("myarray[0][1]=%d\n",myarray[0][1]);
    printf("myarray[1][0]=%d\n",myarray[1][0]);
    printf("myarray[1][1]=%d\n",myarray[1][1]);
    return 0;
}

############################################################

// with for loop 


#include "stdio.h"

int main(){
    int myarray[2][2]= {
            {1,2},
            {3,4}
    };
   int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",myarray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
