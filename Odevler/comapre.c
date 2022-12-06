#include "stdio.h"
#include "string.h"

#define name "Aysegul"
#define surname "Yavuz"


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
            if (favnumber == 13) {
                printf("You are Aysegul Yavuz");
            } else {
                printf("You are not Aysegul Yavuz");
            }
        } else {
            printf("You are not Aysegul Yavuz");
        }
    } else {
        printf("You are not Aysegul Yavuz");
    }
    return 0;
    
}

