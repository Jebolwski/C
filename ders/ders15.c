#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("num1 : ");
    scanf("%d", &num1);
    printf("num2 : ");
    scanf("%d", &num2);
    int buyuk;
    int kucuk;
    if (num1 > num2)
    {
        buyuk = num1;
        kucuk = num2;
    }
    else
    {
        buyuk = num2;
        kucuk = num1;
    }
    static int toplam1 = 1;
    static int toplam2 = 1;
    for (int i = 1; i < buyuk; i++)
    {
        toplam1 *= i;
    }
    for (int i = 1; i < kucuk; i++)
    {
        toplam2 *= i;
    }
    printf("per(%d,%d): %f", buyuk, kucuk, (float)toplam1 / toplam2);
}