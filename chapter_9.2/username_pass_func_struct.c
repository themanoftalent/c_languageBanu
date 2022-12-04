#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit()

struct login {
    char username[20]; // 20 is the maximum length of the username and password that can be entered
    char password[20];   // 20 is the maximum length of the username and password that can be entered
};

void login(struct login log) {
    char username1[20]; 
    char password1[20];   
    printf("Enter your username: ");
    scanf("%s", username1);
    printf("Enter your password: ");
    scanf("%s", password1);
    if (strcmp(log.username, username1) == 0 && strcmp(log.password, password1) == 0) {
        printf("You are logged in");
    } else {
        printf("Wrong username or password");
    }

}

int main() {
    char username1[20]; 
    char password1[20]; 
   

    struct login log;
    printf("Enter your username:");
    scanf("%s",&log.username);
    printf("Enter password:");
    scanf("%s",&log.password);
    login(log);
   
    
    
    return 0;
}



