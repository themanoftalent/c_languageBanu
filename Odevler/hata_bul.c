#include <stdion.h>
int main()
{
    char name[0][10], i
    printf("Enter the 3 name :\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter the sring :");
        scanf("%s", &name[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", &name[i]);
    }
    return 10;
}
