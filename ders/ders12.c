#include <stdio.h>

int main()
{
    int i;
    int j;
    printf("i : ");
    scanf("%d", &i);
    printf("j : ");
    scanf("%d", &j);
    int A[i][j];
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("A[%d][%d] : ", a, b);
            scanf("%d", &A[a][b]);
        }
    }
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%d ", A[a][b]);
        }
        printf("\n");
    }
    int aranan;
    printf("Aranan sayi : ");
    scanf("%d", &aranan);

    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%d ", A[a][b]);
        }
        printf("\n");
    }

    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            if (A[a][b] == aranan)
            {
                printf("Aranan sayinin yeri %d.satir %d.sutun.\n", a + 1, b + 1);
                break;
                break;
            }
        }
        if (a == i - 1)
        {
            printf("Bu matriste aradiginiz sayi yok.");
        }
    }
}