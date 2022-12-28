// Assignment: "Imagine you are given an array in which you are supposed to declare two integer variables and 
// one float variable in C and initialize them to 101, 151, and 150.6. 
// The values are then displayed on the screen with conditions by using constants."

#include <stdio.h>

int main(void) {
    const int a = 101, b = 151;
    const float c = 150.6;

    float kume[] = { a, b, c };
    for (int i = 0; i < 3; i++) {
        if (kume[i] == (int) kume[i]) {
            int a = (int) kume[i];
            printf("%d ", a);
        } else {
            printf("%.3f ", kume[i]);
        }
    }

    return 0;
}