//AKIF
//C program to input 10 numbers from user and display 10 numbers using array.

#include <stdio.h>

int main() {
	
	int array[10],x;
	
	printf("enter 10 numbers.\n");
	for(x=0;x<10;x++) {
		printf("number %d = ",x+1);
		scanf("%d",&array[x]);
	}
	
	printf("\nthe numbers you have entered:\n");
	for(x=0;x<10;x++) {
		printf("%d  ",array[x]);
	}
	
	return 0;
}
