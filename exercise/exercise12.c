#include <stdio.h>

int main()
{
    int num;
    for (int i = 1; i < 30; i++)
    {
        int fact_n = 1;
        for (int j = 1; j <= i; j++)
        {
            fact_n *= j;
        }
        int iki_n_ust = 1;
        int iki_n = 2 * i;
        for (int j = 1; j < i * 2 - 1; j++)
        {
            iki_n_ust *= j;
        }
        float birinci = (float)iki_n_ust / (fact_n * fact_n);
        int fact_n_arti_1 = 1;
        for (int j = 1; j <= i + 1; j++)
        {
            fact_n_arti_1 *= j;
        }
        int fact_n_eksi_1 = 1;
        for (int j = 1; j <= i - 1; j++)
        {
            fact_n_eksi_1 *= j;
        }
        float ikinci = (float)iki_n_ust / (fact_n_arti_1 * fact_n_eksi_1);
        printf("Sayi : %f\n", (birinci - ikinci));
    }
}