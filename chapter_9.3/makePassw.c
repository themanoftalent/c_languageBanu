

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"



int main() {

int i =0;
char ch;
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    
    char surname[20];
    printf("Enter surname: ");
    scanf("%s",surname);

    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    char pwd[30];
printf("Enter password:");
while((ch=_getch())!=13)
 {
    pwd[i]=ch;
    i++;
    printf("*");
 }
pwd[i]='\0';
printf("\nYour password=%s\n",pwd);

 printf("Enter name: ");
    char names[20];
    scanf("%s", names);
    printf("Enter surname: ");
    char surnames[20];
    scanf("%s", surnames);

    printf("Enter age: ");
    int ages;
    scanf("%d", &ages);

    printf("Enter password:");
    char passwords[30];
    scanf("%s",&passwords);
if ((strcmp(names,name) == 0) && (strcmp(surnames, surname) == 0) && (ages==age) && (strcmp(passwords, pwd) == 0)) {
printf("Welcome to the system");
}
else 
{
printf("Wrong name/surname/password/age");
}
    return 0;
}

