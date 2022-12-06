#include <stdio.h>
#include <string.h>

int main() {

	int x,y,n,m;
	char a='A',k='k',i='i',f='f';

	printf("\nenter the amount of rows: ");
	scanf("%d",&n);

	printf("\n");
	for(x=1;x<=n;x++) {
		for(y=1;y<=2*(n-x);y++) {
			printf(" ");
		}
		for(y=1;y<=x;y++) {
			printf("%c",a);
		}
		printf(" ");
		for(y=1;y<=x;y++) {
			printf("%c",k);
		}
		printf(" ");
		for(y=1;y<=x;y++) {
			printf("%c",i);
		}
		printf(" ");
		for(y=1;y<=x;y++) {
			printf("%c",f);
		}
		printf("\n");
	}

	return 0;
}