
#include <stdio.h>

int main() {
    int numbers[3][10] ={
            {2, 1, 2, 3, 4, 5, 6, 7, 7, 8},
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {11, 12, 13,14, 15, 16, 17, 18, 19, 20},
    };

    for (int i = 0; i < 3; ++i) {
        printf("\n----------- Student %d details ----------- \n", i);

        int total = 0;
        int totalSubjects =0;

        for (int j = 0; j <10 ; ++j)
         {
            printf("Subject %d marks: %d \n", j, numbers[i][j]);

            total += numbers[j][i]; // total = total + numbers[j][i];
            totalSubjects++;
         }
//     your code here
    }
    return 0;
}
