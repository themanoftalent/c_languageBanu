//AKIF
//C program to input 10 numbers from user and display 10 numbers using array.


#include "stdio.h"
int main()
{
    int number[10];
    printf("Enter ten number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",number[i]);
    }
    return 0;
}
-------------------------------------------------------------------------------------------------
  
#include "stdio.h"
int main()
{
    int number[10];
    printf("Enter ten number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
   
    }
    int i=0;
       while(i<10)
    {
        i++;
        printf("%d",number[i-1]);
        
    }  
    return 0;
}


