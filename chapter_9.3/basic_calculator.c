#include "stdio.h"

// Prototype:
void calculator();


int main() {
    calculator();
}

void calculator() {
    int number_1, number_2, result;
    char op; // op that means operator

    printf("Enter the first number: ");
    scanf("%d", &number_1);
    printf("Enter the second number: ");
    scanf("%d", &number_2);
    printf("Enter the operator: ");
    scanf(" %c", &op);

    if (op == '-') {
        result = number_1 - number_2;
        printf("The result is: %d", result);
    } else if (op == '+') {
        result = number_1 + number_2;
        printf("The result is: %d", result);
    } else if (op == '*') {
        result = number_1 * number_2;
        printf("The result is: %d", result);
    } else if (op == '/') {
        result = number_1 / number_2;
        printf("The result is: %d", result);
    } else {
        printf("Invalid operator");
    }

}


