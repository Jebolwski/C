#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir;
    int sutun;
    printf("satir : ");
    scanf("%d", &satir);
    printf("sutun : ");
    scanf("%d", &sutun);
    char *ptr = (int **)malloc(sizeof(int *) * satir);
    for (int i = 0; i < satir; i++)
    {
        ptr[i] = (int *)malloc(sizeof(int) * sutun);
    }
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("ptr[%d][%d] : ", i, j);
            scanf("%d", (*(ptr + i) + j));
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