#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int arr[10];
  int i;
  

  for(i=0;i<10;i++){
  	
    printf("number %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  for(i=0;i<10;i++){
    printf("%d \n",arr[i]);
  }
	
	
   return 0;	
}
