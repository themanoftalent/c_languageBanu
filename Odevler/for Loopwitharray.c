
// #include "stdio.h"

// int main(){
//     int myarray[9][9] = {
//             {1, 2, 3, 4, 5, 6, 7, 8, 9},
//             {2, 4, 6, 8, 10, 12, 14, 16, 18},
//             {3, 6, 9, 12, 15, 18, 21, 24, 27},
//             {4, 8, 12, 16, 20, 24, 28, 32, 36},
//             {5, 10, 15, 20, 25, 30, 35, 40, 45},
//             {6, 12, 18, 24, 30, 36, 42, 48, 54},
//             {7, 14, 21, 28, 35, 42, 49, 56, 63},
//             {8, 16, 24, 32, 40, 48, 56, 64, 72},
//             {9, 18, 27, 36, 45, 54, 63, 72, 81}
//     };

//     printf("myarray[0][0]=%d\n",myarray[0][0]);
//     printf("myarray[0][1]=%d\n",myarray[0][1]);
//     printf("myarray[1][0]=%d\n",myarray[1][0]);
//     printf("myarray[1][1]=%d\n",myarray[1][1]);
//     printf("myarray[2][2]=%d\n",myarray[2][2]);
//     printf("myarray[2][3]=%d\n",myarray[2][3]);
//     printf("myarray[3][2]=%d\n",myarray[3][2]);
//     printf("myarray[3][3]=%d\n",myarray[3][3]);
//     printf("myarray[4][4]=%d\n",myarray[4][4]);
//     printf("myarray[4][5]=%d\n",myarray[4][5]);
//     printf("myarray[5][4]=%d\n",myarray[5][4]);
//     printf("myarray[5][5]=%d\n",myarray[5][5]);
//     printf("myarray[6][6]=%d\n",myarray[6][6]);
//     printf("myarray[6][7]=%d\n",myarray[6][7]);
//     printf("myarray[7][6]=%d\n",myarray[7][6]);
//     printf("myarray[7][7]=%d\n",myarray[7][7]);
//     printf("myarray[8][8]=%d\n",myarray[8][8]);
//     printf("myarray[8][7]=%d\n",myarray[8][7]);
//     printf("myarray[7][8]=%d\n",myarray[7][8]);
//     printf("myarray[7][7]=%d\n",myarray[7][7]);
//     return 0;
// }
    




include "stdio.h"

int main(){
    int myarray[9][9] = {
            {1, 2, 3, 4, 5, 6, 7, 8, 9},
            {2, 4, 6, 8, 10, 12, 14, 16, 18},
            {3, 6, 9, 12, 15, 18, 21, 24, 27},
            {4, 8, 12, 16, 20, 24, 28, 32, 36},
            {5, 10, 15, 20, 25, 30, 35, 40, 45},
            {6, 12, 18, 24, 30, 36, 42, 48, 54},
            {7, 14, 21, 28, 35, 42, 49, 56, 63},
            {8, 16, 24, 32, 40, 48, 56, 64, 72},
            {9, 18, 27, 36, 45, 54, 63, 72, 81}
    };
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            printf("%d ",myarray[i][j]);
        }
        printf("\n");
    }
}




