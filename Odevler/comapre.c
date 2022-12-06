// compare name and surname and code it on screen. 
#include"stdlib.h"
#include"stdio.h"
#include"string.h"


int main(){
  char name[] ="akif"; 
  char surname[] ="ciftci";
  char x[20];
  char y[20];
printf("name: ");
scanf("%s",x);
    printf("surname: ");
    scanf("%s",y);
 
  printf("%s %s\n", x, y);

    if (strcmp(name, x) == 0 && strcmp(surname, y) == 0) {
        printf("You are Akif, I know who you are man, my favorite teacher");
    } else {
        printf("You are not Akif, I don't know who you are as I am not that clever");

        return 0;
  }
}
