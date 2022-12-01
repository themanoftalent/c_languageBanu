//create a username and password and check it with function

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit()

void login(char username[], char password[]) {
  if(strcmp(username,"aysegul")==0){
	         if(strcmp(password,"yvz123")==0){
			     printf("\n\nLogged In Successful");
		}
		
}
else{
		printf("\n\nIncorrect username or password\n");
		system("exit");
}
//   your code here  
//   code burada
  
}

int main() {
    char username[20];
    char password[20];
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
    login(username, password);
    return 0;
}
