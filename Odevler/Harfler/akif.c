// Make your program write "Akif" in a traianlge shape. 
// you have the code for ABC
// imagine, think, search and do it.
// Best luck!
#include <stdio.h>

int main(){

      int k,i,row;
      char name[25];
      printf("enter your name\n");
      scanf("%s",&name);
      int x = printf(name);
      printf("\n\n");
	
	for(row = 1; row <= x; row++)                      //OK
   {
        for(i = x - row - 1; i >= 0; i--)            //OK
        {
        printf(" ");                                 //OK
        }
        for ( k = 0; k < row ; k++)                  //OK
        {
        printf("%c",name[k]);                        //OK
        }
    printf("\n");
    }
}
