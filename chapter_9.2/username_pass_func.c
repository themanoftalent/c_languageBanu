#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void login(char username[], char password[]) {
 if (strcmp(username, "BARTU") == 0) {
        if (strcmp(password, "ak1f123") == 0) {
 
 
            printf("\nWelcome.Login Success!");
 
 
        }
        else {
            printf("\nwrong password");
        }
    }
    else {
        printf("\nUser doesn't exist");
        system("exit");
         
    }

  
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
