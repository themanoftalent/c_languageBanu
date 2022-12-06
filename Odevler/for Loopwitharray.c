// For loop with 2D array myarray[2][2]
#include "stdio.h"
#include "string.h"

int main(){
	int i,j;
	int mArray[2][2]={
		{1,2},{2,3}
	};
	for(i=0;i<2;i++){
	
		for(j=0;j<2;j++){
			printf("%d",mArray[i][j]);
		}
		
		printf("/n");
}
	
	}
	
