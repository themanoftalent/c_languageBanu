#include <stdio.h>
#include <stdlib.h>

int main() {

	int n,error;
	char letters[][26]={"A",
			    "AB",
			    "ABC",
			    "ABCD",
			    "ABCDE",
			    "ABCDEF",
			    "ABCDEFG",
			    "ABCDEFGH",
			    "ABCDEFGHI",
			    "ABCDEFGHIJ",
                            "ABCDEFGHIJK",
                            "ABCDEFGHIJKL",
                            "ABCDEFGHIJKLM",
                            "ABCDEFGHIJKLMN",
                            "ABCDEFGHIJKLMNO",
                            "ABCDEFGHIJKLMNOP",
                            "ABCDEFGHIJKLMNOPQ",
                            "ABCDEFGHIJKLMNOPQR",
                            "ABCDEFGHIJKLMNOPQRS",
                            "ABCDEFGHIJKLMNOPQRST",
                            "ABCDEFGHIJKLMNOPQRSTU",
                            "ABCDEFGHIJKLMNOPQRSTUV",
                            "ABCDEFGHIJKLMNOPQRSTUVW",
                            "ABCDEFGHIJKLMNOPQRSTUVWX",
                            "ABCDEFGHIJKLMNOPQRSTUVWXY",
                            "ABCDEFGHIJKLMNOPQRSTUVWXYZ",};

	do {
		printf("\nenter a number between 0 and 26: ");
		scanf("%d",&n);

		if(n<=26){
			if(n==0){
				printf("there is nothing to print.\n");
			}
			else {
				printf("\n");
				for(int x=0;x<n;x++) {
					printf("%*s",n-(x+1),"");
					for(int y=0;y<n;y++) {
						printf("%c",letters[x][y]);
					}
					printf("\n");
				}
				error=0;
			}
		}
		else {
			printf("error: there are 26 numbers in the english alphabet. enter a valid number.\n");
			error=1;
		}
	}
	while(error==1);

	return 0;
}