#include <stdio.h>

int main()
{
    // int uzunluk;
    // printf("dizinin uzunlugu : ");
    // scanf("%d", &uzunluk);
    // int dizi[uzunluk];
    // for (int i = 0; i < uzunluk; i++)
    // {
    //     printf("dizi[%d] : ", i);
    //     scanf("%d", &dizi[i]);
    // }

    // int ikili_fark = dizi[0] - dizi[1];
    // int ikili_fark_i = 0;
    // int ikili_fark_j = 0;
    // for (int i = 0; i < uzunluk; i++)
    // {
    //     for (int j = 0; j < uzunluk; j++)
    //     {
    //         if (i != j && dizi[i] - dizi[j] < dizi[j] - dizi[i] && dizi[i] - dizi[j] < ikili_fark)
    //         {
    //             ikili_fark = dizi[i] - dizi[j];
    //             ikili_fark_i = dizi[i];
    //             ikili_fark_j = dizi[j];
    //         }
    //     }
    // }
    // printf("fark : %d (%d,%d)", ikili_fark, ikili_fark_i, ikili_fark_j);

    int uzunluk1;
    int uzunluk2;
    int uzunluk3;
    printf("\ndizi1'in uzunlugu : ");
    scanf("%d", &uzunluk1);

    int dizi1[uzunluk1];
    for (int i = 0; i < uzunluk1; i++)
    {
        printf("dizi1[%d] : ", i);
        scanf("%d", &dizi1[i]);
    }

    printf("\n");
    printf("dizi2'nin uzunlugu : ");
    scanf("%d", &uzunluk2);
    int dizi2[uzunluk2];
    for (int i = 0; i < uzunluk2; i++)
    {
        printf("dizi2[%d] : ", i);
        scanf("%d", &dizi2[i]);
    }

    printf("\n");
    printf("dizi3'un uzunlugu : ");
    scanf("%d", &uzunluk3);
    int dizi3[uzunluk3];
    for (int i = 0; i < uzunluk3; i++)
    {
        printf("dizi3[%d] : ", i);
        scanf("%d", &dizi3[i]);
    }
    int en_buyuk;
    if (uzunluk1 > uzunluk2 > uzunluk3)
    {
        en_buyuk = uzunluk1;
    }
    else if (uzunluk3 > uzunluk2 > uzunluk1)
    {
        en_buyuk = uzunluk3;
    }
    else
    {
        en_buyuk = uzunluk2;
    }

    for (int i = 0; i < uzunluk1; i++)
    {
        for (int j = 0; j < uzunluk2; j++)
        {
            for (int k = 0; k < uzunluk3; k++)
            {
                if (dizi1[i] == dizi2[j] && dizi2[j] == dizi3[k])
                {
                    printf("3 dizideki ortak sayilar : %d", dizi1[i]);
                }
            }
        }
    }
}