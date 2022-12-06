// compare name surname 


#include "stdio.h"
#include "string.h"

#define name "Akif"
#define age 32
#define favnum 3.14


int main() {
//    compare my name and age and favnum 
    printf("Enter your name: ");
    char name1[20];
    scanf("%s", name1);
    printf("Enter your age: ");
    int age1;
    scanf("%d", &age1);
    printf("Enter your favnum: ");
    float favnum1;
    scanf("%f", &favnum1);
if (strcmp(name, name1) == 0 && age == age1 && favnum == favnum1) {
        printf("You are Akif, I know who you are man, my favorite teacher");
    } else {
         printf("You are not Akif, I don't know who you are as I am not that clever");
        
    }
    return 0;
}





