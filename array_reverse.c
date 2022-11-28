#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, *arrays, i;
    printf("Enter number:");
    scanf("%d", &number);
    arrays = (int*) malloc(number * sizeof(int));
    for(i = 0; i < number; i++) {
        scanf("%d", arrays + i);
    }

    for(i = number-1; i>=0; i--)
    {
        printf("%d|", arrays[i]);
        
    }
    printf("\n");
    
    for(i = 0; i < number; i++)
        printf("%d|", *(arrays + i));
    return 0;
}
