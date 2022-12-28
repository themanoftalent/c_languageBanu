#include <stdio.h>

int main() {
    int numbers[3][10] ={
            {2, 1, 2, 3, 4, 5, 6, 7, 7, 8},
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {11, 12, 13,14, 15, 16, 17, 18, 19, 20},
    };

    for (int i = 0; i < 10; ++i) {
        printf("\n\n         ----------- Student %d details ----------- \n\n", i);
        int total = 0;
        int totalSubjects = 0;
        for (int j = 0; j < 3; ++j) {
            printf("Subject %d marks: %d \t", j+1, numbers[j][i]);
            total += numbers[j][i]; // total = total + numbers[j][i];
            totalSubjects++;
        }
        printf("\nTotal marks of student %d: %d\n", i, total);
        printf("Average marks of student %d: %.2f\n", i, (float)total / totalSubjects);
    }
    return 0;
}
