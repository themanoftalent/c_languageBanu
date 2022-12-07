#include <stdio.h> //WE WROTE FALSE LİBRARY NAME
int main()
{
    char name[10][10]; //we use ; instead , we got an error because we used and we use 
    int i; // we forgot to declare i
    printf("Enter three name:\n"); //we brought printf here
    for (i = 0; i < 3; i++)
    {
    scanf("%s", &name[i]); // delete other printf because it was making the code too crowded :)
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", &name[i]);
    }
    return 0; // we wrote 0 instead 10
}
//R.E.N B.P
