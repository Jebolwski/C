#include <stdio.h>

//? Bit İşlemleri
int main()
{
    int a = 32;
    //! 2 ile çarpma
    a = a << 1;
    printf("%d\n", a);
    //! 2 ile bolme
    a = a >> 1;
    printf("%d\n", a);
    //! 2^4 = 16 yı silme
    int b = 87 & 239;
    printf("%d\n", b);
}