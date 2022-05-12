#include <stdio.h>

int main()
{

    int A[3][3];
    int B[3][3];
    printf("A matrisinin degerleri : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("B matrisinin degerleri : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    int toplam = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                toplam += A[i][k] * B[k][j];
            }
            printf("%d ", toplam);
            toplam = 0;
        }
        printf("\n");
    }
}