#include <stdio.h>
#include <string.h>

int main() {
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);

    int len = strlen(word);

    int i, j;
    for (i = 0; i < len; i++) {
        for (j = 0; j < len - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c ", word[j]);
        }
    printf("\n");
    }


    return 0;
}
