#include <stdio.h>
#include <stdlib.h>

int main()
{
int array[10];


printf("enter numbers of array:\n");
int i;


for(i=0; i<10; i++)
{
    printf("%d.elements:",i+1);
      scanf("%d\n",&array[i]);
}
for ( i = 0; i < 10; i++)
{
    printf("%4d",array[i]);
}

    return 0;
}
