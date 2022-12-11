#include <stdio.h>
#include <string.h>
int main()
{
char word[100];
int i, j, length;
printf("Enter a word or sentence:\n");
gets(word);
length = strlen(word);
for ( i = 0 ; i < length ; i++ )
{
for(j = 5; j > i; j--)
{
printf(" ");
}
for( j = 0 ; j <= i ; j++ )
{
printf("%c", word[j]);
printf(" ");
}
printf("\n");
}
return 0;
}
