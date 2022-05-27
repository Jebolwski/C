#include <stdio.h>
#include <math.h>

void math_fonk(double (*fonk)(double), double *deg)
{
    *deg = 3.14159265 / 180 * (*deg);
    printf("%f", fonk(*deg));
}

int main()
{
    double x = 135.0;
    double *xptr;
    xptr = &x;
    math_fonk(sin, xptr);
}