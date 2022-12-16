//AKIF
//C program to input 10 numbers from user and display 10 numbers using array.

#include <stdio.h>
int main()
{
//   YOUR CODE HERE
  int array[10],i;

  for(i=0;i<10;i++){
  printf("number %d: ",i+1);
  scanf("%d",&array[i]);
  }
  for(i=0;i<10;i++){
  printf("%d \n",array[i]);
  }

}
