#include <stdio.h>

int main()
{
    int dizi[100];
    printf("Diziye girdi ekleyin : ");
    scanf("%d", &dizi[0]);
    int i = 1;
    while (1)
    {
        int karar;
        printf("Devam etmek istiyormusunuz (1,0) : ");
        scanf("%d", &karar);
        if (karar == 1)
        {
            printf("Diziye girdi ekleyin : ");
            scanf("%d", &dizi[i]);
            i++;
        }
        else if (karar == 0)
        {
            break;
        }
    }
    int sayi;
    printf("Hangi girdiyi arıyorsunuz : ");
    scanf("%d", &sayi);
    for (int j = 0; j < i; j++)
    {
        if (dizi[j] == sayi)
        {
            printf("%d sayisi %d. indekste bulunuyor.", dizi[j], j);
            break;
        }
        if (j == i - 1)
        {
            printf("Bu sayi dizide bulunmuyor.");
        }
    }

    while (1)
    {
        int karar;
        int sayi1;
        printf("\nDevam etmek istiyormusunuz (1,0) : ");
        scanf("%d", &karar);
        if (karar == 1)
        {
            printf("Hangi girdiyi arıyorsunuz : ");
            scanf("%d", &sayi1);
            for (int j = 0; j < i; j++)
            {
                if (dizi[j] == sayi1)
                {
                    printf("%d sayisi %d. indekste bulunuyor.", dizi[j], j);
                    break;
                }
                if (j == i - 1)
                {
                    printf("Bu sayi dizide bulunmuyor.");
                }
            }
        }
        else if (karar == 0)
        {
            break;
        }
    }
}