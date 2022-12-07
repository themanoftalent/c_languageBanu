#include <stdio.h>

int main() {
    int numbers[3][10] ={
            {2, 1, 2, 3, 4, 5, 6, 7, 7, 8},
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {11, 12, 13,14, 15, 16, 17, 18, 19, 20},
    };

    for (int i = 0; i < 10; ++i) {
        printf("\n----------- Student %d details ----------- \n", i);
        int total = 0;
        int totalSubjects = 0;
        for (int j = 0; j < 3; ++j) {
            printf("Subject %d marks: %d \t", j, numbers[j][i]);
            total += numbers[j][i]; // total = total + numbers[j][i];
            totalSubjects++;
        }
    float average = (float)total / (float)totalSubjects;
    printf("Average: %.2f \n", average);
    }
    return 0;
}
