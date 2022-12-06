// compare name surname 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char name[20];
	char surname[20];
	
    printf("enter your name:");
	scanf("%s",&name);
	printf("enter your surname:");
	scanf("%s",&surname);
	
	if((strcmp(name,"aysegul")==0)&&(strcmp(surname,"yavuz")==0)){
		printf("name:%s surname:%s",name,surname);
	}
	else{
		printf("wrong person");
	}
	
	
	
	return 0;
}
