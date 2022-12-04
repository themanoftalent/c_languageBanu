#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for (int u = 0, o = num - 1; u < (num / 2); u++, o--)
    {
        int temp = arr[u];
        arr[u] = arr[o];
        arr[o] = temp;
    }
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
