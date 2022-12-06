// compare name surname 
#include <stdlib.h>
#include "stdio.h"
#include "string.h"

int main()
{
  char name[10];
  char surname[10];


  printf("Please enter your name:");
  scanf("%s",&name);

  printf("Please enter your surname:");
  scanf("%s",&surname);
  if((strcmp(name,"Bartu")==0) && (strcmp(surname,"Pacal")==0))
  {
    printf("<KING WELCOME TO YOUR EMPEROR>\n");
    printf("Name:%s Surname:%s",name,surname);
  }

    else
    {
    printf("Who are you?");
    }




  return 0;
}
