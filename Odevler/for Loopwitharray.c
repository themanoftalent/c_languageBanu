// For loop with 2D array myarray[2][2]

// without for loop 

#include "stdio.h"
int main(){
    int numbers[2][2] ={
            {1,2},
            {3,4}
    };
    printf("numbers[0][0]=%d\n",numbers[0][0]);
    printf("numbers[0][1]=%d\n",numbers[0][1]);
    printf("numbers[1][0]=%d\n",numbers[1][0]);
    printf("numbers[1][1]=%d\n",numbers[1][1]);
    return 0;
}


// with for loop 


#include <stdio.h>

int main() { // this is the main function that will be called when the program is run
    
     int j;
     int i;

    int numbers[2][2]= {{1,2}, {3,4}}; //here we have 2 rows and 2 columns in the array
 
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
            printf("The first element is %d\n", numbers[i][j]); 
           
      }
    }

    
    return 0;
}
