// compare name surname 
// ad soyad == şu işlemler

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char name[20];	
	char surname[20];
	printf("please enter:");
	scanf("%s",&name);

	scanf("%s",&surname);
	
	if((strcmp(name,"zehra")==0)&&(strcmp(surname,"isik"))==0){
	
	printf(" name : %s surnmae : %s",name,surname);
	
	}
	else{
		
		printf("please again.");
	}
	return 0;
	
