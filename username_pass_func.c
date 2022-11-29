// //create a username and password and check it with function

// #include "stdio.h"
// #include "stdlib.h"
// #include "string.h"
// #include "ctype.h" // for isdigit()

// void login(char username[], char password[]) {
// //   your code here  
// //   code burada
  
// }

// int main() {
//     char username[20];
//     char password[20];
//     printf("Enter your username: ");
//     scanf("%s", username);
//     printf("Enter your password: ");
//     scanf("%s", password);
//     login(username, password);
//     return 0;
// }


#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit()

void login(char username[], char password[]) {
    char username1[20];
    char password1[20];
    printf("Enter your username: ");
    scanf("%s", username1);
    printf("Enter your password: ");
    scanf("%s", password1);
    if (strcmp(username, username1) == 0 && strcmp(password, password1) == 0) {
        printf("You are logged in");
    } else {
        printf("Wrong username or password");
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
