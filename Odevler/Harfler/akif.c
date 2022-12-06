#include <stdio.h>

int main() {

	int x,y,n,m;

	printf("\nenter the amount of rows: ");
	scanf("%d",&n);

	if(n==0) {
		printf("\nthere is nothing to print.\n");
	}
	else {
		printf("\n");
		for(x=1;x<=n;x++) {
			for(y=1;y<=2*(n-x);y++) {
				printf(" ");
			}
			for(y=1;y<=x;y++) {
				printf("%c",65);
			}
			printf(" ");
			for(y=1;y<=x;y++) {
				printf("%c",107);
			}
			printf(" ");
			for(y=1;y<=x;y++) {
				printf("%c",105);
			}
			printf(" ");
			for(y=1;y<=x;y++) {
				printf("%c",102);
			}
			printf("\n");
		}
	}

	return 0;
}