#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union kalemler
{
    char rotring[50];
    char fabercastel[50];
    int rotringFiyat;
    int fabercastelFiyat;
};

enum cinsiyet
{
    erkek,
    kadin
};

struct kisi
{
    char isim[50];
    int yas;
    int sgn;
    enum cinsiyet c;
};

int main()
{
    union kalemler kalem;
    strcpy(kalem.rotring, "rotring");
    strcpy(kalem.fabercastel, "faber");
    kalem.fabercastelFiyat = 13;
    kalem.rotringFiyat = 33;
    printf("rotring : %s\n", kalem.rotring);
    printf("faber fiyat : %d\n", kalem.fabercastelFiyat);
    printf("rotring fiyat : %d\n", kalem.rotringFiyat);
    printf("%d\n", sizeof(kalem));

    struct kisi kisi1;

    kisi1.yas = 31;
    struct kisi *ptr;
    ptr = &kisi1;
    printf("Kisi ismi : ");
    scanf("%s", kisi1.isim);
    printf("%d\n", ptr->yas);
    printf("%s", ptr->isim);
    struct kisi *ptr1;
    int N;
    printf("\nKac kisi istersiniz : ");
    scanf("%d", &N);
    ptr1 = (struct kisi *)malloc(sizeof(struct kisi) * N);
    for (int i = 0; i < N; i++)
    {
        printf("Kisi %d ismi : ", i + 1);
        scanf("%s", (ptr1 + i)->isim);
    }
    for (int i = 0; i < N; i++)
    {
        printf("Kisi %d : %s\n", i + 1, (ptr1 + i)->isim);
    }
    free(ptr1);
}