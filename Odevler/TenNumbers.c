//AKIF
//C program to input 10 numbers from user and display 10 numbers using array.

#include <stdio.h>
int main()
{
  int dizi[10];
 int i;
  for(i=0;i<10;i++)
  {
    scanf("%d",&dizi[i]);
  }
   for(i=0;i<10;i++)
  {
    printf("%d",dizi[i]);
  }
}
