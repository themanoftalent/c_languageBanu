#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "Vahdettin";
    char surname[] ="Okur";

    char namei[20];
    char surnamei[20];
    printf("Enter your name: \n");
    scanf("%s",&namei);
    printf("Enter your surname: \n");
    scanf("%s",&surnamei);


    int ns = strcmp(namei,name);
    printf("%d\n",ns);
    int ss = strcmp(surnamei,surname);
    printf("%d\n",ss);

    if ((!ns)&(!ss)){
        printf("\nWelcome %s %s",name,surname);
    }
    else if((!ns)^(!ss)){
        printf("\nOne of them is incorrect");
    }
    else{
        printf("\nAll of them are incorrect");
    }

}
