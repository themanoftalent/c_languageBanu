
#include "stdio.h"
#include "string.h"

#define name "ilayda"
#define surname "Aytaş"


int main() {
    char myname[10];
    char mysurname[10];
    int favnumber;
    printf("Enter your name:");
    scanf("%s",& myname);
    printf("Enter your surname:\n");
    scanf("%s",& mysurname);
    printf("Enter your favourite number:\n");
    scanf("%d", &favnumber);
    if (strcmp(myname, name) == 0) {
        if (strcmp(mysurname, surname) == 0) {
            if (favnumber == 7) {
                printf("You are ilayda Aytaş");
            } else {
                printf("You are not ilayda Aytaş");
            }
        } else {
            printf("You are not ilayda Aytaş");
        }
    } else {
        printf("You are not ilayda Aytaş");
    }
    return 0;
    
}

