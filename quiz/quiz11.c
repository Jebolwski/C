#include <stdio.h>

int matrisGiris(int mat1[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matris[%d][%d] : ", i, j);
            scanf("%d", ((*mat1 + i) + j));
        }
    }
}

int matrisYazar(int mat1[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(mat1 + i) + j));
        }
        printf("\n");
    }
}

int matrisCarp(int mat1[3][3], int mat2[3][3], int mat3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int toplam = 0;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                toplam = toplam + *(*(mat1 + i) + j) * *(*(mat2 + i) + j);
            }
            *(*(mat3 + i) + j) = toplam;
            printf("%d ", *(*(mat3 + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    matrisGiris(mat1);
    printf("\n");
    matrisGiris(mat2);
    matrisCarp(mat1, mat2, mat3);
}