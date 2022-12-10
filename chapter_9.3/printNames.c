#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char name[20];

    printf("Enter the number of names: ");
    scanf("%d",&n);

    char arr[n][20];

    printf("\nEnter %d names:\n",n);

    for(int i = 0;i<n;i++){
        scanf("%s",name);
        strcpy(arr[i],name);
    }

    printf("\n---Names---\n");

    for(int i = 0;i<n;i++){
        printf("%d- %s\n",i+1,arr[i]);
    }
    return 0;
}
