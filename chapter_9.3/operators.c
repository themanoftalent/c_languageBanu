#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    printf("Dividend: %d\n",a);
    
    printf("Divisor: %d\n",b);
    
    c = a % b;
    
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
