#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define name "zeynep"
#define surname "kilic"

int main() {
    printf("Enter name: ");
    char name1[20];
    scanf("%s", name1);
    printf("Enter surname: ");
    char surname1[20];
    scanf("%s", surname1);

    if (strcmp(name1, name) == 0 && strcmp(surname1, surname) == 0  ) {
        printf("TRUE");
    } else {
        printf("Wrong name and surname");
    }
    return 0;
}
