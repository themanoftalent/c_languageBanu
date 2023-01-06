// Display your name and surname on screen 
 #include "stdio.h"
#include "stdlib.h"
#include "string.h" 
#include "math.h"
int main(){
char name[40];
char surname[40];
  printf("enter your name: ");
  scanf("%s",name);
  printf("enter your surname: ");
  scanf("%s",surname);
  printf("%s\n%s", name,surname);
  return 0;
}
