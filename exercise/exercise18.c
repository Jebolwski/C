#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int bayrak = 1;
    // int toplam = 0;
    // int sayi;

    // while (bayrak != 0)
    // {

    //     printf("bir sayi giriniz : ");
    //     scanf("%d", &sayi);
    //     toplam += sayi;
    //     printf("sayi girmeye devam etmek istiyor musunuz (1,0) : ");
    //     scanf("%d", &bayrak);
    // }
    // printf("girdiginiz sayilarin toplami : %d", toplam);

    int satir;
    int sutun;
    printf("\nsatir : ");
    scanf("%d", &satir);
    printf("sutun : ");
    scanf("%d", &sutun);
    char **ptr;
    ptr = (int **)malloc(sizeof(int *) * satir);
    for (int i = 0; i < satir; i++)
    {
        *(ptr + i) = (int *)malloc(sizeof(int) * sutun);
    }
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("ptr[%d][%d] : ", i, j);
            scanf("%d", (*(ptr + i) + j));
        }
    }
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("%d\n", *(*(ptr + i) + j));
        }
    }

    // char *kelimeler[4] = {"ab", "cd", "ef", "gh"};
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%c\n", kelimeler[i][j]);
    //     }
    // }
}