
#include "stdio.h"
#include "string.h"

// hesap giriş yapma
# define name "Mert"
# define surname "Kaya"
# define password "mertovski"
#define age 20

int main(){
	printf("Enter your names: ");
	char names [20];
	scanf("%s", names);
	
	printf("Enter your surname: ");
	char surnames [20];
	scanf("%s", surnames);
	
	printf("Enter your passwords: ");
	char passwords [30];
	scanf("%s", passwords);
	
	printf("Enter your ages: ");
	int ages;
	scanf("%d", &ages);
	
	if(strcmp(names,name)==0 && ages == age && strcmp(surnames,surname)==0 && strcmp(passwords,password)==0){
		printf("login is succesfully");
	}
	else{
		printf("wrong information");
	}
	return 0;
}


