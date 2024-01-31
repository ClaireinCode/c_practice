#include <stdio.h>

int main(void)
{

    long x = 1; //get_long("x: ");
    long y = 3; //get_long("y: ");

    printf("%li\n", x + y);

    float z = (float) x / (float) y;
    printf("%.20f\n", z);

    double w = (double) x / (double) y;
    printf("%.20f\n", w);

}