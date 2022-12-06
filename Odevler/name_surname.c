#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" 

typedef struct login {
    char username[20];
    char password[20];   
} login;

void main() {
    login *ptr;
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    ptr = (login *) malloc(n * sizeof(login));
    for (i = 0; i < n; i++) {
        printf("Enter the username of employee %d: ", i + 1);
        scanf("%s", ptr[i].username);
        printf("Enter the password of employee %d: ", i + 1);
        scanf("%s", ptr[i].password);
    }
    printf(" Username\t\tPassword of employees \t  ");
    for (i = 0; i < n; i++) {
        printf(" %s\t\t%s \t  ", ptr[i].username, ptr[i].password);
    }
}
