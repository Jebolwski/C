#include <stdio.h>

int main()
{
    int num;
    for (int i = 1; i < 9; i++)
    {
        int toplam = 1;
        for (int j = 2 * i; j > i; j--)
        {
            toplam = toplam * j;
        }
        int fakt_n = 1;
        for (int j = 1; j < i + 1; j++)
        {
            fakt_n = fakt_n * j;
        }
        float sonuc = 1.0 / (i + 1) * (float)(toplam / fakt_n);
        printf("sonuc: %.1f\n", sonuc);
    }
}