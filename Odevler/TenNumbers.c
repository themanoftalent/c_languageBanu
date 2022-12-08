#include <stdio.h>

int main() {
    int nums[10];
    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d",&num);
        nums[i] = num;
    }
    for (int i = 0; i < 10; i++) {
        printf("\n%d", nums[i]);
    }
    return 0;
}