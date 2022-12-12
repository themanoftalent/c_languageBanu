// write the type of the given

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

union {
    .... f; //write the missing and the type
     .... .... i; //write the missing and the type
} // here something is missing  :))

int main(int argc, char *argv[])
{
    u.f = 1.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 2.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 3.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 4.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 5.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 6.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 7.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 8.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 9.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);
    u.f = 10.0;
    printf("%f %x %d %d \n", u.f, u.i, u.i >> 23, (u.i >> 23) & 0xff);

    return 0;
}
