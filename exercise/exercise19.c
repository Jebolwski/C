#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct araba
{
    int max_hiz;
    char isim[100];
    int model;
    int vites_sayisi;
};

int func_func(double (*myFunc)(double), double x)
{
    x = x * 3, 14159265 / 360;
    double a = (*myFunc)(x);
    printf("%lf\n", a);
}

int main()
{

    func_func(sin, 0.5);

    int N;
    printf("Dizi satir sayisi : ");
    scanf("%d", &N);
    int **ptr = (int **)malloc(sizeof(int *) * N);
    for (int i = 0; i < N; i++)
    {
        int a;
        printf("sutun sayisi : ");
        scanf("%d", &a);
        ptr[i] = (int *)malloc(sizeof(int) * a);
        for (int j = 0; j < a; j++)
        {
            ptr[i][j] = (i + 1) * (j + 1);
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    printf("---------\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < sizeof(ptr[i]); j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    free(ptr);
    int araba_sayisi;
    printf("Number of cars you want to save : ");
    scanf("%d", &araba_sayisi);
    struct araba arabalar[araba_sayisi];
    char isim1[100];
    for (int i = 0; i < araba_sayisi; i++)
    {
        printf("Car number %d's max speed : ", i + 1);
        scanf("%d", &arabalar[i].max_hiz);

        printf("Car number %d's name : ", i + 1);
        scanf("%s", isim1);
        strcpy(arabalar[i].isim, isim1);

        printf("Car number %d's model : ", i + 1);
        scanf("%d", &arabalar[i].model);

        printf("Number of gears the car number %d has : ", i + 1);
        scanf("%d", &arabalar[i].vites_sayisi);
    }
    for (int i = 0; i < araba_sayisi; i++)
    {
        printf("------------\n");
        printf("Car number %d's max speed : %d\n", i + 1, (arabalar + i)->max_hiz);
        printf("Car number %d's name : %s\n", i + 1, (arabalar + i)->isim);
        printf("Car number %d's model : %d\n", i + 1, (arabalar + i)->model);
        printf("Number of gears the car number %d has : %d\n", i + 1, (arabalar + i)->vites_sayisi);
        printf("------------\n");
    }
}