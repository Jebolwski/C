#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    int *ptr;
    ptr = &x;
    printf("%x\n", ptr);
    double *diziptr;
    double dizi[5] = {1.0, 3.5, -1.2, 6.1, 0.5};
    diziptr = dizi;
    for (int i = 0; i < 5; i++)
    {
        printf("%.1lf ", *(diziptr + i));
    }
    int sayi;
    int *sayiptr;
    printf("\nSayi : ");
    scanf("%d", &sayi);
    sayiptr = &sayi;
    static int toplam = 1;
    for (int i = 1; i <= *sayiptr; i++)
    {
        toplam = toplam * i;
    }
    printf("%d", toplam);
    char str1[50];
    char str2[50];
    char str3[100];
    printf("\nstr1 : ");
    scanf("%s", str1);
    printf("str2 : ");
    scanf("%s", str2);
    char *str1ptr;
    char *str2ptr;
    char *str3ptr;
    str1ptr = str1;
    str2ptr = str2;
    str3ptr = str3;
    for (int i = 0; i < strlen(str1); i++)
    {
        *(str3 + i) = *(str1 + i);
    }
    for (int i = strlen(str1); i < strlen(str1) + strlen(str2); i++)
    {
        *(str3 + i) = *(str2 + i - strlen(str1));
    }
    for (int i = 0; i < strlen(str3); i++)
    {
        printf("%c", *(str3ptr + i));
    }
}