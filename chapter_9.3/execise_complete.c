#include <stdio.h>
#include"math.h"

int main(void)
{
    double floor;
    int power;

    printf("Enter a number:");
    scanf("%lf",&floor);
        
    printf("Enter a power:");
    scanf("%d",&power);

    float result=pow(floor,power);
    printf("result:%.5f\n",result);

    return 0;
}
