
#include "stdio.h"
#include "string.h"

#define name "Zehra"
#define surname "isik"


int main() {
    char myname[10];
    char mysurname[10];
    int favnumber;
    printf("Enter your name:");
    scanf("%s", myname);
    printf("Enter your surname:");
    scanf("%s", mysurname);
    printf("Enter your favourite number:");
    scanf("%d", &favnumber);
    if (strcmp(myname, name) == 0) {
        if (strcmp(mysurname, surname) == 0) {
            if (favnumber == 1) {
                printf("You are Zehra isik ");
            } else {
                printf("You are not Zehra isik");
            }
        } else {
            printf("You are not Zehra isik");
        }
    } else {
        printf("You are not Zehra isik");
    }
    return 0;
    
}
