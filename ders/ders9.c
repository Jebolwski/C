#include <stdio.h>

int main()
{
    float A[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    int determinant = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    A[0][0] = -A[0][0];
    A[1][1] = -A[1][1];
    int temp = A[1][0];
    A[1][0] = A[0][1];
    A[0][1] = temp;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            A[i][j] = (float)A[i][j] / (float)determinant;
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
}