#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int bookId; 

}Book1,Book2;

int main() {

    struct Books Book1,Book2;
    printf("Enter Book1's title: \n");
    scanf("%[^\n]%*c",&Book1.title);
    printf("Enter Book1's author: \n");
    scanf("%[^\n]%*c",&Book1.author);
    printf("Enter Book1's subject: \n");
    scanf("%[^\n]%*c",&Book1.subject);
    printf("Enter Book2's title: \n");
    scanf("%[^\n]%*c",&Book2.title);
    printf("Enter Book2's author: \n");
    scanf("%[^\n]%*c",&Book2.author);
    printf("Enter Book2's subject: \n");
    scanf("%[^\n]%*c",&Book2.subject);
    

    Book2.bookId = 6495700;
    printf("-------------------------------------\n");
    printf("Book 1 title : %s \n", Book1.title);
    printf("Book 1 author : %s \n", Book1.author);
    printf("Book 1 subject : %s \n", Book1.subject);
    printf("Book 1 ID : %d \n", Book1.bookId);
    printf("-------------------------------------\n");
    printf("Book 2 title : %s \n", Book2.title);
    printf("Book 2 author : %s \n", Book2.author);
    printf("Book 2 subject : %s \n", Book2.subject);
    printf("Book 2 ID : %d \n", Book2.bookId);
    return 0;

}