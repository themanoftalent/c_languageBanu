#include<stdlib.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char name[3][10];

    printf("Enter the 3 name :\n");
int i;
for( i=0; i<3; i++)
{
    scanf("%s",&name[i]);
}

for(i=0; i<3; i++)
{
    printf("%s\t",name[i]);
}
return 0;
}
