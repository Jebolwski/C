#include <stdio.h>

int kare_al(int *a)
{

    *a = (*a) * (*a);
}

struct complex
{
    int a;
    int b;
};

int complex_carpim(struct complex z1, struct complex z2, struct complex z3)
{
    z3.a = z1.a * z2.a;
    z3.b = z1.b * z2.b;
}

int main()
{
    struct complex z1, z2, z3;
    printf("a1+b1j -> a1 : ");
    scanf("%d", &z1.a);
    printf("a1+b1j -> b1 : ");
    scanf("%d", &z1.b);
    printf("a2+b2j -> a2 : ");
    scanf("%d", &z2.a);
    printf("a2+b2j -> b2 : ");
    scanf("%d", &z2.b);
    complex_carpim(z1, z2, z3);
    printf("z3 : %d+%dj", z3.a, z3.b);

    char A[50] = "Ankara";
    char *ptr;
    ptr = A;
    printf("%x\n", ptr);
    printf("%x\n", ptr + 1);
    printf("%x\n", &A[2]);
    printf("%c\n", A[2]);

    int a;
    printf("Karesi alinacak sayi : ");
    scanf("%d", &a);
    kare_al(&a);
    printf("Karesi : %d\n", a);

    int M[3][3];
    int max;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("M[%d][%d] : ", i, j);
            scanf("%d", &M[i][j]);
            max = M[0][0];
            if (i == 0 && j == 0)
            {
                max = M[0][0];
            }
            else if (max < M[i][j])
            {
                max = M[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("Max deger : %d", max);
}