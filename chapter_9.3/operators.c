#include <stdio.h>
int main()
{
    int a = 9,b = 4, c=a%b;
    char rem='%';
    printf("Enter your rem:");
    scanf("%c",&rem);
    
    switch(rem)
    {
        case '%':
            printf("%d %c %d = %d ",a,rem,b,c);
            break;
        default:
            printf("you input false symbol of rem...");
            break;
    }
    
    
    
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
