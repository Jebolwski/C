#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Soru 1

int kare_al(int *ptr)
{
    *ptr = (*ptr) * (*ptr);
}

int main()
{
    int a = 100;
    kare_al(&a);
    printf("%d", a);
}

//-----------------------
// Soru 2

int ters_al(char dizi[50])
{
    int temp;
    for (int i = 0; i < strlen(dizi); i++)
    {
        int temp = dizi[i];
        dizi[i] = dizi[strlen(dizi) - i - 1];
        dizi[strlen(dizi) - i - 1] = temp;
        printf("%s", dizi[i]);
    }
}
int main()
{
    char dizi[50] = "1234567";
    ters_al(dizi);
}

//-----------------------
// Soru3

int main()
{
    char *ptr = (char *)malloc(sizeof(char) * 50);
    ptr = "Bursa";
    printf("%s", ptr);
}
//-----------------------
// Soru 4

union un
{
    float x;
    char y;
};

int main()
{
    union un z1;
}

//-----------------------
// Soru 6

int main()
{
    int A[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            double random = rand() / RAND_MAX;
            if (random > 0.5)
            {
                A[i][j] = 1;
            }
            else
            {
                A[i][j] = 0;
            }
        }
    }
}

//-----------------------
// Soru 8

int on_kere()
{
    static int a = 0;
    if (a < 10)
    {
        a++;
        printf("%d ", a);
        on_kere();
    }
    else
    {
        return 0;
    }
}
int main()
{
    on_kere();
}

//-----------------------
// Soru 10

int main()
{
    char *dizi[3];
    dizi[0] = "istanbul";
    dizi[1] = "ankara";
    dizi[2] = "izmir";
}
//-----------------------