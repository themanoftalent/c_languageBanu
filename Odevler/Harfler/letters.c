#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int i, j, k, n;
    char c;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%c", 64 + k);
        }
        printf("\n");
    }
    return 0;
}
