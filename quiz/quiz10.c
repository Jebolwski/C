#include <stdio.h>

int main()
{
    int *a, b;
    b = 10;
    printf("b'nin adresi : %d\n", &b);
    printf("b'nin degeri : %d\n\n", b);
    a = &b;
    printf("b'nin adresi : %d\n", a);
    printf("b'nin degeri : %d\n\n", *a);
    b = 15;
    printf("b'nin degeri : %d\n", a);
    printf("b'nin degeri : %d\n\n", *a);
    *a = 4;
    printf("b'nin adresi : %d\n", a);
    printf("b'nin degeri : %d\n", *a);
}