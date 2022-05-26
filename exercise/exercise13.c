#include <stdio.h>
#include <string.h>

void kelime_kopyala(char kelime1[], char kelime2[])
{
    for (int i = 0; i < strlen(kelime2) + 1; i++)
    {
        kelime1[i] = kelime2[i];
    }
}

void kelime_terse_cevir(char kelime[])
{

    for (int i = 0; i < strlen(kelime) / 2; i++)
    {
        char temp = kelime[i];
        printf("%c <-> %c", kelime[i], kelime[strlen(kelime) - i - 1]);
        printf("\n");
        kelime[i] = kelime[strlen(kelime) - i - 1];
        kelime[strlen(kelime) - i - 1] = temp;
    }
}

int main()
{

    char kelime1[100] = "Daniel";
    char kelime2[100] = "Petr";
    kelime_kopyala(kelime1, kelime2);
    printf("%s\n", kelime1);
    kelime_terse_cevir(kelime1);
    printf("%s\n", kelime1);
}