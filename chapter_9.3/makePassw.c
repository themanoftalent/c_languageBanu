
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit()

#define user "admin"
#define passwd "1234"

struct users {
    char username[20];
    char password[20];
};

void login() {
    struct users kullanici;
    printf("Enter your username: ");
    scanf("%s", kullanici.username);
    printf("Enter your password: ");
    scanf("%s", kullanici.password);
    if (strcmp(user, kullanici.username) == 0 && strcmp(passwd, kullanici.password) == 0) {
        printf("Login successful");
    } else {
        printf("Login failed");
    }

}

int main() {
    login();
    return 0;
}
