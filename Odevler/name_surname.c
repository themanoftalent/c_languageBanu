// Display your name and surname on screen 
#include <stdio.h>
#include  "stdlib.h"

int main()
{
  char name[10];
  char surname[10];

  printf("Please enter your name:");
  scanf("%s",&name);

  printf("Please enter your surname:");
  scanf("%s",&surname);

  printf("<KING WELCOME TO YOUR EMPEROR>\n");
  printf("Name:%s Surname:%s",name,surname);

  return 0;
}
